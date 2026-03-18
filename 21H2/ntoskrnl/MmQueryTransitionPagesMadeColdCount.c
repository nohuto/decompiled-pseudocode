/*
 * XREFs of MmQueryTransitionPagesMadeColdCount @ 0x1403606A8
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x1407DD3D0 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQueryTransitionPagesMadeColdCount(unsigned int *a1)
{
  *a1 = ((unsigned int)HvlEnlightenments >> 21) & 1;
  return (unsigned int)MiTransitionPagesMadeCold;
}
