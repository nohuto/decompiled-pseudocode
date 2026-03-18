/*
 * XREFs of MiInitializePageFaultPacket @ 0x14026C744
 * Callers:
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiFlushWaitForReadInProgress @ 0x140597FAC (MiFlushWaitForReadInProgress.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x140352E50 (MiFillPteHierarchy.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiInitializePageFaultPacket(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  int v6; // r14d
  int v9; // eax
  __int64 result; // rax

  v6 = a3;
  memset((void *)(a5 + 24), 0, 0x70uLL);
  MiFillPteHierarchy(a2, a5 + 24);
  if ( (a1 & 0x40) != 0 )
  {
    *(_DWORD *)(a5 + 80) |= 0x20u;
    a1 &= ~2uLL;
  }
  *(_QWORD *)(a5 + 8) = a1;
  v9 = *(_DWORD *)(a5 + 80) ^ (v6 << 6);
  *(_QWORD *)a5 = a2;
  result = v9 & 0x40;
  *(_DWORD *)(a5 + 80) ^= result;
  *(_QWORD *)(a5 + 16) = a4;
  return result;
}
