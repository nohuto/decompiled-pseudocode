/*
 * XREFs of MmIsDriverVerifying @ 0x14037BF10
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037BED8 (ViDifCheckCallbackInterception.c)
 *     VfIsVerificationEnabled @ 0x1403A4530 (VfIsVerificationEnabled.c)
 *     VfGetPristineDispatchRoutine @ 0x1409CDCBC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x1409CDD0C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1409D3094 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409D30E8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D3AF8 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
