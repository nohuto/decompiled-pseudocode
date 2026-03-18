/*
 * XREFs of ?ClassicIsWindowHit@@YGHPAUtagWND@@UtagPOINT@@@Z @ 0x26C06
 * Callers:
 *     ?DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z @ 0x26B90 (-DCEChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@PAU2@PBU_SUBPIXELS@@@Z.c)
 *     ?TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0xAC018 (-TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z @ 0x179A75 (-ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _LayerHitTest@12 @ 0x17B8DE (_LayerHitTest@12.c)
 */

BOOL __userpurge ClassicIsWindowHit@<eax>(int a1@<ecx>, struct tagWND *a2, struct tagPOINT a3)
{
  int v5; // edx
  int v6; // eax

  return (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0x10) != 0
      && PtInRect(a2, a3.x)
      && ((v6 = *(_DWORD *)(v5 + 108)) == 0 || GrePtInRegion(v6, a2, a3.x))
      && ((*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 8) == 0 || LayerHitTest(a2, a3.x));
}
