/*
 * XREFs of sub_1C0004254 @ 0x1C0004254
 * Callers:
 *     sub_1C000B570 @ 0x1C000B570 (sub_1C000B570.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0004254(__int64 a1)
{
  HANDLE ThreadId; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]
  __int64 v6; // [rsp+50h] [rbp-18h]

  ThreadId = PsGetThreadId(*(PETHREAD *)(a1 + 96));
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&ThreadId;
  v6 = 1LL;
  v5 = a1 + 144;
  return EtwWrite(RegHandle, &stru_1C0005388, 0LL, 2u, &UserData);
}
