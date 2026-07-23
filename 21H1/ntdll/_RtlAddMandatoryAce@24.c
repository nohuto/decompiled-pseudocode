/*
 * XREFs of _RtlAddMandatoryAce@24 @ 0x4B2D66E0
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  unsigned __int8 AclRevision; // bl
  _WORD *v7; // edx
  unsigned __int16 v8; // ax
  NTSTATUS result; // eax
  size_t v10; // [esp-4h] [ebp-20h]
  PVOID FirstFree; // [esp+Ch] [ebp-10h] BYREF
  int Buf2; // [esp+10h] [ebp-Ch] BYREF
  __int16 v13; // [esp+14h] [ebp-8h]

  Buf2 = 0;
  v13 = 4096;
  if ( !Acl )
    return -1073741705;
  if ( AceType != 17 )
    return -1073741811;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  LODWORD(v10) = 6;
  if ( memcmp((char *)Sid + 2, &Buf2, v10) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    AclRevision = AceRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v7 = FirstFree;
  v8 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  Buf2 = v8;
  if ( !FirstFree || (char *)FirstFree + v8 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_BYTE *)FirstFree + 1) = AceFlags;
  v7[1] = Buf2;
  *((_DWORD *)v7 + 1) = AccessMask;
  *(_BYTE *)v7 = 17;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v7 + 4, Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
