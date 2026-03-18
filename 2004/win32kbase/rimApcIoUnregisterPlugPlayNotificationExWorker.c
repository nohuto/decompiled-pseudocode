/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C005310C
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C00530F0 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1C016FCB0 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C00531FC (rimHandlePnpWaitersOnOwnedDevices.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(unsigned int *)(a1 + 96);
  RIMLockExclusive(v1 + 104);
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v3);
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)(v1 + 8 * v3 + 224));
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v9, 1, 0);
  if ( !*(_QWORD *)(v1 + 8 * v3 + 224) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  *(_QWORD *)(v1 + 8 * v3 + 224) = 0LL;
  *(_DWORD *)(v1 + 4 * v3 + 296) = 0;
  if ( *(_BYTE *)(v1 + 80) || *(_BYTE *)(v1 + 81) )
  {
    Win32FreePool(a1);
    *(_QWORD *)(v1 + 8 * v3 + 312) = 0LL;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v9);
  return ObfDereferenceObject((PVOID)v1);
}
