/*
 * XREFs of sub_1800826B0 @ 0x1800826B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800097FC @ 0x1800097FC (sub_1800097FC.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180062720 @ 0x180062720 (sub_180062720.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_18007BBD8 @ 0x18007BBD8 (sub_18007BBD8.c)
 *     sub_18007BEF8 @ 0x18007BEF8 (sub_18007BEF8.c)
 *     sub_1800824A8 @ 0x1800824A8 (sub_1800824A8.c)
 *     sub_180083024 @ 0x180083024 (sub_180083024.c)
 */

char __fastcall sub_1800826B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r8
  unsigned int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  char result; // al
  DWORD v23; // ebx
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  char TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0;
  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278(v4, (unsigned __int8 *)dword_1800A215E, 0LL, 0LL, 2u, &v30);
  sub_180009854(*(_QWORD *)a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = *(_QWORD *)a2;
  *(_DWORD *)(a2 + 72) = CurrentThreadId;
  sub_1800097FC(v6);
  v8 = 0;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) |= 1u;
  while ( 1 )
  {
    sub_18007BBD8(*(_QWORD *)a2, v7);
    if ( !*(_DWORD *)(a2 + 84) )
      break;
    RtlQueryUnbiasedInterruptTime(&v25);
    v10 = *(_QWORD *)a2;
    v28 = *(_QWORD *)(a2 + 88);
    v3 = v25 / 0x2710 - *(_DWORD *)(a2 + 84);
    sub_18007BEF8(v10, (v25 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
    if ( v8 || v3 <= 0x3A980 )
    {
      v11 = 0;
    }
    else
    {
      v8 = 1;
      v11 = 1;
    }
    if ( !(unsigned int)sub_1800824A8((_QWORD *)a2, v3, v11) )
      goto LABEL_17;
    v12 = *(_DWORD *)(a2 + 76);
    if ( v3 >= v12 && (v12 = *(_DWORD *)(a2 + 80), v3 >= v12) )
      v13 = 0;
    else
      v13 = v12 - v3;
    v27[1] = -10000LL * v13;
    RtlWaitOnAddress(a2 + 88, &v28, 8LL);
  }
  sub_18007BEF8(*(_QWORD *)a2, v9);
LABEL_17:
  sub_180083024(a2 + 24);
  v14 = *(_QWORD *)(a2 + 8);
  PdcNotificationClientAcknowledge(v14, 0LL);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v26 = 0;
    v27[0] = v14;
    LODWORD(v25) = v17;
    sub_180062720(v15, byte_18009E972, v16, v17, (__int64)&v25, (__int64)v27, (__int64)&v26);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
  {
    v27[0] = 0x1000000LL;
    LODWORD(v25) = v3;
    sub_180063424(v18, byte_1800A219B, v19, v20, (__int64)&v25, (__int64)v27);
  }
  sub_180009854(*(_QWORD *)a2);
  v21 = *(_QWORD *)a2;
  *(_DWORD *)(a2 + 72) = 0;
  result = sub_1800097FC(v21);
  v23 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    result = TlsSetValue(v23, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B3218, 8LL);
    if ( result )
      return sub_18002E278(v24, (unsigned __int8 *)dword_1800A21DD, 0LL, 0LL, 2u, &v30);
  }
  return result;
}
