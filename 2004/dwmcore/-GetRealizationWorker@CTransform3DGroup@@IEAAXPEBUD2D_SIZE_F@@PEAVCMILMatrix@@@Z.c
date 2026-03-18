/*
 * XREFs of ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001057C
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180010560 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x1801B7750 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 *     ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801B77A0 (-GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180066BDC (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CTransform3DGroup::GetRealizationWorker(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // ecx
  CTransform3D **v8; // r14
  unsigned __int64 v9; // rbp
  const struct CMILMatrix *Matrix; // rax

  v3 = 0LL;
  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_WORD *)a3 + 32) = 32085;
  v7 = *((_DWORD *)this + 8) ^ ((unsigned __int8)*((_DWORD *)this + 8) ^ (unsigned __int8)(*((_DWORD *)this + 8) + 2)) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) == 2 )
  {
    v8 = (CTransform3D **)*((_QWORD *)this + 19);
    v9 = (unsigned __int64)(*((_QWORD *)this + 20) - (_QWORD)v8 + 7LL) >> 3;
    if ( (unsigned __int64)v8 > *((_QWORD *)this + 20) )
      v9 = 0LL;
    if ( v9 )
    {
      do
      {
        Matrix = CTransform3D::GetMatrix(*v8, a2);
        CMILMatrix::Multiply(a3, Matrix);
        ++v3;
        ++v8;
      }
      while ( v3 != v9 );
      v7 = *((_DWORD *)this + 8);
    }
  }
  *((_DWORD *)this + 8) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2 * (v7 >> 1) - 2)) & 6;
}
