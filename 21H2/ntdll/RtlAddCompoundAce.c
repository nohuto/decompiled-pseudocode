/*
 * XREFs of RtlAddCompoundAce @ 0x1800E97A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlCopySid @ 0x180068900 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlAddCompoundAce(
        PACL Acl,
        ULONG AceRevision,
        UCHAR AceType,
        ACCESS_MASK AccessMask,
        PSID ServerSid,
        PSID ClientSid)
{
  __int16 v7; // r13
  unsigned __int8 AclRevision; // r14
  _DWORD *v11; // rdi
  unsigned __int16 v12; // dx
  unsigned __int8 v13; // cl
  NTSTATUS result; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  v7 = AceType;
  if ( !RtlValidSid(ServerSid) || !RtlValidSid(ClientSid) )
    return -1073741704;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision - 3 > 1 )
    return -1073741735;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v11 = FirstFree;
  v12 = 4 * (*((unsigned __int8 *)ClientSid + 1) + *((unsigned __int8 *)ServerSid + 1) + 7);
  if ( !FirstFree || (char *)FirstFree + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v12;
  *(_WORD *)v11 = 4;
  v11[1] = AccessMask;
  *((_WORD *)v11 + 4) = v7;
  RtlCopySid(4 * *((unsigned __int8 *)ServerSid + 1) + 8, v11 + 3, ServerSid);
  RtlCopySid(4 * *((unsigned __int8 *)ClientSid + 1) + 8, &v11[*((unsigned __int8 *)ServerSid + 1) + 5], ClientSid);
  v13 = AclRevision;
  ++Acl->AceCount;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    v13 = AceRevision;
  result = 0;
  Acl->AclRevision = v13;
  return result;
}
