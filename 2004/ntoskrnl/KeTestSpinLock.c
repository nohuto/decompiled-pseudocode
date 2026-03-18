/*
 * XREFs of KeTestSpinLock @ 0x14032D430
 * Callers:
 *     KiDecodeMcaFault @ 0x1403D8740 (KiDecodeMcaFault.c)
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
