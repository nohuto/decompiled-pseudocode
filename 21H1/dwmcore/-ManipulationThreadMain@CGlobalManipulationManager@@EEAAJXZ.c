/*
 * XREFs of ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800AE400
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800AF1DC (-SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ @ 0x1800AFE10 (-UpdateMMCSSTask@CGlobalManipulationManager@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     IsRegisterManipulationThreadPresent @ 0x1800E29DC (IsRegisterManipulationThreadPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalManipulationManager::ManipulationThreadMain(
        CGlobalManipulationManager *this,
        __int64 a2,
        __int64 a3)
{
  struct IMessageSession **v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct IMessageSession *v12; // rcx
  signed int LastError; // eax
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_THREAD_STARTUP,
      a3,
      1u,
      &v15);
  v4 = (struct IMessageSession **)((char *)this + 24);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = CoreUICreateEx(1LL, (char *)this + 24);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
  EnterCriticalSection(&stru_18034D538);
  byte_18034D534 = 0;
  LeaveCriticalSection(&stru_18034D538);
  EnterCriticalSection(&stru_18034D4F8);
  byte_18034D4F4 = 0;
  LeaveCriticalSection(&stru_18034D4F8);
  if ( (unsigned __int8)IsRegisterManipulationThreadPresent() )
  {
    if ( !(unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback, this) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
    }
    CGlobalManipulationManager::UpdateMMCSSTask(this);
    v8 = CManipulationManager::SetupMessageCallThreadInfo(
           this,
           *v4,
           (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
           (CGlobalManipulationManager *)((char *)this + 32));
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    v9 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 256LL))(
           *v4,
           qword_1803494C0,
           lambda_19664e0b56b7920f045ba8c67b2f55c3_::_lambda_invoker_cdecl_,
           this);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    v10 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 256LL))(
            *v4,
            CManipulationManager::s_rghWaitEvents,
            lambda_efd5facd022cf831717386964e02a8d7_::_lambda_invoker_cdecl_,
            this);
    if ( v10 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
    v11 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CGlobalManipulationManager *))(*(_QWORD *)*v4 + 256LL))(
            *v4,
            hEvent,
            lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_,
            this);
    if ( v11 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
    SetEvent(CManipulationManager::s_hManipThreadInitializedWaitEvent);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v4 + 216LL))(*v4);
    v12 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  CManipulationManager::s_dwManipulationThreadId = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &MANIPULATION_THREAD_CLEANUP,
      v7,
      1u,
      &v15);
  return 0LL;
}
