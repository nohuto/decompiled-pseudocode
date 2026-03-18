/*
 * XREFs of ExpPlRunOnceInit @ 0x14063BB90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 */

_BOOL8 __fastcall ExpPlRunOnceInit(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  NTSTATUS Acl; // eax

  Acl = RtlCreateAcl(&Dacl, 0x59u, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(&Dacl, 2u, 1u, SeWorldSid);
    if ( Acl >= 0 )
    {
      Acl = RtlCreateSecurityDescriptor(&unk_140CE1E50, 1u);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(&unk_140CE1E50, 1u, &Dacl, 0);
        if ( Acl >= 0 )
          Acl = 0;
      }
    }
  }
  return Acl >= 0;
}
