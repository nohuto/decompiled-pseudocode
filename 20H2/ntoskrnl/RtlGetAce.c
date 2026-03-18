/*
 * XREFs of RtlGetAce @ 0x140209DB0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140327F54 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14072DD88 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140759CA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140793854 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x140796B74 (ObpGetDosDevicesProtection.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14079E35C (CmpHiveRootSecurityDescriptor.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v4; // r9
  ULONG v5; // r8d

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = Acl + 1;
    *Ace = &Acl[1];
    v5 = 0;
    if ( AceIndex )
    {
      while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
      {
        ++v5;
        v4 = (PACL)((char *)v4 + v4->AclSize);
        *Ace = v4;
        if ( v5 >= AceIndex )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
        return 0;
    }
  }
  return -1073741811;
}
