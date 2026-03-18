/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x1406CC2B0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     CmpCheckKeyOwnerForPca @ 0x1406CC24C (CmpCheckKeyOwnerForPca.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14071DFF8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     IopGetSecurityDescriptorInformation @ 0x140721DEC (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1407240A0 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCheckExeOwnerForPca @ 0x14075AD9C (CmpCheckExeOwnerForPca.c)
 *     CmpCopySaclToVirtualKey @ 0x14086C9CC (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x14090F2B0 (RtlReplaceSidInSd.c)
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
