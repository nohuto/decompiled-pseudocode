/*
 * XREFs of _RtlIsCriticalSectionLocked@4 @ 0x4B34A680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall RtlIsCriticalSectionLocked(int a1)
{
  return (*(_BYTE *)(a1 + 4) & 1) == 0;
}
