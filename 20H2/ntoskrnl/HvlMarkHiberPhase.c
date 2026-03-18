/*
 * XREFs of HvlMarkHiberPhase @ 0x1404F6310
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14099C000 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F6928 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1404F69FC (HvlpMarkHypervisorPagesForHibernation.c)
 */

__int64 HvlMarkHiberPhase()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 && !VslVsmEnabled )
    result = HvlpMarkHypervisorPagesForHibernation();
  if ( HvlHypervisorConnected )
    return HvlpMarkHvlPagesForHibernation();
  return result;
}
