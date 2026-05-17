/*
 * XREFs of RtlpAddKnownAce @ 0x1800375C4
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180036520 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAce @ 0x1800788B0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007A000 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180085D80 (RtlAddAccessDeniedAceEx.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800888D0 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAuditAccessAceEx @ 0x18008AFA0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008B900 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedAce @ 0x18008C2A0 (RtlAddAccessDeniedAce.c)
 *     RtlDefaultNpAcl @ 0x1800D6AA0 (RtlDefaultNpAcl.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800E94A0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E9500 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E9770 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  unsigned __int8 v10; // bp
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned __int16 v13; // r8
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = *a1;
  if ( (unsigned __int8)*a1 <= (unsigned __int8)a2 )
    v10 = a2;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v11 = a3 & 0xFFFFFF20;
    }
    else if ( !a6 )
    {
      v11 = a3 & 0xFFFFFFC0;
    }
    if ( v11 )
      return 3221225485LL;
  }
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, v15) )
    return 3221225591LL;
  v12 = v15[0];
  v13 = 4 * (Src[1] + 4);
  if ( !v15[0] || v15[0] + (unsigned __int64)v13 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v15[0] + 2LL) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = a6;
  *(_DWORD *)(v12 + 4) = a4;
  memmove((void *)(v12 + 8), Src, 4LL * Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
