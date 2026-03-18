/*
 * XREFs of _SetPointer@4 @ 0xB155E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

int __stdcall SetPointer(int a1)
{
  int savedregs; // [esp+0h] [ebp+0h]

  return SetPointerInternal(a1 != 0, 6, savedregs);
}
