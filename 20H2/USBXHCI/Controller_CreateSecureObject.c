/*
 * XREFs of Controller_CreateSecureObject @ 0x1C007591C
 * Callers:
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Controller_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ecx
  __int128 v5; // [rsp+30h] [rbp-9h] BYREF
  __int64 v6; // [rsp+40h] [rbp+7h]
  __int64 v7; // [rsp+48h] [rbp+Fh] BYREF
  __int128 v8; // [rsp+50h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  __int128 v12; // [rsp+70h] [rbp+37h]

  v10 = 1;
  v7 = 0LL;
  v11 = 0;
  v9 = 0LL;
  v6 = 0LL;
  v2 = *(_QWORD *)(a1 + 112);
  v5 = 0LL;
  v8 = 0LL;
  v12 = *(_OWORD *)(a1 + 336);
  v3 = SecureChannel_SendRequestSynchronously(v2, (GUID *)&v7, 56, (__int64)&v5, 24);
  if ( v3 >= 0 )
  {
    v3 = v5;
    if ( (int)v5 >= 0 )
    {
      *(_QWORD *)(a1 + 568) = *((_QWORD *)&v5 + 1);
      *(_DWORD *)(a1 + 560) = v6;
    }
  }
  return (unsigned int)v3;
}
