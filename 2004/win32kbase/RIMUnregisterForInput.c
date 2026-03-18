/*
 * XREFs of RIMUnregisterForInput @ 0x1C00AB430
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C004C4C0 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C00AA734 (RIMUnregisterCurrentProcessForInput.c)
 *     NtRIMUnregisterForInput @ 0x1C01573C0 (NtRIMUnregisterForInput.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C0015F38 (RIMFreeSpecificDev.c)
 *     RIMCloseDev @ 0x1C00168C8 (RIMCloseDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0056604 (rimResetPnpRemovePendingStateBits.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C005F37C (rimFreeAutoRepeatCompleteFrame.c)
 *     rimFreeAllUserMem @ 0x1C00650FC (rimFreeAllUserMem.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     rimRemoveFromObTrackList @ 0x1C00A9D00 (rimRemoveFromObTrackList.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00AABB0 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00AB898 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00ABE00 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(char *a1)
{
  int v2; // edx
  int v3; // r13d
  char *v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 *v7; // rsi
  _DWORD *v8; // r12
  __int64 v9; // rdx
  __int64 **v10; // rsi
  __int64 *v11; // rcx
  int v12; // r15d
  _OWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int *v23; // r15
  unsigned int v24; // eax
  void *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v29; // rcx
  __int64 v30; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 96, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
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
      v18 = v5;
      rimFreeAutoRepeatCompleteFrame(v5);
      v23 = (unsigned int *)(v5 + 184);
      v24 = *(_DWORD *)(v5 + 184);
      if ( (v24 & 0x10) != 0 )
      {
        if ( (v24 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
          v24 = *v23;
        }
        *v23 = v24 & 0xFFFFFFEF;
        v29 = *(struct _KTHREAD **)(v5 + 312);
        if ( !v29 || (v4 = (char *)Object, v29 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v19, v21, v22);
        KeSetEvent(*(PRKEVENT *)(v5 + 352), 1, 0);
      }
      v25 = *(void **)(v5 + 248);
      if ( (*v23 & 0x20) != 0 )
      {
        if ( v25 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v19, v21, v22);
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
        rimResetPnpRemovePendingStateBits(v18);
        RIMFreeSpecificDev((__int64)v4, v18, v27, v28);
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
        Win32FreePool(*v7);
        *v7 = 0LL;
      }
      ++v6;
      ++v8;
      ++v7;
    }
    while ( v6 <= 2 );
    v10 = (__int64 **)(v4 + 552);
    do
    {
      v11 = *v10;
      if ( *v10 == (__int64 *)v10 )
      {
        v12 = 0;
      }
      else
      {
        v12 = 1;
        v30 = *v11;
        if ( (__int64 **)v11[1] != v10 || *(__int64 **)(v30 + 8) != v11 )
          __fastfail(3u);
        *v10 = (__int64 *)v30;
        *(_QWORD *)(v30 + 8) = v10;
        Win32FreePool((__int64)(v11 - 1));
      }
    }
    while ( v12 );
    rimFreeAllUserMem((__int64)v4, v9);
    if ( v4[584] && *((_QWORD *)v4 + 81) )
    {
      if ( *((_DWORD *)v4 + 164) )
      {
        v13 = (_OWORD *)*((_QWORD *)v4 + 85);
        if ( (unsigned __int64)v13 >= MmUserProbeAddress )
          v13 = (_OWORD *)MmUserProbeAddress;
        *v13 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v4 + 85) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v4 + 81), 0LL);
      ZwClose(*((HANDLE *)v4 + 81));
    }
    v14 = *((_QWORD *)v4 + 52);
    if ( v14 )
    {
      Win32FreePool(v14);
      *((_QWORD *)v4 + 52) = 0LL;
    }
    v15 = *((_QWORD *)v4 + 12);
    if ( v15 )
    {
      Win32FreePool(v15);
      *((_QWORD *)v4 + 12) = 0LL;
      *((_DWORD *)v4 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v4 + 42), 0LL);
    ZwClose(*((HANDLE *)v4 + 42));
    *((_QWORD *)v4 + 42) = -1LL;
    v16 = (void *)*((_QWORD *)v4 + 43);
    if ( v16 != (void *)-1LL )
    {
      ZwCancelTimer(v16, 0LL);
      ZwClose(*((HANDLE *)v4 + 43));
      *((_QWORD *)v4 + 43) = -1LL;
    }
    ZwClose(*((HANDLE *)v4 + 48));
    *((_QWORD *)v4 + 48) = -1LL;
    v4[81] = 1;
    v4[10] = 1;
    rimRemoveFromObTrackList((__int64)v4);
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v4);
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
