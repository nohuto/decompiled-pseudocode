/*
 * XREFs of Controller_CreateSecureObject @ 0x1C007471C
 * Callers:
 *     Controller_Create @ 0x1C006B314 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     memset @ 0x1C001B2C0 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F688 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Controller_CreateSecureObject(__int64 a1)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  int v4; // ecx
  __int128 v6; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+40h] [rbp-9h]
  GUID v8[4]; // [rsp+50h] [rbp+7h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  memset(v8, 0, sizeof(v8));
  v2 = *(_OWORD *)(a1 + 336);
  v3 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)v8[1].Data4 = 0LL;
  v8[2].Data1 = 1;
  *(_OWORD *)v8[2].Data4 = v2;
  *(_WORD *)(a1 + 586) = 257;
  *(_WORD *)v8[3].Data4 = 257;
  v4 = SecureChannel_SendRequestSynchronously(v3, v8, 64, (__int64)&v6, 24);
  if ( v4 >= 0 )
  {
    v4 = v6;
    if ( (int)v6 >= 0 )
    {
      *(_QWORD *)(a1 + 568) = *((_QWORD *)&v6 + 1);
      *(_DWORD *)(a1 + 560) = v7;
    }
  }
  return (unsigned int)v4;
}
