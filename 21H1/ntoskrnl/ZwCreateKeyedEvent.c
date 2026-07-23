/*
 * XREFs of ZwCreateKeyedEvent @ 0x1403F3930
 * Callers:
 *     ExpKeyedEventInitialization @ 0x140A6B800 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyedEventHandle);
}
