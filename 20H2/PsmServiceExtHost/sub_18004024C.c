/*
 * XREFs of sub_18004024C @ 0x18004024C
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 *     sub_180040144 @ 0x180040144 (sub_180040144.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

char __fastcall sub_18004024C(int a1)
{
  int v1; // eax
  __int64 v2; // rcx
  int v3; // r9d
  int v5; // [rsp+30h] [rbp-58h] BYREF
  int v6; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-48h] BYREF
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  v5 = a1;
  v1 = RtlPublishWnfStateData(0x41C6033FA3BC1075LL, 0LL, &v5, 4LL, 0LL);
  if ( v1 < 0 && (unsigned int)dword_1800B31E0 > 4 )
  {
    LOBYTE(v1) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( (_BYTE)v1 )
    {
      v10 = 0;
      v8 = &v6;
      v6 = v3;
      v9 = 4;
      LOBYTE(v1) = sub_18002E278(v2, (unsigned __int8 *)dword_18009EF51, 0LL, 0LL, 3u, &v7);
    }
  }
  return v1;
}
