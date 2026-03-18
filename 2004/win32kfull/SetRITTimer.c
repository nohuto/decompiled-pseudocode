/*
 * XREFs of SetRITTimer @ 0x1C010A3A0
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0108D64 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     ShowAutorunCursor @ 0x1C01D4AC0 (ShowAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D96D0 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D9C70 (-xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionSetAccessibilityTimer @ 0x1C0213E30 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0257FE0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  return InternalSetTimer(0LL, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
