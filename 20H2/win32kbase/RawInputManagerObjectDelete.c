/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C0029244
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C002A3B8 (RIMObjectManagerCallout.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0022E44 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0023390 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     rimFreeAllUserMem @ 0x1C00243E4 (rimFreeAllUserMem.c)
 *     rimRemoveFromObTrackList @ 0x1C0028F2C (rimRemoveFromObTrackList.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00C2D7C (RIMFreeSpecificDevWorker.c)
 *     rimFreePointerRawDataListWorker @ 0x1C0171830 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C017D194 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C017D834 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C017DC48 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 ObjectType; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD **v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  int v25; // edx
  void *v26; // rcx
  char v27; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  ObjectType = ObGetObjectType(*a1);
  v6 = ExRawInputManagerObjectType;
  if ( ObjectType != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType, v3, v4, v5);
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v7 = *(_DWORD *)(v1 + 4);
    if ( v7 == 2 )
    {
      rimRemoveFromObTrackList(v1);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v20 = *(struct _KTHREAD ***)(v1 + 424);
        if ( !v20 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v27, v20 + 13);
        RIMFreeSpecificDevWorker(v20, v1 + 88);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v27);
        ObfDereferenceObject(v20);
      }
    }
    else if ( v7 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v3, v4, v5);
      v13 = (_QWORD *)(v1 + 536);
      v14 = *(_QWORD **)(v1 + 536);
      while ( v14 != v13 )
      {
        v21 = v14;
        v14 = (_QWORD *)*v14;
        v22 = v21[9];
        if ( v22 )
          Win32FreePool(v22);
        rimFreePointerRawDataListWorker(v21[7]);
        v23 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v24 = (_QWORD *)v21[1], (_QWORD *)*v24 != v21) )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        Win32FreePool(v21);
      }
      if ( *(_QWORD *)(v1 + 424) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v3, v4, v5);
      if ( (_QWORD *)*v13 != v13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v3, v4, v5);
      if ( *(_QWORD *)(v1 + 552) != v1 + 552 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v3, v4, v5);
      if ( *(_QWORD *)(v1 + 416) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v3, v4, v5);
      RIMLockExclusive(v1 + 568);
      rimFreeAllUserMem(v1, v15);
      *(_QWORD *)(v1 + 576) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 568, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(v1 + 872) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18, v19);
      if ( *(_DWORD *)(v1 + 880) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18, v19);
      Win32FreePool(*(_QWORD *)(v1 + 872));
      *(_QWORD *)(v1 + 872) = 0LL;
    }
    else
    {
      if ( v7 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v3, v4, v5);
      rimRemoveFromObTrackList(v1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v25,
          23,
          10,
          (__int64)&WPP_f25a4ae4fc2a30e660934be3cfee1070_Traceguids,
          v1);
      }
      v26 = *(void **)(v1 + 80);
      if ( v26 != (void *)-1LL )
      {
        ZwClose(v26);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
