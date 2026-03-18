/*
 * XREFs of sub_1C00042F0 @ 0x1C00042F0
 * Callers:
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 */

NTSTATUS sub_1C00042F0()
{
  int v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  UserData.Ptr = (ULONGLONG)&v1;
  v1 = 1;
  *(_QWORD *)&UserData.Size = 4LL;
  return EtwWrite(RegHandle, &stru_1C0005338, 0LL, 1u, &UserData);
}
