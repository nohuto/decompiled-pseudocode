/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C
 * Callers:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C004179C (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     rimInputApc @ 0x1C0049940 (rimInputApc.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C00639EC (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ApiSetClientCallDitThread @ 0x1C00645CC (ApiSetClientCallDitThread.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0064888 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0065004 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0065920 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0136C20 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0136DD0 (NtMITSynthesizeTouchInput.c)
 *     NtUserDownlevelTouchpad @ 0x1C0138900 (NtUserDownlevelTouchpad.c)
 *     NtUserInjectDeviceInput @ 0x1C013AF60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C013B390 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C013BBA0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C013BFC0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C013C3E0 (NtUserInjectPointerInput.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C019D8A4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019E49C (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A6D30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A9C64 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C360C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01C4680 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C0075F40 (Win32AllocateFromPagedLookasideList.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0133088 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3,
        __int64 a4)
{
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( dword_1C024C960 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 1LL, a3, a4) )
    {
      if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
      {
        v8 = (__int64 *)Win32AllocateFromPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
        *this = v8;
        if ( v8 )
        {
          *v8 = (__int64)a2;
          (*this)[5] = 0LL;
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9);
          if ( CurrentThreadWin32Thread )
            _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
          if ( a3 && *(_QWORD *)a3 )
          {
            *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
            (*this)[5] = (__int64)(*this + 3);
          }
          EtwActivityIdControl(3u, (LPGUID)(*this + 1));
          if ( (unsigned int)dword_1C024C960 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 1LL, v11, v12) )
          {
            v13 = **this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (int)&dword_1C024C960,
              (__int64)&v13);
          }
          if ( qword_1C0257E80 )
            qword_1C0257E80(this, *this + 6, _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_);
        }
      }
    }
  }
  return this;
}
