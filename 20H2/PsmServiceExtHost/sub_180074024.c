/*
 * XREFs of sub_180074024 @ 0x180074024
 * Callers:
 *     sub_1800746B0 @ 0x1800746B0 (sub_1800746B0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007418C @ 0x18007418C (sub_18007418C.c)
 */

__int64 __fastcall sub_180074024(__int64 a1, int a2)
{
  int v2; // r9d
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v2 = *(_DWORD *)(a1 + 1240);
  if ( (v2 & 1) != 0 )
  {
    if ( !a2 )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v4 = *(_QWORD *)(a1 + 32);
        v13 = 0;
        v9 = v4;
        v12 = 8;
        v11 = &v9;
        sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009DBBB, 0LL, 0LL, 3u, &v10);
        v2 = *(_DWORD *)(a1 + 1240);
      }
      *(_DWORD *)(a1 + 1240) = v2 & 0xFFFFFFFE;
    }
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  v5 = sub_18007418C(a1, v8);
  if ( v5 >= 0 )
  {
    if ( v8[0] )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v6 = *(_QWORD *)(a1 + 32);
        v13 = 0;
        v9 = v6;
        v12 = 8;
        v11 = &v9;
        sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009DAAE, 0LL, 0LL, 3u, &v10);
      }
      *(_DWORD *)(a1 + 1240) |= 1u;
    }
    goto LABEL_13;
  }
LABEL_14:
  sub_180035480((int *)a1);
  return (unsigned int)v5;
}
