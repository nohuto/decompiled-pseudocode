/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x14072120C
 * Callers:
 *     PopSessionInputChange @ 0x140720ED0 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x14072089C (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140720A50 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x140721288 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0x10000000000LL;
  v9 = 0LL;
  BYTE4(qword_140C204C0) = 0;
  PopGetLockConsoleTimeout();
  DWORD2(xmmword_140C204B0) = a2;
  PopSetSessionUserStatus(a1, 2u);
  v6 = HIDWORD(PopConsoleContext);
  *a3 = 0;
  LODWORD(v9) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, (unsigned int *)&v9, (unsigned int *)&v8);
}
