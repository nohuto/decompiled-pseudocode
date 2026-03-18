/*
 * XREFs of PopGetLockConsoleTimeout @ 0x140712774
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x140711D64 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x140760734 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405CFA78 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( BYTE6(xmmword_140C20350) && (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
