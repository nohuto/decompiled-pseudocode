/*
 * XREFs of ZwUnloadKeyEx @ 0x1403F5C50
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140711C08 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
