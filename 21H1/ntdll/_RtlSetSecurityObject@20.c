/*
 * XREFs of _RtlSetSecurityObject@20 @ 0x4B3366E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 */

NTSTATUS __cdecl RtlSetSecurityObject(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  return RtlpSetSecurityObject(ModificationDescriptor, ObjectsSecurityDescriptor, 0, 1, GenericMapping, TokenHandle);
}
