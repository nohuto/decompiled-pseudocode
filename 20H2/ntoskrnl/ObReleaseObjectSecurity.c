/*
 * XREFs of ObReleaseObjectSecurity @ 0x1405F5670
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckObjectAccess @ 0x1405E0970 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405F53C4 (ObpCheckObjectReference.c)
 *     MiAllowImageMap @ 0x140627820 (MiAllowImageMap.c)
 *     ObCheckCreateObjectAccess @ 0x1406BCF50 (ObCheckCreateObjectAccess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     PopBootStatAccessCheck @ 0x1407BD01C (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1408DF970 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14090B43C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140943D08 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1405F5900 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
