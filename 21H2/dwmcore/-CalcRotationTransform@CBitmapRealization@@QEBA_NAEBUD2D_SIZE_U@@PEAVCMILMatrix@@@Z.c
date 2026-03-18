/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x180009460
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000923C (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A5C4C (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x180260ED8 (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(
        CBitmapRealization *this,
        const struct D2D_SIZE_U *a2,
        struct CMILMatrix *a3)
{
  char v3; // di
  char v6; // al
  enum DXGI_MODE_ROTATION v7; // r9d

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
  v6 = *((_BYTE *)a3 + 65) & 0xD7;
  *((_BYTE *)a3 + 64) = 85;
  *((_BYTE *)a3 + 65) = v6 | 0x17;
  if ( *((_BYTE *)this + 313) )
  {
    v7 = (*(unsigned int (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 48LL))(this);
    if ( v7 != DXGI_MODE_ROTATION_IDENTITY )
    {
      CMILMatrix::SetToRotation(a3, (float)(int)a2->width, (float)(int)a2->height, v7);
      return 1;
    }
  }
  return v3;
}
