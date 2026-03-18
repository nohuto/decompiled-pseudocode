/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x1403CC310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000008;
}
