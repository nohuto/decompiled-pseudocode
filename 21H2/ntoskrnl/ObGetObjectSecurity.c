/*
 * XREFs of ObGetObjectSecurity @ 0x14061F620
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C74 (SepSetProcessTrustLabelAceForToken.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x140654620 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity(Object, SecurityDescriptor, MemoryAllocated, 0LL);
}
