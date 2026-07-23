/*
 * XREFs of _RtlAddProcessTrustLabelAce@24 @ 0x4B34B140
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     _RtlIsValidProcessTrustLabelSid@4 @ 0x4B3466F0 (_RtlIsValidProcessTrustLabelSid@4.c)
 */

NTSTATUS __cdecl RtlAddProcessTrustLabelAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID ProcessTrustLabelSid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  NTSTATUS result; // eax
  unsigned __int8 AclRevision; // bl
  _WORD *v8; // edx
  __int16 v9; // [esp+Ch] [ebp-8h]
  PVOID FirstFree; // [esp+10h] [ebp-4h] BYREF

  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( AceType != 20 )
    return -1073741811;
  if ( !RtlValidSid(ProcessTrustLabelSid) )
    return -1073741704;
  if ( !RtlIsValidProcessTrustLabelSid(ProcessTrustLabelSid) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( AclRevision <= AceRevision )
    AclRevision = AceRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFF000000) != 0 )
    return -1073741811;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v8 = FirstFree;
  v9 = 4 * (*((unsigned __int8 *)ProcessTrustLabelSid + 1) + 4);
  if ( !FirstFree
    || (char *)FirstFree + (unsigned __int16)(4 * (*((unsigned __int8 *)ProcessTrustLabelSid + 1) + 4)) > (char *)Acl + Acl->AclSize )
  {
    return -1073741671;
  }
  *((_BYTE *)FirstFree + 1) = AceFlags;
  v8[1] = v9;
  *((_DWORD *)v8 + 1) = AccessMask;
  *(_BYTE *)v8 = 20;
  RtlCopySid(4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8, v8 + 4, ProcessTrustLabelSid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
