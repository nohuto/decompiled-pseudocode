/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x140A6D250
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14037CC30 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x14037F540 (ExUnregisterCallback.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x1403F4520 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1403F4760 (ZwAlpcSetInformation.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x1407BDB28 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  NTSTATUS v2; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-61h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+88h] [rbp-9h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v0 = 0LL;
  PopAlpcMonitorServerPort = 0LL;
  v1 = 0LL;
  PopAlpcMonitorClientPort = 0LL;
  PortInformation = 0LL;
  CallbackObject = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  PortAttributes.Flags = 0x100000;
  PortAttributes.MaxMessageLength = 256LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v2 = ZwAlpcCreatePort(&PopAlpcMonitorServerPort, &ObjectAttributes, &PortAttributes);
  if ( v2 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        goto LABEL_6;
      *(_QWORD *)&PortInformation = v0;
      *((_QWORD *)&PortInformation + 1) = PopAlpcMonitorServerPort;
      v2 = ZwAlpcSetInformation(PopAlpcMonitorServerPort, AlpcRegisterCallbackInformation, &PortInformation, 0x10u);
      ObfDereferenceObjectWithTag(v0, 0x746C6644u);
      if ( v2 >= 0 )
      {
        PopMonitorProcessLoop();
        v2 = 0;
LABEL_6:
        if ( v2 >= 0 )
          return (unsigned int)v2;
      }
    }
  }
  if ( PopAlpcMonitorServerPort )
    ZwClose(PopAlpcMonitorServerPort);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObjectWithTag(v0, 0x746C6644u);
  return (unsigned int)v2;
}
