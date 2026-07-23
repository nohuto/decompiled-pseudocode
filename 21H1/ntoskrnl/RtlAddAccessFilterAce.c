/*
 * XREFs of RtlAddAccessFilterAce @ 0x14090DBC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlFirstFreeAce @ 0x1406058E0 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x140606620 (RtlValidAcl.c)
 *     RtlValidSid @ 0x140606780 (RtlValidSid.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x140609890 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x14066B1C0 (RtlCopySid.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        PACL Acl,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  int v13; // ecx
  unsigned int AclRevision; // eax
  UCHAR v15; // r14
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  _BYTE *v18; // rsi
  char *v19; // rdx
  char v20; // [rsp+20h] [rbp-20h]
  PVOID FirstFree; // [rsp+28h] [rbp-18h] BYREF
  int v22; // [rsp+30h] [rbp-10h]
  unsigned __int16 v23; // [rsp+34h] [rbp-Ch]

  v20 = a3;
  FirstFree = 0LL;
  v22 = 0;
  v23 = 256;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid((PSID)a4) )
      return 3221225485LL;
  }
  else
  {
    v13 = *(_DWORD *)(a4 + 2) - v22;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - v23;
    if ( v13 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  v15 = Acl->AclRevision;
  if ( AclRevision <= a2 )
    v15 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v16 = (a8 + 3) & 0xFFFFFFFC;
  v17 = v16 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v17 < v16 )
    return 3221225621LL;
  if ( v17 > 0xFFFF )
    return 3221225485LL;
  v18 = FirstFree;
  if ( !FirstFree || (char *)FirstFree + v17 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  v19 = (char *)FirstFree + 8;
  *((_WORD *)FirstFree + 1) = v17;
  v18[1] = v20;
  *v18 = 21;
  *((_DWORD *)v18 + 1) = a6;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, v19, (PSID)a4);
  memmove(&v18[4 * *(unsigned __int8 *)(a4 + 1) + 16], Src, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = v15;
  return result;
}
