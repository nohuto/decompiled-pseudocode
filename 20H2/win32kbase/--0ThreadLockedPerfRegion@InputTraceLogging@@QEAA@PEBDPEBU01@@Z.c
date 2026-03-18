/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003385C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ApiSetClientCallDitThread @ 0x1C0034BFC (ApiSetClientCallDitThread.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0034EB8 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00359EC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0036394 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C00AF1DC (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     NtMITSynthesizeMouseInput @ 0x1C012E8E0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C012EA90 (NtMITSynthesizeTouchInput.c)
 *     NtUserDownlevelTouchpad @ 0x1C01305C0 (NtUserDownlevelTouchpad.c)
 *     NtUserInjectDeviceInput @ 0x1C0132F70 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01333A0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0133BB0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0133FD0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01343F0 (NtUserInjectPointerInput.c)
 *     rimInputApc @ 0x1C01739B0 (rimInputApc.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017863C (rimDoProcessAnyPointerDeviceInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0195684 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019627C (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C019EC30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A1B84 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BB53C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01BC58C (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     Win32AllocateFromPagedLookasideList @ 0x1C003C550 (Win32AllocateFromPagedLookasideList.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012AD48 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3,
        __int64 a4)
{
  __int64 *v8; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( dword_1C0244A70 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 1LL, a3, a4) )
    {
      if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
      {
        v8 = (__int64 *)Win32AllocateFromPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
        *this = v8;
        if ( v8 )
        {
          *v8 = (__int64)a2;
          (*this)[5] = 0LL;
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
          if ( CurrentThreadWin32Thread )
            _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
          if ( a3 && *(_QWORD *)a3 )
          {
            *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
            (*this)[5] = (__int64)(*this + 3);
          }
          EtwActivityIdControl(3u, (LPGUID)(*this + 1));
          if ( (unsigned int)dword_1C0244A70 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 1LL, v10, v11) )
          {
            v12 = **this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (int)&dword_1C0244A70,
              (__int64)&v12);
          }
          if ( qword_1C024FEC0 )
            qword_1C024FEC0(this, *this + 6, _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_);
        }
      }
    }
  }
  return this;
}
