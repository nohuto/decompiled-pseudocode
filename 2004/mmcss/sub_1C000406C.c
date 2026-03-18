/*
 * XREFs of sub_1C000406C @ 0x1C000406C
 * Callers:
 *     sub_1C00015B0 @ 0x1C00015B0 (sub_1C00015B0.c)
 *     sub_1C0001B10 @ 0x1C0001B10 (sub_1C0001B10.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C000406C(__int64 a1, int a2)
{
  HANDLE ThreadId; // rax
  const EVENT_DESCRIPTOR *v4; // rdx
  HANDLE v6; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  ThreadId = PsGetThreadId(*(PETHREAD *)(a1 + 96));
  v4 = (const EVENT_DESCRIPTOR *)&unk_1C0005328;
  v6 = ThreadId;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v6;
  if ( !a2 )
    v4 = &stru_1C0005318;
  return EtwWrite(RegHandle, v4, 0LL, 1u, &UserData);
}
