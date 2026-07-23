/*
 * XREFs of RtlAddAce @ 0x1405F72B0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140327F54 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F6F78 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140759CA8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x140605550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x140606290 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  char *v9; // rcx
  UCHAR AclRevision; // r15
  __int64 v11; // r11
  char *v12; // rdx
  __int16 v13; // r12
  unsigned __int8 v14; // al
  ULONG v15; // ecx
  PACL i; // rdx
  int v17; // r8d
  __int64 v18; // r9
  char *v19; // rdi
  NTSTATUS result; // eax
  __int64 v21; // r10
  bool v22; // cf
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  FirstFree = 0LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741811;
  v9 = (char *)AceList;
  AclRevision = AceRevision;
  v11 = AceListLength;
  if ( (unsigned __int8)AceRevision <= Acl->AclRevision )
    AclRevision = Acl->AclRevision;
  v12 = (char *)AceList + AceListLength;
  v13 = 0;
  if ( AceList < v12 )
  {
    do
    {
      v14 = *v9;
      if ( (unsigned __int8)*v9 > 3u )
      {
        if ( v14 > 4u )
        {
          if ( v14 > 8u )
            goto LABEL_7;
          v22 = AceRevision < 4;
        }
        else
        {
          v22 = AceRevision < 3;
        }
        if ( v22 )
          return -1073741811;
      }
LABEL_7:
      ++v13;
      v9 += *((unsigned __int16 *)v9 + 1);
    }
    while ( v9 < v12 );
  }
  if ( v9 > v12 )
    return -1073741811;
  if ( !FirstFree || (char *)FirstFree + AceListLength > (char *)Acl + Acl->AclSize )
    return -1073741789;
  v15 = 0;
  for ( i = Acl + 1; v15 < StartingAceIndex; i = (PACL)((char *)i + i->AclSize) )
  {
    if ( v15 >= Acl->AceCount )
      break;
    ++v15;
  }
  v17 = (_DWORD)FirstFree - (_DWORD)i - 1;
  v18 = v17;
  if ( v17 >= 0 )
  {
    v21 = v17 + AceListLength;
    do
    {
      *(&i->AclRevision + v21) = *(&i->AclRevision + v18);
      v21 = (unsigned int)(v21 - 1);
      --v18;
    }
    while ( v18 >= 0 );
  }
  if ( AceListLength )
  {
    v19 = (char *)((_BYTE *)AceList - (_BYTE *)i);
    do
    {
      i->AclRevision = *(&i->AclRevision + (_QWORD)v19);
      i = (PACL)((char *)i + 1);
      --v11;
    }
    while ( v11 );
  }
  Acl->AceCount += v13;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
