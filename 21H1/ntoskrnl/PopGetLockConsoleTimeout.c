/*
 * XREFs of PopGetLockConsoleTimeout @ 0x1406FE4F8
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x1406FE518 (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x14075E3C4 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405CE6A8 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( BYTE6(xmmword_140C205F0) && (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
