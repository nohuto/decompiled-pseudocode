/*
 * XREFs of _RtlAddScopedPolicyIDAce@20 @ 0x4B34B5F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

NTSTATUS __cdecl RtlAddScopedPolicyIDAce(PACL Acl, ULONG AceRevision, ULONG AceFlags, ULONG AccessMask, PSID Sid)
{
  NTSTATUS result; // eax
  unsigned __int8 AclRevision; // bl
  char *v7; // edx
  unsigned __int16 v8; // ax
  size_t v9; // [esp-4h] [ebp-20h]
  PVOID FirstFree; // [esp+Ch] [ebp-10h] BYREF
  int Buf2; // [esp+10h] [ebp-Ch] BYREF
  __int16 v12; // [esp+14h] [ebp-8h]

  FirstFree = 0;
  Buf2 = 0;
  v12 = 4352;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  LODWORD(v9) = 6;
  if ( memcmp((char *)Sid + 2, &Buf2, v9) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    AclRevision = AceRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || AccessMask )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v7 = (char *)FirstFree;
  v8 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  Buf2 = v8;
  if ( !FirstFree || (char *)FirstFree + v8 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_DWORD *)FirstFree + 1) = 0;
  v7[1] = AceFlags;
  *((_WORD *)v7 + 1) = Buf2;
  *v7 = 19;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v7 + 8, Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
