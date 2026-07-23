/*
 * XREFs of ZwOpenKeyEx @ 0x1403FA590
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x14066DAC0 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140A769A4 (MfgInitSystem.c)
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
