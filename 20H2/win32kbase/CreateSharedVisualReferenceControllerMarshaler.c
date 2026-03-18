/*
 * XREFs of CreateSharedVisualReferenceControllerMarshaler @ 0x1C01F2870
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CSharedVisualReferenceControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F2694 (-Create@CSharedVisualReferenceControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResourc.c)
 */

__int64 __fastcall CreateSharedVisualReferenceControllerMarshaler(
        const struct DirectComposition::CSharedSystemResource *a1,
        int a2,
        struct DirectComposition::CSharedVisualReferenceControllerMarshaler **a3)
{
  __int64 result; // rax
  struct DirectComposition::CSharedVisualReferenceControllerMarshaler *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_DWORD *)a1 + 3) != a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = DirectComposition::CSharedVisualReferenceControllerMarshaler::Create(a1, &v5);
  *a3 = v5;
  return result;
}
