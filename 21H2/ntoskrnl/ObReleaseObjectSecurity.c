/*
 * XREFs of ObReleaseObjectSecurity @ 0x140654230
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C74 (SepSetProcessTrustLabelAceForToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     ObCheckObjectAccess @ 0x1405EA5E0 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x140655D5C (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckCreateObjectAccess @ 0x140657CB0 (ObCheckCreateObjectAccess.c)
 *     MiAllowImageMap @ 0x140687660 (MiAllowImageMap.c)
 *     PopBootStatAccessCheck @ 0x1407C193C (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1408DD290 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140908D4C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409416A8 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    else
      ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
  }
}
