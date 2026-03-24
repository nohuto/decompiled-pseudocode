/*
 * XREFs of MmIsDriverVerifying @ 0x14037DFD0
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037DF98 (ViDifCheckCallbackInterception.c)
 *     VfIsVerificationEnabled @ 0x1403A7210 (VfIsVerificationEnabled.c)
 *     VfGetPristineDispatchRoutine @ 0x1409D0CCC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x1409D0D1C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1409D60A4 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409D60F8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D6B08 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
