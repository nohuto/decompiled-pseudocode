/*
 * XREFs of ObGetObjectSecurity @ 0x1406E5110
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14041A13C (SepSetProcessTrustLabelAceForToken.c)
 *     DifObGetObjectSecurityWrapper @ 0x140618320 (DifObGetObjectSecurityWrapper.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x1407248C0 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity(Object, SecurityDescriptor, MemoryAllocated, 0LL);
}
