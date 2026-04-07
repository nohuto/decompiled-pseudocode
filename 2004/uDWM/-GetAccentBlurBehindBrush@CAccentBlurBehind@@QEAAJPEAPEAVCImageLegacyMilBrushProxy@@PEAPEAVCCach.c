/*
 * XREFs of ?GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18000387C
 * Callers:
 *     ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180003814 (-GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCached.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAccentBlurBehind::GetAccentBlurBehindBrush(
        CAccentBlurBehind *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct MilPoint3F *a4)
{
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rax
  float v10; // xmm0_4
  __int64 result; // rax

  if ( *a2 )
    CBaseObject::Release(*a2);
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 42);
  *a2 = (struct CImageLegacyMilBrushProxy *)v8;
  if ( v8 )
    _InterlockedIncrement(v8 + 2);
  if ( *a3 )
    CBaseObject::Release(*a3);
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 41);
  *a3 = (struct CCachedVisualImageProxy *)v9;
  if ( v9 )
    _InterlockedIncrement(v9 + 2);
  v10 = FLOAT_1_0;
  if ( COERCE_FLOAT(*((_DWORD *)this + 80) & _xmm) >= 0.0000011920929 )
    v10 = 1.0 / *((float *)this + 80);
  *(float *)a4 = v10;
  result = 0LL;
  *((float *)a4 + 1) = v10;
  *((_DWORD *)a4 + 2) = 1065353216;
  return result;
}
