/*
 * XREFs of VfDevObjPreAddDevice @ 0x1409D9108
 * Callers:
 *     PpvUtilCallAddDevice @ 0x14036D950 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14037DC40 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x1409E7F04 (VfFilterAttach.c)
 */

LOGICAL __fastcall VfDevObjPreAddDevice(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax

  result = MmIsDriverVerifying(DriverObject);
  if ( result )
  {
    result = MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VfFilterAttach(TargetDevice);
  }
  return result;
}
