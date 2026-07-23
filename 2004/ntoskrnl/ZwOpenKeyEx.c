/*
 * XREFs of ZwOpenKeyEx @ 0x1403F59C0
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1405E1D30 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140A7056C (MfgInitSystem.c)
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
