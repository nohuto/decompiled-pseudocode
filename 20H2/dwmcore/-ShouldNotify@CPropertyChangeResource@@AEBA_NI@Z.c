/*
 * XREFs of ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x180070F2C
 * Callers:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180070B3C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180070CF8 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180070E60 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x1801B1214 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x1801B12E8 (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B13C4 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x1801B14AC (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801B1588 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007125C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

unsigned __int8 __fastcall CPropertyChangeResource::ShouldNotify(CPropertyChangeResource *this)
{
  bool ShouldNotify; // al
  __int64 v2; // rcx
  unsigned int v3; // r9d
  char v4; // r8
  int v5; // eax

  ShouldNotify = CNotificationResource::ShouldNotify(this);
  v4 = 0;
  if ( ShouldNotify )
  {
    v5 = *(_DWORD *)(v2 + 64);
    return _bittest(&v5, v3);
  }
  return v4;
}
