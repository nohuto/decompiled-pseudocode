/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x14066BE80
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405BD6F0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14066BDE4 (ExpWnfSpecializeSecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
 *     NtSetSecurityObject @ 0x1406C5ED0 (NtSetSecurityObject.c)
 *     IopGetSecurityDescriptorInformation @ 0x140721DEC (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1407240A0 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x14086C9CC (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x14086CE1C (CmpExamineSaclForAuditEvent.c)
 *     RtlReplaceSidInSd @ 0x14090F2B0 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x140920F9C (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  ACL *v6; // rax
  __int16 v8; // cx
  __int64 v9; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1) & 0x10;
  *SaclPresent = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    v8 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v8 & 0x10) != 0 )
    {
      if ( v8 >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v9 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v9 )
          v6 = (ACL *)((char *)SecurityDescriptor + v9);
      }
    }
    *Sacl = v6;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  return 0;
}
