/*
 * XREFs of _UninitRotationManager@0 @ 0xD4C52
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall UninitRotationManager()
{
  if ( dword_274060 )
    ExFreePoolWithTag(dword_274060, 0x6D747255u);
  dword_274060 = 0;
}
