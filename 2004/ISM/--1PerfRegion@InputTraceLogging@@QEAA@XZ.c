/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029D80
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
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$0 @ 0x180048B58 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$0.c)
 *     _KernelInputConnection__MIT_INPUT_CONFIG_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18004DBBF (_KernelInputConnection__MIT_INPUT_CONFIG_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$0 @ 0x18004FAD0 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$5 @ 0x18004FB10 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$5.c)
 *     _std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800503CA (_std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFIC.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x18008EB90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@.c)
 *     _KernelInputConnection__MIT_HOTKEY_REGISTRATION_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18008EC37 (_KernelInputConnection__MIT_HOTKEY_REGISTRATION_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B19F8 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$0 @ 0x1800B1AAA (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$1 @ 0x1800B1AB6 (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$1.c)
 *     std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800B2D40 (std--_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOA_ea_1800B2D40.c)
 *     _std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800B2DA7 (_std--_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER.c)
 *     std::_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800B2E10 (std--_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_ea_1800B2E10.c)
 *     _std::_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800B2E6C (_std--_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATIO.c)
 *     std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800B2F00 (std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOA_ea_1800B2F00.c)
 *     _std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800B2F67 (_std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MES.c)
 *     std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800B2FE0 (std--_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE__ea_1800B2FE0.c)
 *     _std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800B3047 (_std--_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAG.c)
 *     std::_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800B30D0 (std--_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESS_ea_1800B30D0.c)
 *     _std::_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call_::_1_::dtor$0 @ 0x1800B3137 (_std--_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESSIBILITY_TIME.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800B40E0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$0 @ 0x1800B4185 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$1 @ 0x1800B4191 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$1.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z @ 0x1800B41B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_ACCESSIBILITY_TIMER_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800B4257 (_KernelInputConnection__MIT_ACCESSIBILITY_TIMER_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B4270 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_MOUSE_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800B431A (_KernelInputConnection__MIT_MOUSE_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B4330 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_KEYBOARD_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800B43DA (_KernelInputConnection__MIT_KEYBOARD_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B43F0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CA.c)
 *     _KernelInputConnection__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800B449A (_KernelInputConnection__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_-.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0H@Z @ 0x1800F51B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0.c)
 *     _KernelInputConnection__MIT_BASE_INPUT_OBSERVER_PACKET_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800F5257 (_KernelInputConnection__MIT_BASE_INPUT_OBSERVER_PACKET_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180102E10 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_PEN_EVENT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x180102EB7 (_KernelInputConnection__MIT_PEN_EVENT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x1801037B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection_tagQMSGINPUTREPORT_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x180103857 (_KernelInputConnection_tagQMSGINPUTREPORT_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0H@Z @ 0x180139CC0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0.c)
 *     _KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x180139D67 (_KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x1801493D4 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$0 @ 0x180149762 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$7 @ 0x18014979E (_ContextualProcessorManager--OnHitTest_--_1_--dtor$7.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B2A0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$0 @ 0x18014B803 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$0.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018FE0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180034FB8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  LPVOID v2; // rax
  int v3; // r10d
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)this,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v2 + 1) > 6u && tlgKeywordOn(*((_QWORD *)v2 + 1), 1LL) )
  {
    v4 = *(_QWORD *)this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v3,
      (__int64)&v4);
  }
}
