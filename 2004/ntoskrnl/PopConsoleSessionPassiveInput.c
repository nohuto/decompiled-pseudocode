/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x140711D64
 * Callers:
 *     PopSessionInputChange @ 0x140711DE0 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x14071217C (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140712330 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x140712774 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0x10000000000LL;
  v9 = 0LL;
  BYTE4(qword_140C20360) = 0;
  PopGetLockConsoleTimeout();
  DWORD2(xmmword_140C20350) = a2;
  PopSetSessionUserStatus(a1, 2LL);
  v6 = HIDWORD(PopConsoleContext);
  *a3 = 0;
  LODWORD(v9) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, &v9, &v8);
}
