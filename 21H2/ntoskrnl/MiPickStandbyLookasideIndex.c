/*
 * XREFs of MiPickStandbyLookasideIndex @ 0x14038EA8C
 * Callers:
 *     MiLockStandbyLookasidePage @ 0x14038E94C (MiLockStandbyLookasidePage.c)
 * Callees:
 *     <none>
 */

__int64 MiPickStandbyLookasideIndex()
{
  unsigned int Number; // r8d

  Number = KeGetPcr()->Prcb.Number;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    return Number & 0x3F;
  }
  else if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
  {
    Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
  }
  return Number;
}
