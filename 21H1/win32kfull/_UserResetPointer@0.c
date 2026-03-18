/*
 * XREFs of _UserResetPointer@0 @ 0xEBB4E
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

char __stdcall UserResetPointer()
{
  char result; // al
  char v1; // [esp+1h] [ebp-1h]

  if ( ExIsResourceAcquiredSharedLite(_gpresUser) )
  {
    v1 = 0;
  }
  else
  {
    v1 = 1;
    EnterSharedCrit(0, 1);
  }
  SetPointerInternal(0, 6);
  result = SetPointerInternal(1, 6);
  if ( v1 )
    return UserSessionSwitchLeaveCrit();
  return result;
}
