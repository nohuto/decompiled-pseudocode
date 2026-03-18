/*
 * XREFs of Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0001D00 (Isoch_MapTransfers.c)
 *     TR_AttemptStateChange @ 0x1C0001E00 (TR_AttemptStateChange.c)
 *     Isoch_RetrieveNextStage @ 0x1C0002D30 (Isoch_RetrieveNextStage.c)
 *     Isoch_MapStage @ 0x1C0003780 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C00038C0 (Isoch_PrepareStage.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rbx
  char v5; // bp
  __int64 v6; // rdi
  KIRQL v7; // si
  ULONG CurrentProcessorNumber; // eax
  __int64 v9; // rcx
  char i; // si
  char j; // di
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  KIRQL v20; // cl
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  ULONG_PTR v32; // rax
  ULONG_PTR v33; // rax
  char CurrentIrql; // al
  int v35; // edx
  int v36; // r8d
  int v37; // r9d
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  int BugCheckParameter4a; // [rsp+20h] [rbp-48h]
  int BugCheckParameter4b; // [rsp+20h] [rbp-48h]
  int BugCheckParameter4c; // [rsp+20h] [rbp-48h]

  v4 = a2;
  v5 = 0;
  if ( KeGetCurrentIrql() != 2 )
  {
    v6 = *(_QWORD *)(a2 + 40);
    if ( KeGetCurrentIrql() == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), a2, 4, 306, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            v22,
            v23,
            BugCheckParameter4a,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
            123,
            (__int64)"Not expected to be called at DISPATCH_LEVEL.");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError(v6, 0, 4134, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      v5 = 1;
      v7 = KfRaiseIrql(2u);
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      if ( CurrentProcessorNumber >= *(_DWORD *)(v6 + 816) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v6 + 72),
            a2,
            4,
            307,
            (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
            CurrentProcessorNumber);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(
              WPP_GLOBAL_Control->DeviceExtension,
              v24,
              v25,
              v26,
              BugCheckParameter4b,
              (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
              151,
              (__int64)"Processor index out of range.");
        }
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
        Controller_ReportFatalError(v6, 0, 4135, 0, 0LL, 0LL, 0LL);
        KeLowerIrql(v7);
        v5 = 0;
      }
      else
      {
        v9 = 2LL * CurrentProcessorNumber;
        *(_BYTE *)(v9 + *(_QWORD *)(v6 + 808)) = 1;
        *(_BYTE *)(v9 + *(_QWORD *)(v6 + 808) + 1) = v7;
      }
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 56) + 1352LL) == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        a3,
        a4,
        BugCheckParameter4,
        (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
        67,
        (__int64)"IO Received on an endpoint that has been offloaded");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    goto LABEL_27;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 108), 3, 2) != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(v4 + 344), 1);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 108), 3, 2) == 2 )
      Isoch_MapTransfers(v4);
    goto LABEL_27;
  }
  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v27 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
      LOBYTE(v27) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        v27,
        14,
        67,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
        i);
    }
    for ( j = 0; ; ++j )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v28 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
        LOBYTE(v28) = 5;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          v28,
          14,
          66,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
          j);
      }
      *(_QWORD *)(v4 + 344) = 0LL;
      if ( !(unsigned __int8)Isoch_RetrieveNextStage(v4) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 108), 2, 3) == 3 )
          goto LABEL_25;
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 108), 0, 1) != 1 )
          goto LABEL_25;
        v29 = *(_QWORD *)(v4 + 56);
        if ( *(_BYTE *)(v29 + 37) )
        {
          v31 = *(_QWORD *)(v29 + 136);
          if ( _InterlockedIncrement((volatile signed __int32 *)(v31 + 20)) != *(_DWORD *)(v31 + 8) )
            goto LABEL_25;
        }
LABEL_61:
        ESM_AddEvent((PVOID)(v29 + 288));
        goto LABEL_25;
      }
      v12 = Isoch_PrepareStage(v4);
      if ( v12 == 1 )
        continue;
      if ( v12 == 3 )
        goto LABEL_25;
      v13 = v4;
      if ( v12 == 2 )
        goto LABEL_55;
      if ( v12 == 4 )
      {
        TR_AttemptStateChange(v4, 3, 2);
        goto LABEL_25;
      }
      v14 = Isoch_MapStage(v4);
      if ( v14 == 2 )
        goto LABEL_25;
      if ( v14 == 4 )
        break;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 108), 3, 3) != 3 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 108), 0, 1) != 1 )
          goto LABEL_25;
        v29 = *(_QWORD *)(v4 + 56);
        if ( *(_BYTE *)(v29 + 37) )
        {
          v30 = *(_QWORD *)(v29 + 136);
          if ( _InterlockedIncrement((volatile signed __int32 *)(v30 + 20)) != *(_DWORD *)(v30 + 8) )
            goto LABEL_25;
        }
        goto LABEL_61;
      }
    }
    v13 = v4;
LABEL_55:
    if ( (unsigned int)TR_AttemptStateChange(v13, 3, 4) == 3 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(v4 + 320),
        -100000000LL);
LABEL_25:
    v15 = *(_DWORD *)(v4 + 108);
    if ( v15 == 2 )
      break;
    if ( v15 != 4
      || !*(_DWORD *)(v4 + 348)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 108), 3, 4) != 4 )
    {
      goto LABEL_27;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v4 + 320),
      0LL);
LABEL_68:
    ;
  }
  if ( *(_DWORD *)(v4 + 344) && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 108), 3, 2) == 2 )
    goto LABEL_68;
LABEL_27:
  if ( v5 && KeGetCurrentIrql() == 2 )
  {
    v16 = *(_QWORD **)(v4 + 40);
    v17 = KeGetCurrentProcessorNumberEx(0LL);
    if ( KeGetCurrentIrql() == 2 )
    {
      if ( (unsigned int)v17 >= *((_DWORD *)v16 + 204) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v16[9], 2, 4, 308, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v17);
        v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                WdfDriverGlobals,
                *v16);
        KeBugCheckEx(0x144u, 4uLL, v32, 2uLL, 1uLL);
      }
      v18 = v16[101];
      v19 = 2 * v17;
      v20 = *(_BYTE *)(2 * v17 + v18 + 1);
      if ( !*(_BYTE *)(2 * v17 + v18) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v16[9], 2, 4, 309, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v17);
        v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                WdfDriverGlobals,
                *v16);
        KeBugCheckEx(0x144u, 4uLL, v33, 2uLL, 2uLL);
      }
      *(_BYTE *)(v19 + v18) = 0;
      *(_BYTE *)(v19 + v16[101] + 1) = -1;
      KeLowerIrql(v20);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentIrql = KeGetCurrentIrql();
        WPP_RECORDER_SF_d(v16[9], 2, 4, 310, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, CurrentIrql);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            WPP_GLOBAL_Control->DeviceExtension,
            v35,
            v36,
            v37,
            BugCheckParameter4c,
            (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
            241,
            (__int64)"Expected to be called at DISPATCH_LEVEL.");
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError((_DWORD)v16, 0, 4136, 0, 0LL, 0LL, 0LL);
    }
  }
}
