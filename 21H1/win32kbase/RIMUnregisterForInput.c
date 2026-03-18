/*
 * XREFs of RIMUnregisterForInput @ 0x1C00A0B60
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C003FA70 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C006AADC (RIMUnregisterCurrentProcessForInput.c)
 *     NtRIMUnregisterForInput @ 0x1C015D710 (NtRIMUnregisterForInput.c)
 * Callees:
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C005170C (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMFreeSpecificDev @ 0x1C0056CA8 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0056DD0 (rimResetPnpRemovePendingStateBits.c)
 *     RIMCloseDev @ 0x1C005A3DC (RIMCloseDev.c)
 *     rimRemoveFromObTrackList @ 0x1C005CBD4 (rimRemoveFromObTrackList.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C009F4EC (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00A1A1C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimFreeAllUserMem @ 0x1C00A3500 (rimFreeAllUserMem.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(__int64 a1)
{
  int v2; // edx
  int v3; // r13d
  char *v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 *v7; // rsi
  _DWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 **v11; // rsi
  __int64 *v12; // rcx
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  _OWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rcx
  __int64 v21; // r12
  __int64 v22; // rcx
  unsigned int *v23; // r15
  unsigned int v24; // eax
  void *v25; // rcx
  _QWORD *v26; // rax
  struct _KTHREAD *v27; // rcx
  __int64 v28; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 96, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = (char *)Object;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v2,
        1,
        97,
        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
        (char)Object);
    }
    RIMLockExclusive((__int64)(v4 + 104));
    RIMLockExclusive((__int64)(v4 + 568));
    v4[80] = 1;
    v5 = *((_QWORD *)v4 + 53);
    *((_QWORD *)v4 + 53) = 0LL;
    while ( v5 )
    {
      v21 = v5;
      rimFreeAutoRepeatCompleteFrame(v5);
      v23 = (unsigned int *)(v5 + 184);
      v24 = *(_DWORD *)(v5 + 184);
      if ( (v24 & 0x10) != 0 )
      {
        if ( (v24 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
          v24 = *v23;
        }
        *v23 = v24 & 0xFFFFFFEF;
        v27 = *(struct _KTHREAD **)(v5 + 312);
        if ( !v27 || (v4 = (char *)Object, v27 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
        KeSetEvent(*(PRKEVENT *)(v5 + 352), 1, 0);
      }
      v25 = *(void **)(v5 + 248);
      if ( (*v23 & 0x20) != 0 )
      {
        if ( v25 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      }
      else if ( v25 )
      {
        IoUnregisterPlugPlayNotification(v25);
        *(_QWORD *)(v5 + 248) = 0LL;
        ObfDereferenceObject(*(PVOID *)(v5 + 32));
      }
      RIMCloseDev(v5);
      v26 = (_QWORD *)(v5 + 40);
      v5 = *(_QWORD *)(v5 + 40);
      *v26 = 0LL;
      if ( (*v23 & 0x2000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v21);
        RIMFreeSpecificDev((__int64)v4, v21);
      }
    }
    v6 = 0;
    v7 = (__int64 *)(v4 + 312);
    v8 = v4 + 296;
    do
    {
      v3 = RIMUnRegisterForInputDeviceTypeClassNotifications(v4, v6);
      if ( !*v8 && *v7 )
      {
        Win32FreePool(*v7, v9, v10);
        *v7 = 0LL;
      }
      ++v6;
      ++v8;
      ++v7;
    }
    while ( v6 <= 2 );
    v11 = (__int64 **)(v4 + 552);
    do
    {
      v12 = *v11;
      if ( *v11 == (__int64 *)v11 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 1;
        v28 = *v12;
        if ( (__int64 **)v12[1] != v11 || *(__int64 **)(v28 + 8) != v12 )
          __fastfail(3u);
        *v11 = (__int64 *)v28;
        *(_QWORD *)(v28 + 8) = v11;
        Win32FreePool((__int64)(v12 - 1), v9, v10);
      }
    }
    while ( v13 );
    rimFreeAllUserMem(v4);
    if ( v4[584] && *((_QWORD *)v4 + 81) )
    {
      if ( *((_DWORD *)v4 + 164) )
      {
        v16 = (_OWORD *)*((_QWORD *)v4 + 85);
        if ( (unsigned __int64)v16 >= MmUserProbeAddress )
          v16 = (_OWORD *)MmUserProbeAddress;
        *v16 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v4 + 85) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v4 + 81), 0LL);
      ZwClose(*((HANDLE *)v4 + 81));
    }
    v17 = *((_QWORD *)v4 + 52);
    if ( v17 )
    {
      Win32FreePool(v17, v14, v15);
      *((_QWORD *)v4 + 52) = 0LL;
    }
    v18 = *((_QWORD *)v4 + 12);
    if ( v18 )
    {
      Win32FreePool(v18, v14, v15);
      *((_QWORD *)v4 + 12) = 0LL;
      *((_DWORD *)v4 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v4 + 42), 0LL);
    ZwClose(*((HANDLE *)v4 + 42));
    *((_QWORD *)v4 + 42) = -1LL;
    v19 = (void *)*((_QWORD *)v4 + 43);
    if ( v19 != (void *)-1LL )
    {
      ZwCancelTimer(v19, 0LL);
      ZwClose(*((HANDLE *)v4 + 43));
      *((_QWORD *)v4 + 43) = -1LL;
    }
    ZwClose(*((HANDLE *)v4 + 48));
    *((_QWORD *)v4 + 48) = -1LL;
    v4[81] = 1;
    v4[10] = 1;
    rimRemoveFromObTrackList((__int64)v4);
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v4);
    *((_QWORD *)v4 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v4 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v2, 1, 98, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v3);
  }
  return (unsigned int)v3;
}
