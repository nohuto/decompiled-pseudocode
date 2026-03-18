/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x1406ED5B0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14063EC74 (LocalConvertSDToStringSD_Rev1.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     CmpCheckKeyOwnerForPca @ 0x1406ED54C (CmpCheckKeyOwnerForPca.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14071FD98 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074B424 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IopGetSecurityDescriptorInformation @ 0x14074CA9C (IopGetSecurityDescriptorInformation.c)
 *     CmpCheckExeOwnerForPca @ 0x14075D284 (CmpCheckExeOwnerForPca.c)
 *     CmpCopySaclToVirtualKey @ 0x14086E48C (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140910650 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 1);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Owner = v4;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
