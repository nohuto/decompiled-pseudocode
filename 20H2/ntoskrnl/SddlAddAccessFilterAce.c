/*
 * XREFs of SddlAddAccessFilterAce @ 0x1409289F8
 * Callers:
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140209E10 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     RtlFirstFreeAce @ 0x140605550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x140606290 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1406063F0 (RtlValidSid.c)
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 */

__int64 __fastcall SddlAddAccessFilterAce(
        PACL Acl,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  UCHAR AclRevision; // r15
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ebx
  ULONG v16; // edx
  _WORD *v17; // r14
  ULONG v18; // eax
  ULONG v19; // eax
  char v20; // [rsp+20h] [rbp-30h]
  PVOID FirstFree; // [rsp+28h] [rbp-28h] BYREF
  int v22; // [rsp+30h] [rbp-20h]
  unsigned __int16 v23; // [rsp+34h] [rbp-1Ch]
  int v24; // [rsp+38h] [rbp-18h]
  unsigned __int16 v25; // [rsp+3Ch] [rbp-14h]

  FirstFree = 0LL;
  v20 = a3;
  v24 = 0;
  v25 = 256;
  v22 = 0;
  v23 = 4864;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  AclRevision = 2;
  if ( (a3 & 0x40) != 0 )
  {
    if ( *(_BYTE *)(a4 + 1) != 2 )
      return 3221225485LL;
    v13 = *(_DWORD *)(a4 + 2) - v22;
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - v23;
    if ( v13 || !*(_DWORD *)(a4 + 8) && *(_DWORD *)(a4 + 12) )
      return 3221225485LL;
  }
  else
  {
    v14 = *(_DWORD *)(a4 + 2) - v24;
    if ( !v14 )
      v14 = *(unsigned __int16 *)(a4 + 6) - v25;
    if ( v14 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v15 = (a8 + 3) & 0xFFFFFFFC;
  v16 = RtlLengthSid((PSID)a4) + v15 + 8;
  if ( v16 < v15 )
    return 534LL;
  if ( v16 > 0xFFFF )
    return 3221225485LL;
  v17 = FirstFree;
  if ( !FirstFree || (char *)FirstFree + v16 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = v20;
  *(_BYTE *)v17 = 21;
  v17[1] = v16;
  *((_DWORD *)v17 + 1) = a6;
  v18 = RtlLengthSid((PSID)a4);
  RtlCopySid(v18, v17 + 4, (PSID)a4);
  v19 = RtlLengthSid((PSID)a4);
  memmove((char *)v17 + v19 + 8, Src, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
