/*
 * XREFs of ?FreeThreadPointerHookData@@YGXPAUtagTHREADPOINTERDATA@@@Z @ 0x15ADA6
 * Callers:
 *     _xxxCleanupThreadPointerInputInfo@4 @ 0x9AFC6 (_xxxCleanupThreadPointerInputInfo@4.c)
 *     _xxxPointerCallHook@20 @ 0x15A676 (_xxxPointerCallHook@20.c)
 * Callees:
 *     <none>
 */

void __thiscall FreeThreadPointerHookData(_DWORD *this)
{
  CTouchProcessor::UnreferenceMsgDataExternal(_gpTouchProcessor, this[4], 5, this);
  Win32FreePool(this);
}
