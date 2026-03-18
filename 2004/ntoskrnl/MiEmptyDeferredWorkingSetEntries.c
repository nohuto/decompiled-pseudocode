/*
 * XREFs of MiEmptyDeferredWorkingSetEntries @ 0x14025D264
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x14022D030 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x14025BEB0 (MiCompleteRestrictedImageFault.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiUnlockFaultPageTable @ 0x1402BE1D8 (MiUnlockFaultPageTable.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x1402A43A0 (MiAddWorkingSetEntries.c)
 */

__int64 __fastcall MiEmptyDeferredWorkingSetEntries(__int64 *a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[2] << 25 >> 16 << 25;
  v4 = *((unsigned __int16 *)a1 + 4);
  v5 = (*((unsigned __int8 *)a1 + 13) >> 3) & 2;
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
  result = MiAddWorkingSetEntries(v2, v6, *((unsigned __int16 *)a1 + 5), v7);
  *((_WORD *)a1 + 5) = 0;
  return result;
}
