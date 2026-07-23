/*
 * XREFs of RtlpFcLowerBounds @ 0x18011B2C0
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x18011B450 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall RtlpFcLowerBounds(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int (__fastcall *a5)(__int64, unsigned __int64))
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v10; // r14

  v6 = a3;
  v7 = a2;
  v8 = a2 + a4 * a3;
  if ( a2 < v8 )
  {
    do
    {
      v10 = v7 + a4 * (v6 >> 1);
      if ( a5(a1, v10) > 0 )
      {
        v7 = v10 + a4;
        v6 += -1LL - (v6 >> 1);
      }
      else
      {
        v6 >>= 1;
        v8 = v10;
      }
    }
    while ( v7 < v8 );
  }
  return v7;
}
