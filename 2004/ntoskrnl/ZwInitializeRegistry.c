/*
 * XREFs of ZwInitializeRegistry @ 0x1403F55C0
 * Callers:
 *     NtInitializeRegistry @ 0x14077B120 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwInitializeRegistry(USHORT BootCondition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootCondition);
}
