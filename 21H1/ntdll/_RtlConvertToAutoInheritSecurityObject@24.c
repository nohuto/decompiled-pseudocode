/*
 * XREFs of _RtlConvertToAutoInheritSecurityObject@24 @ 0x4B335B90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358 (_RtlpConvertToAutoInheritSecurityObject@24.c)
 */

NTSTATUS __cdecl RtlConvertToAutoInheritSecurityObject(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping)
{
  return RtlpConvertToAutoInheritSecurityObject(
           ParentDescriptor,
           CurrentSecurityDescriptor,
           NewSecurityDescriptor,
           ObjectType,
           IsDirectoryObject,
           GenericMapping);
}
