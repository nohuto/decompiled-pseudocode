/*
 * XREFs of ZwStopProfile @ 0x1403F6CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwStopProfile(HANDLE ProfileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProfileHandle);
}
