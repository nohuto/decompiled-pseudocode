/*
 * XREFs of PopGetDisplayTimeout @ 0x14076ED44
 * Callers:
 *     PopSessionInputChange @ 0x140720ED0 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x14076ED08 (PopRemoteSessionActiveInput.c)
 *     PopCheckConsoleTimeouts @ 0x1408F77E4 (PopCheckConsoleTimeouts.c)
 * Callees:
 *     PopGetLockConsoleTimeout @ 0x140721288 (PopGetLockConsoleTimeout.c)
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
