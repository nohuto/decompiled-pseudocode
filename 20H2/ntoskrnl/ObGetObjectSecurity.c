/*
 * XREFs of ObGetObjectSecurity @ 0x1406E0490
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x1405F5A60 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}
