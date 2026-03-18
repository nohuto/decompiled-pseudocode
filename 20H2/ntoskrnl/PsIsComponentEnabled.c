/*
 * XREFs of PsIsComponentEnabled @ 0x1403F6A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsComponentEnabled(int a1)
{
  return (a1 & KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[7]) == 0;
}
