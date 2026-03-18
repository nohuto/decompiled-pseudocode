/*
 * XREFs of PopRemoteSessionActiveInput @ 0x14075E388
 * Callers:
 *     PopSessionInputChange @ 0x1406FE594 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x14075E314 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x1407791E0 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x1406FEBAC (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x14075E3C4 (PopGetDisplayTimeout.c)
 */

__int64 __fastcall PopRemoteSessionActiveInput(unsigned int a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  PopSetSessionUserStatus(a1, 0);
  a3[1] = PopGetDisplayTimeout(a1);
  result = (unsigned int)PopInputTimeout;
  *a3 = PopInputTimeout;
  return result;
}
