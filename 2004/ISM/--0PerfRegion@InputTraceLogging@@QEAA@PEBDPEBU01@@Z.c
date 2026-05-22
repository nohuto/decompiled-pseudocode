/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180040E78
 * Callers:
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX0H@Z @ 0x180010810 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800114A0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     std::_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_IDENTIFICATION_MESSAGE_const___::_Do_call @ 0x180029D30 (std--_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_ea_180029D30.c)
 *     std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180029DB0 (std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DE_ea_180029DB0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800383E0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@CAJPE.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800394B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x180039AF0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x1800487C4 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x18008EB90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B19F8 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800B2D40 (std--_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOA_ea_1800B2D40.c)
 *     std::_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800B2E10 (std--_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_ea_1800B2E10.c)
 *     std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800B2F00 (std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOA_ea_1800B2F00.c)
 *     std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800B2FE0 (std--_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE__ea_1800B2FE0.c)
 *     std::_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800B30D0 (std--_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESS_ea_1800B30D0.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800B40E0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z @ 0x1800B41B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B4270 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B4330 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B43F0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0H@Z @ 0x1800F51B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180102E10 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x1801037B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0H@Z @ 0x180139CC0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x1801493D4 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B2A0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180018FC0 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180034FB8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

InputTraceLogging::PerfRegion *__fastcall InputTraceLogging::PerfRegion::PerfRegion(
        InputTraceLogging::PerfRegion *this,
        const char *a2,
        const struct InputTraceLogging::PerfRegion *a3)
{
  GUID *v3; // rdi
  _OWORD *v4; // rax
  __int128 v6; // xmm0
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // r10d
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  v3 = (GUID *)((char *)this + 8);
  v4 = (_OWORD *)((char *)this + 24);
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( a3 )
  {
    v6 = *(_OWORD *)((char *)a3 + 8);
    *((_QWORD *)this + 5) = v4;
    *v4 = v6;
  }
  v7 = InputTraceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v7 )
  {
    if ( tlgKeywordOn((__int64)v7, 1LL) )
    {
      EventActivityIdControl(3u, v3);
      v9 = InputTraceLogging::Provider(v8);
      if ( *(_DWORD *)v9 > 6u && tlgKeywordOn((__int64)v9, 1LL) )
      {
        v11 = *((_QWORD *)this + 5);
        v13 = *(_QWORD *)this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v10,
          (int)&unk_1801C902C,
          (int)v3,
          v11,
          (const unsigned __int16 **)&v13);
      }
    }
  }
  return this;
}
