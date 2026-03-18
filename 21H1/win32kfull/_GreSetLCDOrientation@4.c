/*
 * XREFs of _GreSetLCDOrientation@4 @ 0x1D543D
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void *__fastcall GreSetLCDOrientation(char a1)
{
  void *result; // eax

  result = &unk_250C60;
  if ( (a1 & 1) == 0 )
    result = &unk_250A90;
  off_266024 = result;
  return result;
}
