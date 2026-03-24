/*
 * XREFs of MiUseSlabAllocator @ 0x140318198
 * Callers:
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E7BEC (MiFinalizeImageHeaderPage.c)
 *     MiGetHardFaultPages @ 0x1402E7D84 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUseSlabAllocator(__int64 a1, _BYTE *a2, __int16 a3, _DWORD *a4)
{
  int v4; // eax
  __int64 result; // rax
  int v6; // ecx

  v4 = *(_DWORD *)(*(_QWORD *)a2 + 56LL);
  if ( (v4 & 0x20) == 0 || (v4 & 0x40000000) != 0 || (a3 & 0x400) == 0 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 4);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 92LL) & 0xC0000) == 0 )
  {
    if ( (v6 & 0x10) != 0 && a4 )
    {
      result = 1LL;
      *a4 = 1;
      return result;
    }
    return 0LL;
  }
  if ( (v6 & 8) == 0 || (a2[34] & 2) != 0 && (a2[32] & 0xA) == 8 )
    return 0LL;
  if ( a4 )
    *a4 = 0;
  return 1LL;
}
