/*
 * XREFs of sub_1C0003E84 @ 0x1C0003E84
 * Callers:
 *     sub_1C0002B50 @ 0x1C0002B50 (sub_1C0002B50.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0003E84(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 144;
  return EtwWrite(RegHandle, &stru_1C0005368, 0LL, 1u, &UserData);
}
