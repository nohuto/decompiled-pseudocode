/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x1407119B0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB214 (LocalConvertSDToStringSD_Rev1.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     CmpCheckKeyOwnerForPca @ 0x140711958 (CmpCheckKeyOwnerForPca.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14072DD88 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14075A004 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IopGetSecurityDescriptorInformation @ 0x14075B67C (IopGetSecurityDescriptorInformation.c)
 *     CmpCheckExeOwnerForPca @ 0x14076B9E4 (CmpCheckExeOwnerForPca.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140916190 (RtlReplaceSidInSd.c)
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
