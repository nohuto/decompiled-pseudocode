/*
 * XREFs of CreateSharedReadVisualReferenceMarshaler @ 0x1C01F9B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedReadVisualReferenceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F9940 (-Create@CSharedReadVisualReferenceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PE.c)
 */

__int64 __fastcall CreateSharedReadVisualReferenceMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        __int64 a2,
        struct DirectComposition::CSharedReadVisualReferenceMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedReadVisualReferenceMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != 199 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedReadVisualReferenceMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
