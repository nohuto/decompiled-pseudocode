/*
 * XREFs of ??0CTouchVisual@@IEAA@_K@Z @ 0x1800476FC
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800475A0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x18009C390 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z @ 0x18009C4A0 (--$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18009C598 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18009C6A8 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x18009C7B0 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x18009C8C8 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x18009CC38 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ??0CTextTetherVisual@@IEAA@_K@Z @ 0x1800A1B54 (--0CTextTetherVisual@@IEAA@_K@Z.c)
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x1800A374C (--0CTouchDragVisual@@IEAA@_K@Z.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800A45E0 (--0CTetherVisual@@IEAA@_K@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x1800251D8 (--0CRenderDataVisual@@IEAA@XZ.c)
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
