/*
 * XREFs of ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x180260ED8
 * Callers:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x180009460 (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18027CD28 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x180260AC8 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180260B00 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::SetToRotation(CMILMatrix *this, float a2, float a3, enum DXGI_MODE_ROTATION a4)
{
  char v4; // al
  int v5; // r9d
  int v6; // r9d
  CMILMatrix *v7; // rcx

  *(_QWORD *)this = 1065353216LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 20) = 1065353216LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1065353216;
  v4 = *((_BYTE *)this + 65) & 0xD7;
  *((_BYTE *)this + 64) = 85;
  *((_BYTE *)this + 65) = v4 | 0x17;
  v5 = a4 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return;
      CMILMatrix::Rotate90(this);
      a2 = a3;
      a3 = 0.0;
    }
    else
    {
      CMILMatrix::Scale(this, -1.0, -1.0, 1.0);
    }
  }
  else
  {
    CMILMatrix::Rotate270(this);
    a3 = a2;
    a2 = 0.0;
  }
  CMILMatrix::Translate(v7, a2, a3);
}
