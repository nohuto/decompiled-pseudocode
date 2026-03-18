/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x140652650
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1405C1A88 (AdtpBuildContextFromSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x1405E30E0 (NtSetSecurityObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1406525B4 (ExpWnfSpecializeSecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB214 (LocalConvertSDToStringSD_Rev1.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14075A004 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IopGetSecurityDescriptorInformation @ 0x14075B67C (IopGetSecurityDescriptorInformation.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x140874434 (CmpExamineSaclForAuditEvent.c)
 *     RtlReplaceSidInSd @ 0x140916190 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x1409275B4 (SepSDContainsAttributeACE.c)
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
