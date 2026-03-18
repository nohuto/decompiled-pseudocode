/*
 * XREFs of CKeyboardSensor_Destroy @ 0x1C00230D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0023130 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

void *CKeyboardSensor_Destroy()
{
  void *result; // rax

  if ( gpKeyboardSensor )
  {
    result = CHidInput::`scalar deleting destructor'(gpKeyboardSensor, 1u);
    gpKeyboardSensor = 0LL;
  }
  return result;
}
