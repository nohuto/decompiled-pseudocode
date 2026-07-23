/*
 * XREFs of _RtlNewInstanceSecurityObject@40 @ 0x4B336270
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlNewInstanceSecurityObject(
        BOOLEAN ParentDescriptorChanged,
        BOOLEAN CreatorDescriptorChanged,
        PLUID OldClientTokenModifiedId,
        PLUID NewClientTokenModifiedId,
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE TokenHandle,
        PGENERIC_MAPPING GenericMapping)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [esp+1Ch] [ebp-44h] BYREF
  _BYTE TokenInformation[48]; // [esp+20h] [ebp-40h] BYREF
  _LUID v13; // [esp+50h] [ebp-10h]

  result = ZwQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
  if ( result >= 0 )
  {
    *NewClientTokenModifiedId = v13;
    if ( NewClientTokenModifiedId->LowPart != OldClientTokenModifiedId->LowPart
      || NewClientTokenModifiedId->HighPart != OldClientTokenModifiedId->HighPart
      || ParentDescriptorChanged
      || CreatorDescriptorChanged )
    {
      return RtlpNewSecurityObject(
               (int)ParentDescriptor,
               CreatorDescriptor,
               NewDescriptor,
               0,
               0,
               IsDirectoryObject,
               0,
               TokenHandle,
               GenericMapping,
               0);
    }
    else
    {
      *NewDescriptor = 0;
      return 0;
    }
  }
  return result;
}
