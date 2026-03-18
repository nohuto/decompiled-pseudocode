/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C005CEEC
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C005E598 (RIMObjectManagerCallout.c)
 * Callees:
 *     RIMFreeSpecificDevWorker @ 0x1C0059C4C (RIMFreeSpecificDevWorker.c)
 *     rimRemoveFromObTrackList @ 0x1C005CBD4 (rimRemoveFromObTrackList.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     rimFreeAllUserMem @ 0x1C00A3500 (rimFreeAllUserMem.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00A3C0C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00A413C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     rimFreePointerRawDataListWorker @ 0x1C0179F90 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C01852C4 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C0185964 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C0185D78 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 ObjectType; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // edx
  void *v16; // rcx
  char v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  ObjectType = ObGetObjectType(*a1);
  v3 = ExRawInputManagerObjectType;
  if ( ObjectType != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType);
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v4 = *(_DWORD *)(v1 + 4);
    if ( v4 == 2 )
    {
      rimRemoveFromObTrackList(v1);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v10 = *(_QWORD *)(v1 + 424);
        if ( !v10 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v17,
          (struct RIMLOCK *)(v10 + 104));
        RIMFreeSpecificDevWorker(v10, v1 + 88);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v17);
        ObfDereferenceObject((PVOID)v10);
      }
    }
    else if ( v4 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
      v7 = (_QWORD *)(v1 + 536);
      v8 = *(_QWORD **)(v1 + 536);
      while ( v8 != v7 )
      {
        v11 = v8;
        v8 = (_QWORD *)*v8;
        v12 = v11[9];
        if ( v12 )
          Win32FreePool(v12);
        rimFreePointerRawDataListWorker(v11[7]);
        v13 = *v11;
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v14 = (_QWORD *)v11[1], (_QWORD *)*v14 != v11) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        Win32FreePool(v11);
      }
      if ( *(_QWORD *)(v1 + 424) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
      if ( (_QWORD *)*v7 != v7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
      if ( *(_QWORD *)(v1 + 552) != v1 + 552 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
      if ( *(_QWORD *)(v1 + 416) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
      RIMLockExclusive(v1 + 568);
      rimFreeAllUserMem(v1);
      *(_QWORD *)(v1 + 576) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 568, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(v1 + 872) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      if ( *(_DWORD *)(v1 + 880) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      Win32FreePool(*(_QWORD *)(v1 + 872));
      *(_QWORD *)(v1 + 872) = 0LL;
    }
    else
    {
      if ( v4 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
      rimRemoveFromObTrackList(v1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v15,
          23,
          10,
          (__int64)&WPP_f25a4ae4fc2a30e660934be3cfee1070_Traceguids,
          v1);
      }
      v16 = *(void **)(v1 + 80);
      if ( v16 != (void *)-1LL )
      {
        ZwClose(v16);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
