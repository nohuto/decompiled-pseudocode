/*
 * XREFs of _KiIntSystemCall@0 @ 0x4B2F4F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KiIntSystemCall()
{
  __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
}
