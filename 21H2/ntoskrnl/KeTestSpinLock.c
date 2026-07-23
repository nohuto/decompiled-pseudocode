/*
 * XREFs of KeTestSpinLock @ 0x14021AA50
 * Callers:
 *     KiDecodeMcaFault @ 0x1403DBEB0 (KiDecodeMcaFault.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
