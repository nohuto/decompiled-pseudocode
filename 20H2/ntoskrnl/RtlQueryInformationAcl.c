/*
 * XREFs of RtlQueryInformationAcl @ 0x1405F5D00
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140327F54 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x140605550 (RtlFirstFreeAce.c)
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  int v4; // esi
  int AclRevision; // ecx
  __int32 v8; // r9d
  PVOID v9; // rcx
  int v10; // ecx
  PVOID v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  AclRevision = Acl->AclRevision;
  v12 = 0LL;
  if ( (unsigned __int8)(AclRevision - 2) <= 2u )
  {
    v8 = AclInformationClass - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return -1073741821;
      if ( AclInformationLength >= 0xC )
      {
        if ( RtlFirstFreeAce(Acl, &v12) )
        {
          v9 = v12;
          *(_DWORD *)AclInformation = Acl->AceCount;
          if ( v9 )
          {
            v10 = (_DWORD)v9 - (_DWORD)Acl;
            *((_DWORD *)AclInformation + 1) = v10;
            v4 = Acl->AclSize - v10;
          }
          else
          {
            *((_DWORD *)AclInformation + 1) = Acl->AclSize;
          }
          *((_DWORD *)AclInformation + 2) = v4;
          return 0;
        }
        return -1073741811;
      }
    }
    else if ( AclInformationLength >= 4 )
    {
      *(_DWORD *)AclInformation = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  return -1073741811;
}
