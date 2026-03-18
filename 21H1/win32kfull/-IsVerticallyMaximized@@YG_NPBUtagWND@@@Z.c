/*
 * XREFs of ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40
 * Callers:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _CkptUpdate@12 @ 0xB48F4 (_CkptUpdate@12.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z @ 0x13F619 (-ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z.c)
 *     ?EvaluateArrangeState@@YG?AW4_WARR_STATES@@PAUtagWND@@@Z @ 0x1710C7 (-EvaluateArrangeState@@YG-AW4_WARR_STATES@@PAUtagWND@@@Z.c)
 *     ?IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z @ 0x1718C2 (-IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsVerticallyMaximized(_DWORD *this)
{
  return (*(_BYTE *)(this[5] + 145) & 3) == 3;
}
