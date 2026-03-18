/*
 * XREFs of MiEmptyDeferredWorkingSetEntries @ 0x14029F34C
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiUnlockFaultPageTable @ 0x140299728 (MiUnlockFaultPageTable.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x1402736E0 (MiAddWorkingSetEntries.c)
 */

unsigned __int64 __fastcall MiEmptyDeferredWorkingSetEntries(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int64 v6; // rdx
  char v7; // r9
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)a1;
  v3 = (__int64)(*(_QWORD *)(a1 + 16) << 25) >> 16 << 25;
  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = (*(unsigned __int8 *)(a1 + 13) >> 3) & 2;
  v6 = (v4 << 12) + (v3 >> 16);
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = v5 | 5;
  }
  else
  {
    v7 = v5 | 4;
    if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
      v7 = v5;
  }
  result = MiAddWorkingSetEntries(v2, v6, *(unsigned __int16 *)(a1 + 10), v7);
  *(_WORD *)(a1 + 10) = 0;
  return result;
}
