/*
 * XREFs of _bInitializeEUDC@0 @ 0xEC480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bInitializeEUDC()
{
  int result; // eax

  Dst = 0;
  ghsemEUDC1 = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEUDC1 )
    return 0;
  ghsemEUDC2 = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEUDC2 )
    return 0;
  ghsemEnableEUDC = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEnableEUDC )
    return 0;
  dword_273FFC = 0;
  result = 1;
  gqlEUDC = 1;
  word_273FFA = 0;
  return result;
}
