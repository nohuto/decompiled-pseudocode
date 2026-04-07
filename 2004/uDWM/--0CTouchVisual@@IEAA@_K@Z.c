/*
 * XREFs of ??0CTouchVisual@@IEAA@_K@Z @ 0x180045E4C
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180045CF0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x18009CA70 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z @ 0x18009CB80 (--$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18009CC78 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18009CD88 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x18009CE90 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x18009CFA8 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x18009D318 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ??0CTextTetherVisual@@IEAA@_K@Z @ 0x1800A2234 (--0CTextTetherVisual@@IEAA@_K@Z.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x1800A3E2C (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800A4CC0 (--0CTetherVisual@@IEAA@_K@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x1800163E4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTouchVisual *__fastcall CTouchVisual::CTouchVisual(CTouchVisual *this)
{
  __int64 v1; // rcx
  CTouchVisual *result; // rax
  __int64 v3; // r8

  CRenderDataVisual::CRenderDataVisual(this);
  *(_BYTE *)(v1 + 280) = 0;
  *(_QWORD *)v1 = &CTouchVisual::`vftable';
  result = (CTouchVisual *)v1;
  *(_QWORD *)(v1 + 288) = v3;
  return result;
}
