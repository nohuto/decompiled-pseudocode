/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x1402720C0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BD444 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepHasCriticalAcesRemoved @ 0x14063C470 (SepHasCriticalAcesRemoved.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14063D80C (ExpWnfSpecializeSecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14063EC74 (LocalConvertSDToStringSD_Rev1.c)
 *     ObpInsertOrLocateNamedObject @ 0x140667CF0 (ObpInsertOrLocateNamedObject.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14071FD98 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14074B0C8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074B424 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IopGetSecurityDescriptorInformation @ 0x14074CA9C (IopGetSecurityDescriptorInformation.c)
 *     MiInitializeMemoryEvents @ 0x1407884A4 (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x140788A38 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x140788BC8 (ObpCreateDosDevicesDirectory.c)
 *     CmpCopySaclToVirtualKey @ 0x14086E48C (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140910650 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  ACL *v6; // rax
  __int16 v7; // cx
  __int64 v8; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1) & 4;
  *DaclPresent = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v7 & 4) != 0 )
    {
      if ( v7 >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v8 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v8 )
          v6 = (ACL *)((char *)SecurityDescriptor + v8);
      }
    }
    *Dacl = v6;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}
