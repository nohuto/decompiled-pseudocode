/*
 * XREFs of PtiMouseFromQ @ 0x1C00901FC
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x1C0039980 (EditionPostRawMouseInputMessage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C004DA10 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C008FE54 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     UpdateRawMouseMode @ 0x1C0090198 (UpdateRawMouseMode.c)
 *     DestroyThreadHidObjects @ 0x1C00F7A30 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00F8170 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiMouseFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 88);
}
