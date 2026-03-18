/*
 * XREFs of SetRITTimer @ 0x1C00C9BD0
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0109D84 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     ShowAutorunCursor @ 0x1C01D3CB0 (ShowAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D8A10 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D8FB0 (-xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionSetAccessibilityTimer @ 0x1C0212FB0 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C02569D0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(int a1, int a2, int a3, int a4)
{
  return InternalSetTimer(0, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
