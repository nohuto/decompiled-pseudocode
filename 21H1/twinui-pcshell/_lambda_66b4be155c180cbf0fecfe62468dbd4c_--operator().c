/*
 * XREFs of _lambda_66b4be155c180cbf0fecfe62468dbd4c_::operator() @ 0x18005CAE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_66b4be155c180cbf0fecfe62468dbd4c___::Run @ 0x18005CAC0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_66b4be155c180cbf0fecfe62468dbd4c___--.c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18005CDBC (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x18005DAAC (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1802ACF28 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_66b4be155c180cbf0fecfe62468dbd4c_::operator()(_QWORD *a1)
{
  __int64 v2; // rax
  __int16 v3; // cx
  __int64 v4; // rsi
  const union _RM_ACTIVITY_IMPORTANCE *v5; // r13
  int v6; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  _DWORD *v11; // rcx
  ViewManagerInteropTraceLogging *v12; // rcx
  _DWORD *v13; // rcx
  HWND *v14; // rsi
  DWORD WindowThreadProcessId; // eax
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  WINBOOL fPending; // [rsp+60h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+70h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 288LL) + 200LL))(*(_QWORD *)(*a1 + 288LL), &SRWLock);
  if ( *(_QWORD *)(*a1 + 144LL) != *(_QWORD *)a1[1] )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1805A02A8;
      qword_1805A02A8 = &IamTraceLogging::`vftable';
      atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_1805A02A8);
      InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_1805A02A8);
    }
    v13 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v13 && *v13 )
    {
      fPending = 0;
      v14 = (HWND *)a1[1];
      if ( *v14 )
      {
        WindowThreadProcessId = GetWindowThreadProcessId(*v14, (LPDWORD)&fPending);
        v14 = (HWND *)a1[1];
      }
      else
      {
        WindowThreadProcessId = 0;
      }
      LODWORD(Context) = WindowThreadProcessId;
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a1 + 16LL) + 288LL))(*a1 + 16LL);
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        &v20,
        v14,
        &Context,
        &fPending);
    }
  }
  *(_QWORD *)(*a1 + 144LL) = *(_QWORD *)a1[1];
  v2 = *a1;
  if ( (*(_BYTE *)a1[2] & 1) != 0 || !*(_QWORD *)(v2 + 144) )
    v3 = 0;
  else
    v3 = 128;
  *(_WORD *)(v2 + 260) &= ~0x80u;
  *(_WORD *)(v2 + 260) |= v3;
  v4 = *a1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 288LL) + 216LL))(*(_QWORD *)(*a1 + 288LL));
  if ( !*(_BYTE *)(v4 + 580) )
  {
    v5 = (const union _RM_ACTIVITY_IMPORTANCE *)(v4 + 260);
    if ( *(_DWORD *)(v4 + 264) != *(_DWORD *)(v4 + 260) )
    {
      v8 = *(_QWORD *)(v4 + 104);
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC0A,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v9,
            v16);
        *(_DWORD *)(v4 + 264) = *(_DWORD *)v5;
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 288LL))(v4 + 16);
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = &qword_1805A02A8;
          qword_1805A02A8 = &IamTraceLogging::`vftable';
          atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
          ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_1805A02A8);
          InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_1805A02A8);
        }
        v11 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v11 && *v11 )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(
                 &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context)
            && fPending )
          {
            Context = &qword_1805A02A8;
            qword_1805A02A8 = &IamTraceLogging::`vftable';
            atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
            ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_1805A02A8);
            InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_1805A02A8);
          }
          ViewManagerInteropTraceLogging::CommitImportanceVector_(v12, v10, v5);
        }
      }
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 288LL) + 248LL))(
         *(_QWORD *)(*a1 + 288LL),
         (*a1 + 16LL) & -(__int64)(*a1 != 0LL));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA46,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v16);
    JUMPOUT(0x180102C0FLL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
