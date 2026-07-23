/*
 * XREFs of ZwOpenKeyEx @ 0x1403F4730
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x140617E68 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140A6F9A4 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
