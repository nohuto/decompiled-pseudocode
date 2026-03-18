/*
 * XREFs of PopGetDisplayTimeout @ 0x14075E3C4
 * Callers:
 *     PopSessionInputChange @ 0x1406FE594 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x14075E388 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1408F08E4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x1406FE4F8 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopGetDisplayTimeout(int a1)
{
  __int64 result; // rax

  if ( (_DWORD)PopConsoleContext != a1 || a1 == -1 )
    return 0LL;
  result = PopGetLockConsoleTimeout(a1);
  if ( !(_DWORD)result )
    return (unsigned int)PopDisplayTimeout;
  return result;
}
