/*
 * XREFs of _RtlAddCompoundAce@24 @ 0x4B34B010
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

NTSTATUS __cdecl RtlAddCompoundAce(
        PACL Acl,
        ULONG AceRevision,
        UCHAR AceType,
        ACCESS_MASK AccessMask,
        PSID ServerSid,
        PSID ClientSid)
{
  unsigned __int8 AclRevision; // bl
  _DWORD *v7; // edi
  unsigned __int16 v8; // ax
  NTSTATUS result; // eax
  PVOID FirstFree; // [esp+10h] [ebp-4h] BYREF

  if ( !RtlValidSid(ServerSid) || !RtlValidSid(ClientSid) )
    return -1073741704;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision < 3 || AceRevision > 4 )
    return -1073741735;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    AclRevision = AceRevision;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v7 = FirstFree;
  v8 = 4 * (*((unsigned __int8 *)ClientSid + 1) + 7 + *((unsigned __int8 *)ServerSid + 1));
  if ( !FirstFree || (char *)FirstFree + v8 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v8;
  v7[1] = AccessMask;
  *((_WORD *)v7 + 4) = AceType;
  *(_WORD *)v7 = 4;
  RtlCopySid(4 * *((unsigned __int8 *)ServerSid + 1) + 8, v7 + 3, ServerSid);
  RtlCopySid(4 * *((unsigned __int8 *)ClientSid + 1) + 8, &v7[*((unsigned __int8 *)ServerSid + 1) + 5], ClientSid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
