/*
 * XREFs of sub_1C0003EF4 @ 0x1C0003EF4
 * Callers:
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0003EF4(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 144;
  return EtwWrite(RegHandle, &stru_1C0005348, 0LL, 1u, &UserData);
}
