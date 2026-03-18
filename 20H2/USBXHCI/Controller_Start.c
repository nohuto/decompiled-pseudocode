/*
 * XREFs of Controller_Start @ 0x1C0011474
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00147B0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_InternalReset @ 0x1C0032FD8 (Controller_InternalReset.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     Controller_IsControllerAccessible @ 0x1C0007380 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_I @ 0x1C00140DC (WPP_RECORDER_SF_I.c)
 *     Register_GetExtendedTBCTRBStatusSupported @ 0x1C001415C (Register_GetExtendedTBCTRBStatusSupported.c)
 *     Register_GetExtendedTBCEnable @ 0x1C001417C (Register_GetExtendedTBCEnable.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0031F7C (Controller_DetectFrameMicroframeBoundary.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_Start(__int64 a1, char a2, int a3, int a4)
{
  unsigned int v4; // edi
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r13
  int Ulong; // eax
  char ExtendedTBCEnable; // al
  char v12; // r8
  int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  ULONGLONG v18; // rbp
  int v19; // r14d
  int v20; // edx
  char v21; // bl
  int v22; // r8d
  int v23; // r9d
  unsigned __int64 v24; // rdx
  int v25; // edx
  int v26; // ebp
  int v27; // r8d
  int v28; // r9d
  int v30; // r14d
  ULONGLONG v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // eax
  int Timeout; // [rsp+20h] [rbp-68h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+90h] [rbp+8h]

  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( *(_BYTE *)(a1 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v6 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 116, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
  if ( Controller_IsControllerAccessible(a1) )
  {
    v7 = *(_QWORD *)(a1 + 88);
    v8 = *(_QWORD *)(v7 + 32);
    v9 = v8 + 4;
    if ( (XilRegister_ReadUlong(v7, v8 + 4) & 1) != 0 )
    {
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL, 2LL);
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v8);
      ExtendedTBCEnable = Register_GetExtendedTBCEnable(
                            *(_QWORD *)(a1 + 88),
                            Ulong | 5u,
                            *(unsigned int *)(*(_QWORD *)(a1 + 88) + 104LL));
      *(_BYTE *)(a1 + 554) = ExtendedTBCEnable;
      v14 = v13 & 0xFFFF9FFF | ((v12 & 2 | (4 * (ExtendedTBCEnable & 1))) << 12);
      *(_BYTE *)(a1 + 555) = Register_GetExtendedTBCTRBStatusSupported();
      if ( !(unsigned __int8)Register_GetExtendedTBCTRBStatusSupported()
        || (v16 = 0x8000, (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v15 + 8) + 336LL), 8).m128i_u16[0] & 0x1000) != 0) )
      {
        v16 = 0;
      }
      v17 = v16 | v14 & 0xFFFF7FFF;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 118, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v18 = 0LL;
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v8, v17);
      v19 = 0;
      while ( 1 )
      {
        KeStallExecutionProcessor(0x64u);
        v21 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v9);
        if ( (v21 & 1) == 0 )
          break;
        if ( (unsigned int)++v19 >= 0x32 )
          goto LABEL_13;
      }
      v18 = KeQueryUnbiasedInterruptTime();
LABEL_13:
      if ( (v21 & 1) != 0 )
      {
        v6 = ExAllocateTimer(&Controller_HighResTimerCompletion, &Event, 4LL);
        if ( !v6 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v30 = 0;
        while ( 1 )
        {
          ExSetTimer(v6, -50000LL, 0LL, 0LL);
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v21 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v9);
          if ( (v21 & 1) == 0 )
            break;
          if ( (unsigned int)++v30 >= 7 )
            goto LABEL_14;
        }
        v18 = KeQueryUnbiasedInterruptTime();
      }
LABEL_14:
      if ( (v21 & 1) != 0 )
      {
        v31 = KeQueryUnbiasedInterruptTime();
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = (v31 - UnbiasedInterruptTime) / 0x2710;
          LOBYTE(v32) = 2;
          WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v32, v22, 119, Timeout, (v31 - UnbiasedInterruptTime) / 0x2710);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = (v18 - UnbiasedInterruptTime) / 0xA;
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v24, v22, 120, Timeout, (v18 - UnbiasedInterruptTime) / 0xA);
      }
      DynamicLock_Acquire(*(_QWORD *)(a1 + 616), v20, v22, v23);
      ++*(_DWORD *)(a1 + 624);
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 112))(
              WdfDriverGlobals,
              *(_QWORD *)(a1 + 632));
      if ( v26 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
          WdfDriverGlobals,
          **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
          Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
          a1 + 608);
        v33 = *(_QWORD *)(a1 + 88);
        v34 = *(_QWORD *)(v33 + 32);
        v35 = XilRegister_ReadUlong(v33, v34);
        XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v34, v35 | 0x400u);
        *(_BYTE *)(a1 + 608) = 1;
      }
      DynamicLock_Release(*(_QWORD *)(a1 + 616), v25, v27, v28);
      if ( v26 )
        Controller_DetectFrameMicroframeBoundary(a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 360),
        -50000000LL);
      if ( v6 )
        ExDeleteTimer(v6, 0LL, 0LL, 0LL);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, 117, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
      return (unsigned int)-1073741630;
    }
  }
  return v4;
}
