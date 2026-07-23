/*
 * XREFs of _RtlQueryInformationAcl@16 @ 0x4B2D9620
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  _BYTE *v4; // edx
  int v5; // edx
  int v6; // eax
  PVOID FirstFree; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    if ( AclInformationClass == AclRevisionInformation )
    {
      if ( AclInformationLength >= 4 )
      {
        *(_DWORD *)AclInformation = Acl->AclRevision;
        return 0;
      }
    }
    else
    {
      if ( AclInformationClass != AclSizeInformation )
        return -1073741821;
      if ( AclInformationLength >= 0xC )
      {
        if ( RtlFirstFreeAce(Acl, &FirstFree) )
        {
          v4 = FirstFree;
          *(_DWORD *)AclInformation = Acl->AceCount;
          if ( v4 )
          {
            v5 = v4 - (_BYTE *)Acl;
            *((_DWORD *)AclInformation + 1) = v5;
            v6 = Acl->AclSize - v5;
          }
          else
          {
            *((_DWORD *)AclInformation + 1) = Acl->AclSize;
            v6 = 0;
          }
          *((_DWORD *)AclInformation + 2) = v6;
          return 0;
        }
        return -1073741811;
      }
    }
    return -1073741789;
  }
  return -1073741811;
}
