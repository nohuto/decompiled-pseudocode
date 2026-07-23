/*
 * XREFs of AuthzBasepMemberOf @ 0x1405BCC28
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     SepSidInToken @ 0x14026D774 (SepSidInToken.c)
 *     AuthzBasepGetNextValue @ 0x1402FC7EC (AuthzBasepGetNextValue.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall AuthzBasepMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v7; // di
  int NextValue; // eax
  int v12; // ebx
  size_t v13; // r8
  __int64 v14; // r9
  char v15; // al
  __int128 v17; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-A8h]
  void *Src; // [rsp+60h] [rbp-98h]
  _BYTE v20[80]; // [rsp+70h] [rbp-88h] BYREF

  Src = 0LL;
  v7 = a5 != 0;
  *a6 = 0;
  v17 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    NextValue = AuthzBasepGetNextValue(a1, (__int64)&v17);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      return (unsigned int)v12;
    v13 = DWORD2(v18);
    if ( DWORD2(v18) >= 0x44 )
      v13 = 68LL;
    memmove(v20, Src, v13);
    LOBYTE(v14) = a3;
    v15 = SepSidInToken(a2, 0LL, (__int64)v20, v14, a4, 0, 0);
    if ( a5 )
    {
      v7 &= v15;
      if ( !v7 )
        goto LABEL_12;
    }
    else
    {
      v7 |= v15;
      if ( v7 )
        goto LABEL_12;
    }
  }
  v12 = 0;
LABEL_12:
  if ( v12 >= 0 )
    *a6 = v7;
  return (unsigned int)v12;
}
