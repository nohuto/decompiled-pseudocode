/*
 * XREFs of MiReferenceDriverPage @ 0x1403976B0
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
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
