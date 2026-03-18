/*
 * XREFs of EtwpCheckGuidAccess @ 0x140719768
 * Callers:
 *     EtwpCheckNotificationAccess @ 0x1407196FC (EtwpCheckNotificationAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14071A4D8 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x14078ED10 (EtwpCheckSystemTraceAccess.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14093FF78 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1409403B8 (EtwpLogFileNameRundown.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x140943CF0 (EtwpCheckCurrentUserGuidAccess.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1405F753C (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x14066A56C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14066A5AC (EtwpGetSecurityDescriptorByGuid.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(unsigned int *a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  LODWORD(a3) = EtwpAccessCheck(SecurityDescriptor, a2, a3);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)a3;
}
