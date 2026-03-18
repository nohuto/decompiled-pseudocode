/*
 * XREFs of InputUnInitialize @ 0x1C0007D60
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     UnInitializeInputComponents @ 0x1C0007ED8 (UnInitializeInputComponents.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00270BC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0027568 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     isInputVirtualizationEnabled @ 0x1C0036AA0 (isInputVirtualizationEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputUnInitialize()
{
  void (**v0)(void); // rbx
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  CDeviceAcceleration **v6; // rbx
  __int64 v7; // rdi
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v8, 1, 0);
    UnInitializeInputComponents();
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
    {
      if ( gpfnIVUninitialize )
        gpfnIVUninitialize();
      if ( ghModwin32kns && *((_QWORD *)ghModwin32kns + 3) )
        ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)ghModwin32kns + 24, 8uLL);
    }
    v0 = (void (**)(void))&off_1C023F008;
    v1 = 3LL;
    do
    {
      (*v0)();
      v0 += 6;
      --v1;
    }
    while ( v1 );
    CBaseInput::_sessionInitialized = 0;
    if ( qword_1C024E418 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    v6 = &qword_1C023F098;
    v7 = 2LL;
    do
    {
      if ( *v6 )
        (*(void (__fastcall **)(CDeviceAcceleration *, __int64))(*(_QWORD *)*v6 + 16LL))(*v6, 1LL);
      *v6 = 0LL;
      v6 += 3;
      --v7;
    }
    while ( v7 );
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v8);
  }
}
