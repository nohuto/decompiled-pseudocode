/*
 * XREFs of sub_1C0003E00 @ 0x1C0003E00
 * Callers:
 *     sub_1C00015B0 @ 0x1C00015B0 (sub_1C00015B0.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0003E00(__int64 a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)&v3.Size = 4LL;
  v3.Ptr = a1 + 144;
  v5 = 4LL;
  v4 = &v6;
  return EtwWrite(RegHandle, &stru_1C0005358, 0LL, 2u, &v3);
}
