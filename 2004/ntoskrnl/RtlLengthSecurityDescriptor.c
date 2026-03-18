/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x140669A30
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1405BCF7C (AdtpBuildAccessReasonAuditString.c)
 *     _PnpValidatePropertyData @ 0x1405D11A8 (_PnpValidatePropertyData.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1405DCAD8 (WmipGetGuidSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x14063CBD0 (ExpWnfLookupPermanentName.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063E6C4 (CmpGetSecurityDescriptorNode.c)
 *     CmpFindMatchingDescriptorCell @ 0x14063E868 (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x14063EAE8 (CmpTraceSecurityChanging.c)
 *     ObLogSecurityDescriptor @ 0x140669810 (ObLogSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x14070F3F4 (ExpWnfRegisterPermanentName.c)
 *     _CmSetDeviceRegPropWorker @ 0x140724648 (_CmSetDeviceRegPropWorker.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14074B0C8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140756004 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14076C508 (_CmGetRegKeySecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140772200 (BiCreateKeySecurityDescriptor.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407AB764 (IopUpdateSecureDeviceClassState.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B9DFC (_PnpGetEnumSecurityDescriptor.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407C03D4 (WmipSaveGuidSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A0C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A0EA4 (PiAuGetStateDirectorySecurityObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408D9C58 (ObpSetObjectAuditInfo.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140972568 (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097B40C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A4FB54 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4FF14 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6A81C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG result; // eax
  __int64 v4; // rcx
  char *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rcx
  __int64 v10; // rcx
  char *v11; // rcx

  v1 = *((_WORD *)SecurityDescriptor + 1);
  result = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  if ( v1 >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v4 )
      goto LABEL_6;
    v5 = (char *)SecurityDescriptor + v4;
  }
  if ( v5 )
    result += (4 * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFC;
LABEL_6:
  if ( v1 >= 0 )
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v6 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v6 )
      goto LABEL_11;
    v7 = (char *)SecurityDescriptor + v6;
  }
  if ( v7 )
    result += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v1 >= 0 )
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v8 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_17;
    v9 = (char *)SecurityDescriptor + v8;
  }
  if ( v9 )
    result += (*((unsigned __int16 *)v9 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) == 0 )
    return result;
  if ( v1 >= 0 )
  {
    v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
      return result;
    v11 = (char *)SecurityDescriptor + v10;
  }
  if ( v11 )
    result += (*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC;
  return result;
}
