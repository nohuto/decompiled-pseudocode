/*
 * XREFs of ZwUnloadKeyEx @ 0x1403F6EE0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140713AB8 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
