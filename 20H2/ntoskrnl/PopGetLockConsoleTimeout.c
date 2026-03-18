/*
 * XREFs of PopGetLockConsoleTimeout @ 0x140721288
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x14072120C (PopConsoleSessionPassiveInput.c)
 *     PopGetDisplayTimeout @ 0x14076ED44 (PopGetDisplayTimeout.c)
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405D5F28 (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopGetLockConsoleTimeout(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( BYTE6(xmmword_140C204B0) && (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    return PopGetLockConsoleTimeoutUnsafe();
  return result;
}
