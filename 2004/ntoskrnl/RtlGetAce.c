/*
 * XREFs of RtlGetAce @ 0x14027DB50
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1403577F4 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BD444 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140668DA0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14071FD98 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14074B0C8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalGetAclForString @ 0x1407754CC (LocalGetAclForString.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140785BE8 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x140788E64 (ObpGetDosDevicesProtection.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140791ABC (CmpHiveRootSecurityDescriptor.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
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
