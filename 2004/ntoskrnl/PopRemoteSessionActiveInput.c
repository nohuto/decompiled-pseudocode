/*
 * XREFs of PopRemoteSessionActiveInput @ 0x1407606F8
 * Callers:
 *     PopSessionInputChange @ 0x140711DE0 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x140760684 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x14077B5F0 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x140712330 (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x140760734 (PopGetDisplayTimeout.c)
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
