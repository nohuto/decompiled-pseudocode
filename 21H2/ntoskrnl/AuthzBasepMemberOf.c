/*
 * XREFs of AuthzBasepMemberOf @ 0x1405C2258
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402F24D0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     SepSidInToken @ 0x14026CA24 (SepSidInToken.c)
 *     AuthzBasepGetNextValue @ 0x1402F48F4 (AuthzBasepGetNextValue.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall AuthzBasepMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v7; // di
  int NextValue; // eax
  int v12; // ebx
  size_t v13; // r8
  char v14; // al
  __int128 v16; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+50h] [rbp-A8h]
  void *Src; // [rsp+60h] [rbp-98h]
  _BYTE v19[80]; // [rsp+70h] [rbp-88h] BYREF

  Src = 0LL;
  v7 = a5 != 0;
  *a6 = 0;
  v16 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    NextValue = AuthzBasepGetNextValue(a1, (__int64)&v16);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      return (unsigned int)v12;
    v13 = DWORD2(v17);
    if ( DWORD2(v17) >= 0x44 )
      v13 = 68LL;
    memmove(v19, Src, v13);
    v14 = SepSidInToken(a2, 0LL, v19, a3, a4, 0, 0);
    if ( a5 )
    {
      v7 &= v14;
      if ( !v7 )
        goto LABEL_12;
    }
    else
    {
      v7 |= v14;
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
