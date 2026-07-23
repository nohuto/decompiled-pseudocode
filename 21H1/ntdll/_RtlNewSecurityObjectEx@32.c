/*
 * XREFs of _RtlNewSecurityObjectEx@32 @ 0x4B2D93A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 */

NTSTATUS __cdecl RtlNewSecurityObjectEx(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  return RtlpNewSecurityObject(
           (int)ParentDescriptor,
           CreatorDescriptor,
           NewDescriptor,
           ObjectType != 0 ? (unsigned int)&ObjectType : 0,
           ObjectType != 0,
           IsDirectoryObject,
           AutoInheritFlags,
           Token,
           GenericMapping,
           0);
}
