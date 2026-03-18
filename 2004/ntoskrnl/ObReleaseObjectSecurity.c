/*
 * XREFs of ObReleaseObjectSecurity @ 0x140668D70
 * Callers:
 *     MiAllowImageMap @ 0x140601DB0 (MiAllowImageMap.c)
 *     ObpInsertOrLocateNamedObject @ 0x140667CF0 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckCreateObjectAccess @ 0x140668330 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x140668AD0 (ObpCheckObjectReference.c)
 *     ObCheckObjectAccess @ 0x1406DCDF0 (ObCheckObjectAccess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PopBootStatAccessCheck @ 0x1407AF0DC (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1408D9B30 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14090581C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x14093DF48 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140669000 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
