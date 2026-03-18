/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C00657A4
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C00667B8 (RIMObjectManagerCallout.c)
 * Callees:
 *     RIMFreeSpecificDevWorker @ 0x1C0063E6C (RIMFreeSpecificDevWorker.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0064258 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006429C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     rimFreeAllUserMem @ 0x1C00650FC (rimFreeAllUserMem.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     rimRemoveFromObTrackList @ 0x1C00A9D00 (rimRemoveFromObTrackList.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     rimFreePointerRawDataListWorker @ 0x1C0173C60 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C017F5C4 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C017FC64 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C0180078 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  int v27; // edx
  void *v28; // rcx
  char v29; // [rsp+40h] [rbp+8h] BYREF

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
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v29, v20 + 13);
        RIMFreeSpecificDevWorker((__int64)v20, v1 + 88, v21, v22);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v29);
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
        v23 = v14;
        v14 = (_QWORD *)*v14;
        v24 = v23[9];
        if ( v24 )
          Win32FreePool(v24);
        rimFreePointerRawDataListWorker(v23[7]);
        v25 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 || (v26 = (_QWORD *)v23[1], (_QWORD *)*v26 != v23) )
          __fastfail(3u);
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        Win32FreePool(v23);
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
        LOBYTE(v27) = 4;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v27,
          23,
          10,
          (__int64)&WPP_f25a4ae4fc2a30e660934be3cfee1070_Traceguids,
          v1);
      }
      v28 = *(void **)(v1 + 80);
      if ( v28 != (void *)-1LL )
      {
        ZwClose(v28);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
