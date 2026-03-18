/*
 * XREFs of HvlMarkHiberPhase @ 0x1404F2450
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140994860 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F2A68 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1404F2B3C (HvlpMarkHypervisorPagesForHibernation.c)
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
