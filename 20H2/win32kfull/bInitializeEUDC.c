/*
 * XREFs of bInitializeEUDC @ 0x1C012D3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 bInitializeEUDC()
{
  __int64 result; // rax

  Dst = 0;
  ghsemEUDC1 = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEUDC1 )
    return 0LL;
  ghsemEUDC2 = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEUDC2 )
    return 0LL;
  ghsemEnableEUDC = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEnableEUDC )
    return 0LL;
  result = 1LL;
  qword_1C03398B8 = 0LL;
  gqlEUDC = 1;
  return result;
}
