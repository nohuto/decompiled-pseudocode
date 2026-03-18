/*
 * XREFs of InputUnInitialize @ 0x1C001E9CC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     UnInitializeInputComponents @ 0x1C001EB24 (UnInitializeInputComponents.c)
 *     isInputVirtualizationEnabled @ 0x1C006588C (isInputVirtualizationEnabled.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputUnInitialize()
{
  void (**v0)(void); // rbx
  __int64 v1; // rdi
  CDeviceAcceleration **v2; // rbx
  __int64 v3; // rdi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v4, 1, 0);
    UnInitializeInputComponents();
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
    {
      if ( gpfnIVUninitialize )
        gpfnIVUninitialize();
      if ( ghModwin32kns && *((_QWORD *)ghModwin32kns + 3) )
        ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)ghModwin32kns + 24, 8uLL);
    }
    v0 = (void (**)(void))&off_1C0247008;
    v1 = 3LL;
    do
    {
      (*v0)();
      v0 += 6;
      --v1;
    }
    while ( v1 );
    CBaseInput::_sessionInitialized = 0;
    if ( qword_1C02563A8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v2 = &qword_1C0247098;
    v3 = 2LL;
    do
    {
      if ( *v2 )
        (*(void (__fastcall **)(CDeviceAcceleration *, __int64))(*(_QWORD *)*v2 + 16LL))(*v2, 1LL);
      *v2 = 0LL;
      v2 += 3;
      --v3;
    }
    while ( v3 );
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v4);
  }
}
