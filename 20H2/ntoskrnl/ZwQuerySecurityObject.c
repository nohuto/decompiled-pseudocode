/*
 * XREFs of ZwQuerySecurityObject @ 0x1403FACF0
 * Callers:
 *     RtlIsUntrustedObject @ 0x1402E1B00 (RtlIsUntrustedObject.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1406FAF88 (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140759CA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x14097ED40 (_RegRtlCopyTreeInternal.c)
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
