/*
 * XREFs of ViDifCheckCallbackInterception @ 0x14037DC08
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x14037DBB0 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14037DBD4 (VfDifCaptureDriverEntry.c)
 *     IovAttachDeviceToDeviceStack @ 0x1409C7A5C (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14037DC40 (MmIsDriverVerifying.c)
 *     VfIsRuleClassEnabled @ 0x1409C9030 (VfIsRuleClassEnabled.c)
 *     VfUtilEqualUnicodeString @ 0x1409C9624 (VfUtilEqualUnicodeString.c)
 */

bool __fastcall ViDifCheckCallbackInterception(struct _DRIVER_OBJECT *a1)
{
  bool result; // al
  __int64 p_ServiceKeyName; // rbx

  result = 0;
  if ( !KernelVerifier
    && MmIsDriverVerifying(a1)
    && XdvEnabled
    && ((unsigned __int8)VfIsRuleClassEnabled(19LL) || (unsigned __int8)VfIsRuleClassEnabled(35LL)) )
  {
    p_ServiceKeyName = (__int64)&a1->DriverExtension->ServiceKeyName;
    if ( !(unsigned int)VfUtilEqualUnicodeString(&VfRdbssServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfMupServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfCscServiceName, p_ServiceKeyName)
      && !(unsigned int)VfUtilEqualUnicodeString(&VfAmdkmpagServiceName, p_ServiceKeyName) )
    {
      return 1;
    }
  }
  return result;
}
