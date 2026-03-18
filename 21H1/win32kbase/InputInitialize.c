/*
 * XREFs of InputInitialize @ 0x1C001E64C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ApiSetGetInputSensorThreadingModel @ 0x1C001E7BC (ApiSetGetInputSensorThreadingModel.c)
 *     ShouldEnableInputVirtualization @ 0x1C001E898 (ShouldEnableInputVirtualization.c)
 *     ApiSetEditionGetDefaultMouseSensitivity @ 0x1C001E920 (ApiSetEditionGetDefaultMouseSensitivity.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C00212A8 (--0CTouchProcessor@@QEAA@XZ.c)
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C01BCBAC (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x1C01BD1EC (ivrLoadImage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 InputInitialize()
{
  unsigned int v0; // ebx
  __int64 (**v1)(void); // rdi
  unsigned int v2; // esi
  __int64 v3; // rax
  int InputSensorThreadingModel; // eax
  CTouchProcessor *v5; // rax
  CTouchProcessor *v6; // rax
  unsigned int v7; // esi
  CDeviceAcceleration **v8; // rdi
  unsigned int DefaultMouseSensitivity; // ebp
  __int64 v10; // rax
  void *v12; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v13, 1, 0);
  v0 = 0;
  gbInputInitialized = 1;
  gInputLock = 0LL;
  v1 = (__int64 (**)(void))&unk_1C0247020;
  qword_1C02563B8 = 0LL;
  v2 = 0;
  gQueueLock = 0LL;
  qword_1C02563D8 = 0LL;
  gWndLock = 0LL;
  qword_1C02563C8 = 0LL;
  CBaseInput::_sLock = 0LL;
  qword_1C02563A8 = 0LL;
  CBaseInput::_sessionInitialized = 1;
  do
  {
    if ( v2 != *(_DWORD *)v1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v3 = (*(v1 - 4))();
    *(v1 - 1) = (__int64 (*)(void))v3;
    if ( !v3 )
    {
      v0 = -1073741823;
      goto LABEL_20;
    }
    InputSensorThreadingModel = ApiSetGetInputSensorThreadingModel(*(unsigned int *)v1);
    *((_DWORD *)v1 - 4) = InputSensorThreadingModel;
    if ( !InputSensorThreadingModel )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    ++v2;
    v1 += 6;
  }
  while ( v2 < 3 );
  v5 = (CTouchProcessor *)Win32AllocPoolZInit(0xE8uLL);
  if ( v5 )
    v6 = CTouchProcessor::CTouchProcessor(v5);
  else
    v6 = 0LL;
  gpTouchProcessor = v6;
  if ( v6 )
  {
    v7 = 0;
    v8 = &qword_1C0247098;
    do
    {
      DefaultMouseSensitivity = ApiSetEditionGetDefaultMouseSensitivity(v7);
      if ( *((_DWORD *)v8 + 2) != v7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( *v8 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v10 = ((__int64 (__fastcall *)(_QWORD))*(v8 - 1))(DefaultMouseSensitivity);
      *v8 = (CDeviceAcceleration *)v10;
      if ( !v10 )
      {
        v0 = -1073741823;
        goto LABEL_19;
      }
      ++v7;
      v8 += 3;
    }
    while ( v7 < 2 );
    if ( (unsigned __int8)ShouldEnableInputVirtualization() )
    {
      gInputVirtualizationSessionId = gSessionId;
      gbInputVirtualizationEnabled = 1;
      ghModwin32kns = (void *)ivrLoadImage();
      if ( ghModwin32kns )
      {
        ivrInitAllwin32knsDelayLoads(v12);
        if ( gpfnIVInitialize )
          v0 = gpfnIVInitialize(&gbRootPartition);
        else
          v0 = -1073741637;
      }
      else
      {
        v0 = -1073741204;
      }
    }
  }
  else
  {
    v0 = -1073741801;
  }
LABEL_19:
  InitializeInputComponents();
LABEL_20:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v13);
  return v0;
}
