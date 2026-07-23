/*
 * XREFs of PiDrvDbLoadNode @ 0x140694044
 * Callers:
 *     PiDrvDbNodeActionCallback @ 0x140693FE0 (PiDrvDbNodeActionCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364F94 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwWaitForSingleObject @ 0x1403FA600 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PiDrvDbLoadNode(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v11; // eax
  int v12; // edi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 80) )
  {
    v2 = -1073740697;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 488) )
    {
      KeCancelTimer((PKTIMER)(a1 + 264));
      *(_BYTE *)(a1 + 488) = 0;
    }
    v6 = (_QWORD *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 72) )
    {
      if ( (int)SysCtxRegOpenKey(0LL, 0LL, *(_QWORD *)(a1 + 40), 0, 0x2000000u, (__int64)&Handle) < 0
        || (v2 = SysCtxRegOpenKey(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72),
            ZwClose(Handle),
            v2 < 0) )
      {
        if ( PnpShutdownEvent.Header.SignalState )
        {
          v2 = -1073741077;
          goto LABEL_6;
        }
        v11 = ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
        v12 = v11;
        if ( !*(_BYTE *)(a1 + 489) )
        {
          *(_BYTE *)(a1 + 489) = 1;
          PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop, (unsigned __int16 *)(a1 + 16), v11);
          PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, (unsigned __int16 *)(a1 + 16), v12);
        }
        *(_QWORD *)(a1 + 224) = 0LL;
        *(_QWORD *)(a1 + 240) = PiDrvDbLoadNodeWorkerCallback;
        *(_QWORD *)(a1 + 248) = a1;
        KeInitializeEvent((PRKEVENT)(a1 + 200), SynchronizationEvent, 0);
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 224), CriticalWorkQueue);
        KeWaitForSingleObject((PVOID)(a1 + 200), Executive, 0, 0, 0LL);
        if ( *v6 )
        {
          v2 = 0;
        }
        else if ( *(_BYTE *)(a1 + 80) )
        {
          v2 = -1073740697;
        }
        else
        {
          v2 = -1073741823;
          if ( *(int *)(a1 + 256) < 0 )
            v2 = *(_DWORD *)(a1 + 256);
        }
      }
    }
    *a2 = *v6;
  }
LABEL_6:
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return (unsigned int)v2;
}
