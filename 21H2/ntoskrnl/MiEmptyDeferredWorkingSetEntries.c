/*
 * XREFs of MiEmptyDeferredWorkingSetEntries @ 0x140326744
 * Callers:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiCompletePrivateZeroFault @ 0x1402B5150 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402BB090 (MiResolveTransitionFault.c)
 *     MiUnlockFaultPageTable @ 0x14031CE98 (MiUnlockFaultPageTable.c)
 *     MiCompleteRestrictedImageFault @ 0x140327DF0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x1402B6CC0 (MiAddWorkingSetEntries.c)
 */

__int64 __fastcall MiEmptyDeferredWorkingSetEntries(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int64 v6; // rdx
  char v7; // r9
  __int64 result; // rax

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
