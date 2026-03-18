/*
 * XREFs of _SetRITTimer@16 @ 0xA4BF6
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?AdjustRITDelayableTimers@@YGXH@Z @ 0xAF38E (-AdjustRITDelayableTimers@@YGXH@Z.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     _ShowAutorunCursor@4 @ 0x1433B4 (_ShowAutorunCursor@4.c)
 *     ?TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z @ 0x147169 (-TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YGXPAUtagWND@@IIJ@Z @ 0x14757D (-xxxTabletButtonTimerCallback@@YGXPAUtagWND@@IIJ@Z.c)
 *     _EditionSetAccessibilityTimer@16 @ 0x1782A8 (_EditionSetAccessibilityTimer@16.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B1BC0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 */

int __stdcall SetRITTimer(char *a1, unsigned int a2, int a3, int a4)
{
  return InternalSetTimer(0, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
