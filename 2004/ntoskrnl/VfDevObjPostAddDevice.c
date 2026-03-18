/*
 * XREFs of VfDevObjPostAddDevice @ 0x1409D3094
 * Callers:
 *     PpvUtilCallAddDevice @ 0x14036B970 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14037BF10 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x1409E1EE4 (VfFilterAttach.c)
 */

void __fastcall VfDevObjPostAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        __int64 a4,
        int a5)
{
  if ( a5 >= 0 && (MmVerifierData & 0x10) != 0 )
  {
    if ( MmIsDriverVerifying(DriverObject) )
      VfFilterAttach(TargetDevice);
  }
}
