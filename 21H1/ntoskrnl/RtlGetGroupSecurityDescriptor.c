/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x140721ED0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140721AA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopGetSecurityDescriptorInformation @ 0x140721DEC (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1407240A0 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x14086C9CC (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x14090F2B0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 2);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Group = v4;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}
