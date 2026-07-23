/*
 * XREFs of RtlpFcLinearSearchInSortedArray @ 0x18011B248
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x18011B450 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpFcLinearSearchInSortedArray(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  unsigned __int64 i; // rdi
  int v10; // eax

  for ( i = 0LL; i < a3; a2 += a4 )
  {
    v10 = a5(a1, a2);
    if ( v10 < 0 )
      break;
    if ( !v10 )
      return a2;
    ++i;
  }
  return 0LL;
}
