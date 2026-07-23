/*
 * XREFs of ZwQuerySecurityObject @ 0x1403F6120
 * Callers:
 *     RtlIsUntrustedObject @ 0x140350430 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14063C974 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14074B0C8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140873CB4 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x140978F70 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
