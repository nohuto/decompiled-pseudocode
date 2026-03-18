/*
 * XREFs of CMouseSensor_Destroy @ 0x1C0008820
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0008850 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

void *CMouseSensor_Destroy()
{
  void *result; // rax

  if ( gpMouseSensor )
  {
    result = CHidInput::`scalar deleting destructor'(gpMouseSensor, 1u);
    gpMouseSensor = 0LL;
  }
  return result;
}
