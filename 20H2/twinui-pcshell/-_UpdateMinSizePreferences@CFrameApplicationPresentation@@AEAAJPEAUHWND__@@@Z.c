/*
 * XREFs of ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x1800290D0
 * Callers:
 *     _lambda_ed95610872b18a867010d7fca41407e7_::operator() @ 0x180028CC8 (_lambda_ed95610872b18a867010d7fca41407e7_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c487b8ddfbb456201be9b3312a7435d___::Run @ 0x18007F000 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c487b8ddfbb456201be9b3312a7435d___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_UpdateMinSizePreferences(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  HWND *v4; // rax
  unsigned int PropW; // ebx
  unsigned int v6; // eax
  bool v7; // zf
  unsigned int *v8; // rax
  int v9; // eax
  int v10; // eax
  void *v11; // rcx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+44h] [rbp+1Ch]

  if ( *((_DWORD *)this + 14) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D1,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v13);
    return 2147947423LL;
  }
  else
  {
    v4 = (HWND *)*((_QWORD *)this + 14);
    if ( a2 && (a2 == *v4 || !*v4) )
    {
      PropW = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.X");
      v6 = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.Y");
      v16 = PropW;
      v17 = v6;
      if ( !PropW || (v7 = v6 == 0, v8 = &v16, v7) )
        v8 = (unsigned int *)((char *)this + 160);
      *((_QWORD *)this + 19) = *(_QWORD *)v8;
      v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 15) + 80LL))(
             *((_QWORD *)this + 15),
             (char *)this + 152);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7DD,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v9,
          v13);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 224LL))(this);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      ppvOut = 0LL;
      if ( IUnknown_QueryService(
             (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &ppvOut) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 64LL))(
                ppvOut,
                *((_QWORD *)this + 75),
                *((_QWORD *)this + 19));
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7EA,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v10,
            v13);
      }
      v11 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    return 0LL;
  }
}
