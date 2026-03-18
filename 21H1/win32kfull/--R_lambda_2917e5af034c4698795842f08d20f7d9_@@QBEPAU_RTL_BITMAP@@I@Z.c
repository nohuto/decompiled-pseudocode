/*
 * XREFs of ??R_lambda_2917e5af034c4698795842f08d20f7d9_@@QBEPAU_RTL_BITMAP@@I@Z @ 0x183DE6
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAE_NPAE@Z @ 0x184254 (-Initialize@-$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@AAE_NPAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@AAE_NPAE@Z @ 0x1A2B42 (-Initialize@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@AAE_NPAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NPAE@Z @ 0x208D14 (-Initialize@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NPAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__stdcall _lambda_2917e5af034c4698795842f08d20f7d9_::operator()(ULONG SizeOfBitMap)
{
  ULONG v1; // esi
  struct _RTL_BITMAP *result; // eax
  struct _RTL_BITMAP *v3; // edi

  v1 = SizeOfBitMap;
  if ( SizeOfBitMap < 8 )
    v1 = 8;
  result = (struct _RTL_BITMAP *)ExAllocatePoolWithTag(
                                   PagedPoolSession,
                                   (((v1 + 31) >> 3) & 0x1FFFFFFC) + 8,
                                   0x6F736955u);
  v3 = result;
  if ( result )
  {
    RtlInitializeBitMap(result, &result[1].SizeOfBitMap, v1);
    RtlClearAllBits(v3);
    return v3;
  }
  return result;
}
