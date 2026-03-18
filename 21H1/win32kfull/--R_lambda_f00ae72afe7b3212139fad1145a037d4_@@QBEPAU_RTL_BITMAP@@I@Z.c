/*
 * XREFs of ??R_lambda_f00ae72afe7b3212139fad1145a037d4_@@QBEPAU_RTL_BITMAP@@I@Z @ 0xE9AF6
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAE_NPAE@Z @ 0xE9A8E (-Initialize@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAE_NPAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__stdcall _lambda_f00ae72afe7b3212139fad1145a037d4_::operator()(ULONG SizeOfBitMap)
{
  ULONG v1; // esi
  struct _RTL_BITMAP *PoolWithTag; // edi

  v1 = SizeOfBitMap;
  if ( SizeOfBitMap < 8 )
    v1 = 8;
  PoolWithTag = (struct _RTL_BITMAP *)ExAllocatePoolWithTag(
                                        PagedPoolSession,
                                        (((v1 + 31) >> 3) & 0x1FFFFFFC) + 8,
                                        0x6F736955u);
  if ( !PoolWithTag )
    return 0;
  RtlInitializeBitMap(PoolWithTag, &PoolWithTag[1].SizeOfBitMap, v1);
  RtlClearAllBits(PoolWithTag);
  return PoolWithTag;
}
