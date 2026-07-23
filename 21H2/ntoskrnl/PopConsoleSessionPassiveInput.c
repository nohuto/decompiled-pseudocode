/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x140672010
 * Callers:
 *     PopSessionInputChange @ 0x140671C64 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x1406715BC (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140671770 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x14067208C (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0x10000000000LL;
  v9 = 0LL;
  BYTE4(qword_140C205C0) = 0;
  PopGetLockConsoleTimeout();
  DWORD2(xmmword_140C205B0) = a2;
  PopSetSessionUserStatus(a1, 2u);
  v6 = HIDWORD(PopConsoleContext);
  *a3 = 0;
  LODWORD(v9) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, (unsigned int *)&v9, (unsigned int *)&v8);
}
