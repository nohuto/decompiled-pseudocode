/*
 * XREFs of IopQueryEnvironmentVariableInfoTrEE @ 0x14089AE20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopIssueTrEERequest @ 0x14050AE80 (IopIssueTrEERequest.c)
 *     IopEfiStatusToNTSTATUS @ 0x14089A02C (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopQueryEnvironmentVariableInfoTrEE(__int64 a1, __int64 a2, int a3, _QWORD *a4, _OWORD *a5)
{
  int v6; // edx
  int v8; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+54h] [rbp-2Ch] BYREF
  __int128 v10; // [rsp+58h] [rbp-28h] BYREF
  __int128 v11; // [rsp+68h] [rbp-18h]

  v8 = 0;
  v9 = a3;
  v10 = 0LL;
  v11 = 0LL;
  v6 = IopIssueTrEERequest(2, a1, a2, (__int64)&v9, 4u, (__int64)&v10, 0x20u, 0x20u, &v8);
  if ( v6 >= 0 )
  {
    if ( (_QWORD)v10 )
    {
      return (unsigned int)IopEfiStatusToNTSTATUS(v10);
    }
    else
    {
      *a4 = *((_QWORD *)&v10 + 1);
      *a5 = v11;
    }
  }
  return (unsigned int)v6;
}
