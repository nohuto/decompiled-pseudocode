/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x1406FE518
 * Callers:
 *     PopSessionInputChange @ 0x1406FE594 (PopSessionInputChange.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x1406FE4F8 (PopGetLockConsoleTimeout.c)
 *     PopUpdateTimeouts @ 0x1406FE9F8 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x1406FEBAC (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0x10000000000LL;
  v9 = 0LL;
  BYTE4(qword_140C20600) = 0;
  PopGetLockConsoleTimeout(a1);
  DWORD2(xmmword_140C205F0) = a2;
  PopSetSessionUserStatus(a1, 2LL);
  v6 = HIDWORD(PopConsoleContext);
  *a3 = 0;
  LODWORD(v9) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, &v9, &v8);
}
