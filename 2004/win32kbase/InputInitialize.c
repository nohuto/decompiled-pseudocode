/*
 * XREFs of InputInitialize @ 0x1C0034604
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C000AEDC (--0CTouchProcessor@@QEAA@XZ.c)
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ApiSetEditionGetDefaultMouseSensitivity @ 0x1C00344D0 (ApiSetEditionGetDefaultMouseSensitivity.c)
 *     ShouldEnableInputVirtualization @ 0x1C003457C (ShouldEnableInputVirtualization.c)
 *     ApiSetGetInputSensorThreadingModel @ 0x1C0034774 (ApiSetGetInputSensorThreadingModel.c)
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C01B6E4C (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x1C01B748C (ivrLoadImage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 InputInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 (**v5)(void); // rdi
  unsigned int v6; // esi
  __int64 v7; // rax
  int InputSensorThreadingModel; // eax
  CTouchProcessor *v9; // rax
  CTouchProcessor *v10; // rax
  unsigned int v11; // esi
  CDeviceAcceleration **v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int DefaultMouseSensitivity; // ebp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  void *v20; // rcx
  char v21; // [rsp+30h] [rbp+8h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v21, 1, 0);
  v4 = 0;
  gbInputInitialized = 1;
  gInputLock = 0LL;
  v5 = (__int64 (**)(void))&unk_1C0241020;
  qword_1C0250438 = 0LL;
  v6 = 0;
  gQueueLock = 0LL;
  qword_1C0250428 = 0LL;
  gWndLock = 0LL;
  qword_1C0250448 = 0LL;
  CBaseInput::_sLock = 0LL;
  qword_1C0250418 = 0LL;
  CBaseInput::_sessionInitialized = 1;
  do
  {
    if ( v6 != *(_DWORD *)v5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2, v3);
    v7 = (*(v5 - 4))();
    *(v5 - 1) = (__int64 (*)(void))v7;
    if ( !v7 )
    {
      v4 = -1073741823;
      goto LABEL_20;
    }
    InputSensorThreadingModel = ApiSetGetInputSensorThreadingModel(*(unsigned int *)v5);
    *((_DWORD *)v5 - 4) = InputSensorThreadingModel;
    if ( !InputSensorThreadingModel )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2, v3);
    ++v6;
    v5 += 6;
  }
  while ( v6 < 3 );
  v9 = (CTouchProcessor *)Win32AllocPoolZInit(0xE8uLL, 1919964227LL);
  if ( v9 )
    v10 = CTouchProcessor::CTouchProcessor(v9);
  else
    v10 = 0LL;
  gpTouchProcessor = v10;
  if ( v10 )
  {
    v11 = 0;
    v12 = &qword_1C0241098;
    do
    {
      DefaultMouseSensitivity = ApiSetEditionGetDefaultMouseSensitivity(v11);
      if ( *((_DWORD *)v12 + 2) != v11 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16, v17);
      if ( *v12 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16, v17);
      v18 = ((__int64 (__fastcall *)(_QWORD))*(v12 - 1))(DefaultMouseSensitivity);
      *v12 = (CDeviceAcceleration *)v18;
      if ( !v18 )
      {
        v4 = -1073741823;
        goto LABEL_19;
      }
      ++v11;
      v12 += 3;
    }
    while ( v11 < 2 );
    if ( ShouldEnableInputVirtualization() )
    {
      gInputVirtualizationSessionId = gSessionId;
      gbInputVirtualizationEnabled = 1;
      ghModwin32kns = (void *)ivrLoadImage();
      if ( ghModwin32kns )
      {
        ivrInitAllwin32knsDelayLoads(v20);
        if ( gpfnIVInitialize )
          v4 = gpfnIVInitialize(&gbRootPartition);
        else
          v4 = -1073741637;
      }
      else
      {
        v4 = -1073741204;
      }
    }
  }
  else
  {
    v4 = -1073741801;
  }
LABEL_19:
  InitializeInputComponents();
LABEL_20:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v21);
  return v4;
}
