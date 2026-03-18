/*
 * XREFs of PopSetupKsrCallbacks @ 0x140A77070
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14037E960 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x1406DD3F0 (ExCreateCallback.c)
 */

NTSTATUS PopSetupKsrCallbacks()
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+70h] [rbp+10h] BYREF
  __int64 v4; // [rsp+78h] [rbp+18h] BYREF

  CallbackObject = 0LL;
  v4 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  result = KsrGetFirmwareInformation(&v4);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
      return (unsigned int)ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopKsrCallback, 0LL);
  }
  return result;
}
