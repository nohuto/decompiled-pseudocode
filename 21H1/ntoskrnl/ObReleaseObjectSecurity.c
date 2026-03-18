/*
 * XREFs of ObReleaseObjectSecurity @ 0x140613A90
 * Callers:
 *     ObpCheckObjectReference @ 0x1406137F0 (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     ObCheckCreateObjectAccess @ 0x1406170B0 (ObCheckCreateObjectAccess.c)
 *     MiAllowImageMap @ 0x140636DF0 (MiAllowImageMap.c)
 *     ObCheckObjectAccess @ 0x1406BBBB0 (ObCheckObjectAccess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PopBootStatAccessCheck @ 0x1407ABF7C (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1408D87C0 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14090453C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x14093CCCC (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
