/*
 * XREFs of HaliInitPowerManagement @ 0x1407AE3A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14037ECF0 (ExRegisterCallback.c)
 *     HalpAcpiGetFacsMapping @ 0x1403BA938 (HalpAcpiGetFacsMapping.c)
 *     ExCreateCallback @ 0x14061C450 (ExCreateCallback.c)
 *     HalpPutAcpiHacksInRegistry @ 0x1407AE4A0 (HalpPutAcpiHacksInRegistry.c)
 *     HalpPiix4Detect @ 0x14099B3E0 (HalpPiix4Detect.c)
 */

NTSTATUS __fastcall HaliInitPowerManagement(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 FacsMapping; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  LOBYTE(v4) = 1;
  HalpPiix4Detect(v4);
  HalpPutAcpiHacksInRegistry();
  ObjectAttributes.RootDirectory = 0LL;
  CallbackObject = 0LL;
  *a2 = &HalAcpiDispatchTable;
  PmAcpiDispatchTable = a1;
  off_140C005C0 = HaliSetWakeAlarm;
  ObjectAttributes.Length = 48;
  qword_140C009F0 = (__int64)HaliInitializePlatformDebugTriggers;
  ObjectAttributes.Attributes = 80;
  qword_140C009F8 = (__int64)HaliRunPlatformDebugTriggers;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)HalpPowerStateCallback, 0LL);
    FacsMapping = HalpAcpiGetFacsMapping(v6);
    if ( FacsMapping )
      HalpWakeVector = FacsMapping + 12;
    return 0;
  }
  return result;
}
