/*
 * XREFs of MmIsDriverVerifying @ 0x14037DB20
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037DAE8 (ViDifCheckCallbackInterception.c)
 *     VfIsVerificationEnabled @ 0x1403A7360 (VfIsVerificationEnabled.c)
 *     VfGetPristineDispatchRoutine @ 0x1409D1CCC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x1409D1D1C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1409D70A4 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409D70F8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D7B08 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
