/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00A39FC
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C00A3BF0 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1C0175FE0 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C00A3AEC (rimHandlePnpWaitersOnOwnedDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(unsigned int *)(a1 + 96);
  RIMLockExclusive(v1 + 104);
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)(v1 + 8 * v3 + 224));
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v8, 1, 0);
  if ( !*(_QWORD *)(v1 + 8 * v3 + 224) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  *(_QWORD *)(v1 + 8 * v3 + 224) = 0LL;
  *(_DWORD *)(v1 + 4 * v3 + 296) = 0;
  if ( *(_BYTE *)(v1 + 80) || *(_BYTE *)(v1 + 81) )
  {
    Win32FreePool(a1, v4, v6);
    *(_QWORD *)(v1 + 8 * v3 + 312) = 0LL;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v8);
  return ObfDereferenceObject((PVOID)v1);
}
