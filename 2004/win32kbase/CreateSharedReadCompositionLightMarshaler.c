/*
 * XREFs of CreateSharedReadCompositionLightMarshaler @ 0x1C003D550
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadCompositionLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C003D59C (-Create@CSharedReadCompositionLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@P.c)
 *     ?IsCompositionLight@CSharedReadCompositionLightMarshaler@DirectComposition@@SA_NI@Z @ 0x1C003D928 (-IsCompositionLight@CSharedReadCompositionLightMarshaler@DirectComposition@@SA_NI@Z.c)
 */

__int64 __fastcall CreateSharedReadCompositionLightMarshaler(
        __int64 a1,
        __int64 a2,
        struct DirectComposition::CSharedReadCompositionLightMarshaler **a3)
{
  const struct DirectComposition::CSharedSystemResource *v4; // r8
  __int64 result; // rax
  struct DirectComposition::CSharedReadCompositionLightMarshaler *v6; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( !DirectComposition::CSharedReadCompositionLightMarshaler::IsCompositionLight(*(_DWORD *)(a1 + 12)) )
    return 3221225485LL;
  v6 = 0LL;
  result = DirectComposition::CSharedReadCompositionLightMarshaler::Create(v4, &v6);
  *a3 = v6;
  return result;
}
