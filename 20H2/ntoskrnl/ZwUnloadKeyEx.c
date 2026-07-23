/*
 * XREFs of ZwUnloadKeyEx @ 0x1403FBAB0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x1407217A8 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
