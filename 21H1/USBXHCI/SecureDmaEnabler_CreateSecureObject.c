/*
 * XREFs of SecureDmaEnabler_CreateSecureObject @ 0x1C0077014
 * Callers:
 *     SecureDmaEnabler_Create @ 0x1C0076E94 (SecureDmaEnabler_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall SecureDmaEnabler_CreateSecureObject(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  int v4; // edx
  int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-50h] BYREF
  GUID v8[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+70h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  v3 = *(_QWORD *)(v1 + 112);
  v9 = 0LL;
  v10 = 0LL;
  LODWORD(v9) = 4;
  memset(v8, 0, sizeof(v8));
  *((_QWORD *)&v9 + 1) = *(_QWORD *)(v1 + 552);
  LOBYTE(v10) = *(_DWORD *)(v1 + 540) == 2;
  v5 = SecureChannel_SendRequestSynchronously(v3, v8, 56, (__int64)&v7, 16);
  if ( v5 >= 0 )
  {
    if ( (int)v7 >= 0 )
    {
      *(_QWORD *)(a1 + 16) = *((_QWORD *)&v7 + 1);
    }
    else
    {
      v5 = v7;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v4,
          18,
          21,
          (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
          v7);
      }
    }
  }
  return (unsigned int)v5;
}
