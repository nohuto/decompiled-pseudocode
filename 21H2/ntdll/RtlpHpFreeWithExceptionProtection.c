/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x180024880
 * Callers:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x18010E064 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(int a1)
{
  unsigned int v1; // r8d
  __int64 v3; // [rsp+48h] [rbp-20h]
  unsigned __int16 v4; // [rsp+88h] [rbp+20h] BYREF

  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v1 = RtlpFreeHeapInternal(a1, (__int64)&v4);
    if ( v1 && v4 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_18016AB18 + 8LL * v4 - 8) + 32LL), -v3);
  }
  else
  {
    return (unsigned int)RtlpFreeHeapInternal(a1, 0LL);
  }
  return v1;
}
