/*
 * XREFs of _ZwCreateDebugObject@16 @ 0x4B2F33D0
 * Callers:
 *     _DbgUiConnectToDbg@0 @ 0x4B32D7F0 (_DbgUiConnectToDbg@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwCreateDebugObject(
        PHANDLE DebugObjectHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  return Wow64SystemServiceCall();
}
