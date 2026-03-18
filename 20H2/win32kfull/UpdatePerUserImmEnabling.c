/*
 * XREFs of UpdatePerUserImmEnabling @ 0x1C012CE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UpdatePerUserImmEnabling()
{
  if ( (unsigned int)IsIMMEnabledSystem() )
    _InterlockedOr(gpsi, 4u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFFFB);
  return 1LL;
}
