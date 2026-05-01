/*
 * XREFs of ?SetBand@CFrameApplicationPresentation@@UEAAJW4ZBID@@@Z @ 0x180083460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBand(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  HWND ForegroundWindow; // rax
  HWND v7; // rbp
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == *(_DWORD *)(a1 + 216) )
    return 0LL;
  v5 = 0LL;
  *(_DWORD *)(a1 + 216) = a2;
  if ( a2 == 1 )
  {
    v5 = -2LL;
    ForegroundWindow = GetForegroundWindow();
    v7 = ForegroundWindow;
    if ( ForegroundWindow )
    {
      if ( *(HWND *)(a1 + 128) != ForegroundWindow && (GetWindowLongPtrW(ForegroundWindow, -20) & 8) == 0 )
        v5 = (__int64)v7;
    }
  }
  result = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                                     + 32LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             *(_QWORD *)(a1 + 128),
             v5,
             a2);
  if ( (int)result >= 0 )
  {
    if ( a2 == 1
      && ((v5 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0
      && (v8 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                                 + 48LL))(
                 CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
                 *(_QWORD *)(a1 + 128),
                 v5),
          v8 < 0) )
    {
      v9 = 1715LL;
    }
    else
    {
      v10 = **(_QWORD **)(a1 + 104);
      if ( !v10 )
        return 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, a2);
      if ( v8 >= 0 )
        return 0LL;
      v9 = 1724LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  return result;
}
