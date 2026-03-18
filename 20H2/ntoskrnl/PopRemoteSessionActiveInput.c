/*
 * XREFs of PopRemoteSessionActiveInput @ 0x14076ED08
 * Callers:
 *     PopSessionInputChange @ 0x140720ED0 (PopSessionInputChange.c)
 *     PopConsoleSessionActiveInput @ 0x14076EC94 (PopConsoleSessionActiveInput.c)
 *     PopSessionConnected @ 0x140789BF0 (PopSessionConnected.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x140720A50 (PopSetSessionUserStatus.c)
 *     PopGetDisplayTimeout @ 0x14076ED44 (PopGetDisplayTimeout.c)
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
