/*
 * XREFs of sub_1C0003D90 @ 0x1C0003D90
 * Callers:
 *     sub_1C0001DB0 @ 0x1C0001DB0 (sub_1C0001DB0.c)
 *     sub_1C00021A0 @ 0x1C00021A0 (sub_1C00021A0.c)
 *     StartRoutine @ 0x1C0002D50 (StartRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0003D90(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  UserData.Ptr = (ULONGLONG)&v3;
  *(_QWORD *)&UserData.Size = 4LL;
  return EtwWrite(RegHandle, &stru_1C00053B8, 0LL, 1u, &UserData);
}
