/*
 * XREFs of RtlAddMandatoryAce @ 0x140605780
 * Callers:
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140702E88 (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140703C00 (ObpVerifyAccessToBoundaryEntry.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407645F4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitSystemDacls @ 0x140A63C5C (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140A6B800 (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlFirstFreeAce @ 0x1406058E0 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x140606620 (RtlValidAcl.c)
 *     RtlValidSid @ 0x140606780 (RtlValidSid.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  int v9; // eax
  UCHAR AclRevision; // di
  char *v11; // r9
  unsigned __int16 v12; // dx
  NTSTATUS result; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]
  unsigned __int16 v16; // [rsp+2Ch] [rbp-2Ch]

  FirstFree = 0LL;
  v15 = 0;
  v16 = 4096;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v9 = *(_DWORD *)((char *)Sid + 2) - v15;
  if ( !v9 )
    v9 = *((unsigned __int16 *)Sid + 3) - v16;
  if ( v9 )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u )
    return -1073741735;
  if ( AclRevision <= 2u )
    AclRevision = 2;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v11 = (char *)FirstFree;
  v12 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v12;
  v11[1] = AceFlags;
  *v11 = 17;
  *((_DWORD *)v11 + 1) = AccessMask;
  memmove(v11 + 8, Sid, 4LL * *((unsigned __int8 *)Sid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
