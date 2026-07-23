/*
 * XREFs of _RtlNewSecurityObject@24 @ 0x4B2AC100
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 */

NTSTATUS __cdecl RtlNewSecurityObject(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  return RtlpNewSecurityObject((int)NewDescriptor, 0, 0, IsDirectoryObject, 0, Token, (int)GenericMapping, 0);
}
