/*
 * XREFs of MiReferenceDriverPage @ 0x140394620
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x14028A920 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiReferenceDriverPage(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r9

  result = MiAreChargesNeededToLockPage(a1);
  if ( (_DWORD)result )
    *(_BYTE *)(v2 + 35) |= 0x20u;
  ++*(_WORD *)(v2 + 32);
  return result;
}
