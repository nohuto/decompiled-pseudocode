/*
 * XREFs of ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C0214434
 * Callers:
 *     Send4FingerTapHotkey @ 0x1C0214830 (Send4FingerTapHotkey.c)
 * Callees:
 *     xxxSendInput @ 0x1C003A9BC (xxxSendInput.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

void xxxSend4FingerTapHotkey(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentKbdTables; // rax
  __int64 v3; // rbx
  _DWORD v4[80]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[70] = 1;
  v4[60] = 1;
  v4[50] = 1;
  v4[40] = 1;
  v4[30] = 1;
  v4[20] = 1;
  v4[10] = 1;
  LOWORD(v4[42]) = 135;
  LOWORD(v4[32]) = 135;
  v4[0] = 1;
  LOWORD(v4[72]) = 91;
  LOWORD(v4[2]) = 91;
  LOWORD(v4[62]) = 17;
  LOWORD(v4[12]) = 17;
  LOWORD(v4[52]) = 16;
  LOWORD(v4[22]) = 16;
  CurrentKbdTables = GetCurrentKbdTables(v1, v0);
  v3 = CurrentKbdTables;
  if ( CurrentKbdTables )
  {
    HIWORD(v4[72]) = InternalMapVirtualKeyEx(91LL, 0LL, CurrentKbdTables);
    HIWORD(v4[2]) = HIWORD(v4[72]);
    HIWORD(v4[62]) = InternalMapVirtualKeyEx(17LL, 0LL, v3);
    HIWORD(v4[12]) = HIWORD(v4[62]);
    HIWORD(v4[52]) = InternalMapVirtualKeyEx(16LL, 0LL, v3);
    HIWORD(v4[22]) = HIWORD(v4[52]);
    HIWORD(v4[42]) = InternalMapVirtualKeyEx(135LL, 0LL, v3);
    HIWORD(v4[32]) = HIWORD(v4[42]);
  }
  v4[73] = 2;
  v4[63] = 2;
  v4[53] = 2;
  v4[43] = 2;
  xxxSendInput(8u, (__int64)v4);
}
