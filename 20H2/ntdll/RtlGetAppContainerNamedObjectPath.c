/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x180043F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x180038310 (RtlEqualSid.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044080 (RtlpGetTokenNamedObjectPath.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 a1, __int64 a2, char a3, _OWORD *a4)
{
  __int64 v7; // rbx
  char v8; // r13
  unsigned int v9; // edi
  char v10; // si
  __int64 result; // rax
  __int64 v12; // r8
  char *v13; // [rsp+28h] [rbp-A9h]
  int v14; // [rsp+38h] [rbp-99h] BYREF
  int v15; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v16; // [rsp+40h] [rbp-91h] BYREF
  _WORD *v17; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int8 *v18; // [rsp+A8h] [rbp-29h] BYREF
  char v19; // [rsp+150h] [rbp+7Fh] BYREF

  v7 = a1;
  if ( !a4 )
    return 3221225485LL;
  if ( a1 && a2 )
    return 3221225520LL;
  LODWORD(v16) = 0;
  v8 = 0;
  v15 = 0;
  v9 = a3 != 0 ? 13 : 8;
  if ( a2 )
  {
    v7 = -4LL;
    v10 = 0;
LABEL_6:
    if ( a2 )
      goto LABEL_11;
    goto LABEL_7;
  }
  v10 = 1;
  if ( !a1 )
  {
    v7 = -6LL;
    goto LABEL_6;
  }
LABEL_7:
  v14 = 0;
  v13 = &v19;
  result = NtQueryInformationToken(v7, 29LL, &v14);
  if ( (int)result < 0 )
    return result;
  if ( !v14 )
  {
    result = 0LL;
    *a4 = 0LL;
    return result;
  }
LABEL_11:
  if ( a3 )
  {
    v8 = 1;
    if ( v10 )
    {
      v13 = &v19;
      result = NtQueryInformationToken(-4LL, 42LL, &v15);
      if ( (int)result < 0 )
        return result;
      if ( v15 )
      {
        result = NtQueryInformationToken(v7, 42LL, &v16);
        if ( (int)result < 0 )
          return result;
        if ( !(_DWORD)v16 )
          return 3221225659LL;
        result = NtQueryInformationToken(-4LL, 1LL, &v17);
        if ( (int)result < 0 )
          return result;
        v13 = &v19;
        result = NtQueryInformationToken(v7, 1LL, &v18);
        if ( (int)result < 0 )
          return result;
        if ( !RtlEqualSid(v18, v17) )
          return 3221225659LL;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  v12 = v9 | 2;
  if ( !v8 )
    v12 = v9;
  return RtlpGetTokenNamedObjectPath(v7, a2, v12, a4, v13);
}
