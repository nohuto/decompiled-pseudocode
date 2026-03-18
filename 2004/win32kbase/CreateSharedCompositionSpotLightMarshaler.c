/*
 * XREFs of CreateSharedCompositionSpotLightMarshaler @ 0x1C004EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedCompositionSpotLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C004EB90 (-Create@CSharedCompositionSpotLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@P.c)
 */

__int64 __fastcall CreateSharedCompositionSpotLightMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedCompositionSpotLightMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedCompositionSpotLightMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != 39 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedCompositionSpotLightMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
