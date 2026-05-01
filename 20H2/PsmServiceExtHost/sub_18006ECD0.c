/*
 * XREFs of sub_18006ECD0 @ 0x18006ECD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_18006E160 @ 0x18006E160 (sub_18006E160.c)
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006E3C8 @ 0x18006E3C8 (sub_18006E3C8.c)
 *     sub_18006F39C @ 0x18006F39C (sub_18006F39C.c)
 */

char __fastcall sub_18006ECD0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rdi
  int v4; // eax
  char v5; // cl
  __int64 v6; // r8
  __int64 v7; // r9
  char result; // al
  DWORD v9; // ebx
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+108h] [rbp+0h]
  int v16; // [rsp+110h] [rbp+8h]
  int v17; // [rsp+114h] [rbp+Ch]

  sub_18000B7F8(TlsValue);
  v3 = *(_DWORD **)(a2 + 32);
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v4 = *(_DWORD *)(a2 + 108);
    v17 = 0;
    LODWORD(v10) = v4;
    v16 = 4;
    v15 = &v10;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009CB74, 0LL, 0LL, 3u, &v14);
  }
  RtlAcquireSRWLockExclusive(v3 + 18);
  v3[20] = GetCurrentThreadId();
  v5 = *(_BYTE *)(a2 + 170);
  if ( (v5 & 1) == 0 || (*(_BYTE *)(*(_QWORD *)v3 + 2712LL) & 1) != 0 )
  {
    v11[1] = v11;
    v11[0] = v11;
  }
  else
  {
    sub_18006E160(a2, v11);
    sub_18006F39C((PVOID)a2);
    v5 = *(_BYTE *)(a2 + 170);
  }
  *(_BYTE *)(a2 + 170) = v5 & 0xFD;
  v3[20] = 0;
  RtlReleaseSRWLockExclusive(v3 + 18);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 0x400000000001LL) )
  {
    LODWORD(v10) = *(_DWORD *)(a2 + 108);
    v12 = 0x1000000LL;
    sub_180063424((__int64)&dword_1800B31E0, byte_18009C905, v6, v7, (__int64)&v10, (__int64)&v12);
  }
  sub_18006E3C8(v11);
  result = sub_18006E348((volatile signed __int64 *)a2);
  v9 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v9, 0LL);
  }
  return result;
}
