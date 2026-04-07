/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x180025F2C
 * Callers:
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180013DC4 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180027640 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180028B1C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180029650 (--_GCText@@EEAAPEAXI@Z.c)
 *     ??1CAccent@@MEAA@XZ @ 0x18002C1C8 (--1CAccent@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180033AA4 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CImage@@EEAA@XZ @ 0x18003EC38 (--1CImage@@EEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180041BF8 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x180045558 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180047698 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x180080CCC (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x18008A298 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x180093120 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180095B80 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x1800A10E8 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x1800A1BB8 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800A38D4 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800A463C (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800A5248 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800A58D8 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800A5FFC (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800A6480 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800A6DF0 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800ABAAC (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800AD09C (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800B79B0 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B89C0 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderDataVisual::~CRenderDataVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  *this = (CBaseObject *)&CDesktopWindowReplacement::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[30];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[30] = 0LL;
  }
  if ( this[31] != this[32] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[31] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
