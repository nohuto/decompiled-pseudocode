/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18001587C
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015670 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180264210 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x180210CEC (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(
        CBitmapRealization *this,
        const struct D2D_SIZE_U *a2,
        struct CMILMatrix *a3)
{
  char v3; // di
  enum DXGI_MODE_ROTATION v6; // r9d

  v3 = 0;
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
  if ( *((_BYTE *)this + 281) )
  {
    v6 = (*(unsigned int (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 48LL))(this);
    if ( v6 != DXGI_MODE_ROTATION_IDENTITY )
    {
      CMILMatrix::SetToRotation(a3, (float)(int)a2->width, (float)(int)a2->height, v6);
      return 1;
    }
  }
  return v3;
}
