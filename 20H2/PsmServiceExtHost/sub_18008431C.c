/*
 * XREFs of sub_18008431C @ 0x18008431C
 * Callers:
 *     sub_180083DA0 @ 0x180083DA0 (sub_180083DA0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180035B88 @ 0x180035B88 (sub_180035B88.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180083F70 @ 0x180083F70 (sub_180083F70.c)
 *     sub_180084040 @ 0x180084040 (sub_180084040.c)
 *     sub_18008415C @ 0x18008415C (sub_18008415C.c)
 *     sub_1800841A0 @ 0x1800841A0 (sub_1800841A0.c)
 *     sub_180084240 @ 0x180084240 (sub_180084240.c)
 */

__int64 __fastcall sub_18008431C(
        void *a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  __int64 v11; // rsi
  int v12; // edi
  int v13; // eax
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  void *v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  char v24[560]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+2B0h] [rbp+1B0h] BYREF

  v21 = a9;
  v19 = a3;
  v20 = a2;
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B3218, 64LL) )
      sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A2506, 0LL, 0LL, 2u, &v25);
    a3 = v19;
    a2 = v20;
  }
  v11 = -1LL;
  v20 = 0LL;
  if ( *a8 >= 2u || (*(_BYTE *)(a7 + 8) & 4) != 0 && (*(_BYTE *)a8 & 1) == 0 )
  {
    v12 = -1073741811;
  }
  else
  {
    v12 = sub_180035B88(v24, (__int64)a1, a2, a3, a4, a5, a6);
    if ( v12 >= 0 )
    {
      v13 = sub_180084040((__int64)v24, (_OWORD *)a7, a8, v21, &v20);
      v14 = v20;
      v12 = v13;
      if ( v13 >= 0 )
      {
        v11 = v20[5];
        sub_1800841A0((__int64)v20);
        sub_18008415C((__int64)v14);
        sub_180083F70((__int64)v14);
        v12 = 0;
      }
      if ( v14 )
        sub_1800274E0(v14);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v21 = a6;
    v20 = (__int64 *)a5;
    v22 = a1;
    v23 = v11;
    v19 = v12;
    sub_180084240(v15, byte_1800A24B3, v16, v17, (__int64)&v19, (__int64)&v23, &v22, (__int64)&v20, (__int64)&v21);
  }
  return (unsigned int)v12;
}
