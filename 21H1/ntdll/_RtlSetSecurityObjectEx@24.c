/*
 * XREFs of _RtlSetSecurityObjectEx@24 @ 0x4B336710
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 */

NTSTATUS __cdecl RtlSetSecurityObjectEx(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  return RtlpSetSecurityObject(
           ModificationDescriptor,
           ObjectsSecurityDescriptor,
           AutoInheritFlags,
           1,
           GenericMapping,
           TokenHandle);
}
