/*
 * XREFs of ??1?$CAutoHandle@PEAUHDC__@@@@QEAA@XZ @ 0x1803F3730
 * Callers:
 *     __lambda_688f7da27bd069ce265bc30902a9ac85_::operator()_::_1_::dtor$0 @ 0x18041F21D (__lambda_688f7da27bd069ce265bc30902a9ac85_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<HDC__ *>::~CAutoHandle<HDC__ *>(HDC *a1)
{
  HDC v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteDC(v1);
  return (int)v1;
}
