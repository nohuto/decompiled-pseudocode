/*
 * XREFs of CreateSharedCompositionPointLightMarshaler @ 0x1C01F5750
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedCompositionPointLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F55A4 (-Create@CSharedCompositionPointLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 */

__int64 __fastcall CreateSharedCompositionPointLightMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedCompositionPointLightMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedCompositionPointLightMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != 36 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedCompositionPointLightMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
