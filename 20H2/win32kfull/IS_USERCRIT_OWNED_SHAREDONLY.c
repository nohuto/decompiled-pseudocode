/*
 * XREFs of IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00D4CCC
 * Callers:
 *     SfnNCDESTROY @ 0x1C00D4540 (SfnNCDESTROY.c)
 *     SfnINLPWINDOWPOS @ 0x1C00D49B0 (SfnINLPWINDOWPOS.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 * Callees:
 *     <none>
 */

__int64 IS_USERCRIT_OWNED_SHAREDONLY()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return ExIsResourceAcquiredSharedLite(gpresUser) != 0;
  return v0;
}
