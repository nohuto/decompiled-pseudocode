/*
 * XREFs of sub_1C0003D0C @ 0x1C0003D0C
 * Callers:
 *     sub_1C0001DB0 @ 0x1C0001DB0 (sub_1C0001DB0.c)
 *     sub_1C00021A0 @ 0x1C00021A0 (sub_1C00021A0.c)
 *     sub_1C0002CC0 @ 0x1C0002CC0 (sub_1C0002CC0.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0003D0C(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+70h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  v3.Ptr = (ULONGLONG)&v6;
  *(_QWORD *)&v3.Size = 4LL;
  v4 = &v7;
  v5 = 4LL;
  return EtwWrite(RegHandle, &stru_1C00053A8, 0LL, 2u, &v3);
}
