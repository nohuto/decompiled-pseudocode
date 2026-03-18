/*
 * XREFs of _GetInputSensorThreadingModel@4 @ 0xEC60E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall GetInputSensorThreadingModel(unsigned int a1)
{
  int result; // eax

  result = 1;
  if ( a1 >= 2 )
    return 2;
  return result;
}
