/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x140722890
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     ObpCheckTraverseAccess @ 0x1406CDC5C (ObpCheckTraverseAccess.c)
 *     PopBootStatAccessCheck @ 0x1406D6C24 (PopBootStatAccessCheck.c)
 *     MiAllowImageMap @ 0x1406F884C (MiAllowImageMap.c)
 *     ObpCheckObjectReference @ 0x14072266C (ObpCheckObjectReference.c)
 *     PspCheckJobAccessState @ 0x1409B0030 (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409EB814 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObpDereferenceSecurityDescriptorForObject @ 0x1407228BC (ObpDereferenceSecurityDescriptorForObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ObReleaseObjectSecurityEx(void *a1, char a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a1, 0);
    else
      ObpDereferenceSecurityDescriptorForObject(a1, a3 - 48);
  }
}
