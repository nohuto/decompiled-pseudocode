/*
 * XREFs of ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x180210CEC
 * Callers:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18001587C (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18023BCDC (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003A358 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800CB03C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x180210710 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180210748 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::SetToRotation(CMILMatrix *this, float a2, float a3, enum DXGI_MODE_ROTATION a4)
{
  int v4; // r9d
  int v5; // r9d
  CMILMatrix *v6; // rcx
  float v7; // xmm5_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm4_4

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
  *((_WORD *)this + 32) = 32085;
  v4 = a4 - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      CMILMatrix::Rotate90(this);
      v8 = v7;
      v9 = 0.0;
    }
    else
    {
      CMILMatrix::Scale(this, -1.0, -1.0, 1.0);
      v8 = v10;
      v9 = v11;
    }
  }
  else
  {
    CMILMatrix::Rotate270(this);
    v9 = v12;
    v8 = 0.0;
  }
  CMILMatrix::Translate(v6, v8, v9);
}
