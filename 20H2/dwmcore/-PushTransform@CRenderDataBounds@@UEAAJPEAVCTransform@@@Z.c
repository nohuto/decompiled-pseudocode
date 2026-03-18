/*
 * XREFs of ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z @ 0x1800CDD00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800859E8 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CRenderDataBounds::PushTransform(CRenderDataBounds *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax

  if ( ++*((_DWORD *)this + 23) == 1 )
  {
    if ( a2 )
    {
      Matrix = CTransform3D::GetMatrix(a2, 0LL);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)Matrix;
      *(_OWORD *)((char *)this + 40) = *((_OWORD *)Matrix + 1);
      *(_OWORD *)((char *)this + 56) = *((_OWORD *)Matrix + 2);
      *(_OWORD *)((char *)this + 72) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)this + 22) = *((_DWORD *)Matrix + 16);
    }
    else
    {
      *((_QWORD *)this + 3) = 1065353216LL;
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 10) = 0;
      *(_QWORD *)((char *)this + 44) = 1065353216LL;
      *(_QWORD *)((char *)this + 52) = 0LL;
      *((_DWORD *)this + 15) = 0;
      *((_QWORD *)this + 8) = 1065353216LL;
      *((_QWORD *)this + 9) = 0LL;
      *((_DWORD *)this + 20) = 0;
      *((_DWORD *)this + 21) = 1065353216;
      *((_WORD *)this + 44) = 32085;
    }
  }
  return 0LL;
}
