/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140244CE0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     SepHasCriticalAcesRemoved @ 0x1405E2238 (SepHasCriticalAcesRemoved.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1406525B4 (ExpWnfSpecializeSecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB214 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14072DD88 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140759CA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14075A004 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IopGetSecurityDescriptorInformation @ 0x14075B67C (IopGetSecurityDescriptorInformation.c)
 *     MiInitializeMemoryEvents @ 0x1407961B4 (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x140796748 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407968D8 (ObpCreateDosDevicesDirectory.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140916190 (RtlReplaceSidInSd.c)
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
