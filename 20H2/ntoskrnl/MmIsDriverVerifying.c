/*
 * XREFs of MmIsDriverVerifying @ 0x14037DC40
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037DC08 (ViDifCheckCallbackInterception.c)
 *     VfIsVerificationEnabled @ 0x1403A6950 (VfIsVerificationEnabled.c)
 *     VfGetPristineDispatchRoutine @ 0x1409D3CDC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x1409D3D2C (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1409D90B4 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409D9108 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D9B18 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
