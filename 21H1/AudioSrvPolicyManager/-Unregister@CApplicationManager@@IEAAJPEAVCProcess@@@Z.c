/*
 * XREFs of ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020FBC
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18000BDF0 (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180020AEC (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800241A8 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     wil::details::lambda_call__lambda_5f49d5e02d11af6811cb389ab1b22b61___::_lambda_call__lambda_5f49d5e02d11af6811cb389ab1b22b61___ @ 0x180026A20 (wil--details--lambda_call__lambda_5f49d5e02d11af6811cb389ab1b22b61___--_lambda_call__lambda_5f49.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180028D60 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmUnregisterAppClosureNotification @ 0x180029460 (PbmUnregisterAppClosureNotification.c)
 * Callees:
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180015EEC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18001AED4 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800233A4 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Unregister(CApplicationManager *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CApplication *v5; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 && (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v5 = (CApplication *)*((_QWORD *)a2 + 32);
    if ( v5 )
      CApplication::DelinkProcess(v5, a2);
    CApplicationManager::RemoveProcess(this, a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
