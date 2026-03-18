/*
 * XREFs of RtlGetAce @ 0x14025B420
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140319CA4 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BCD24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140613AC0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14071DFF8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140721AA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14077D1E8 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x1407834E0 (ObpGetDosDevicesProtection.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14078F6BC (CmpHiveRootSecurityDescriptor.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
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
