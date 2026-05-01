/*
 * XREFs of ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1802CFC38
 * Callers:
 *     ?EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ @ 0x1802CE380 (-EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ.c)
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802D0768 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802D2510 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18004E2BC (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801588A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall ViewWrapperBase::PushDesiredPositionToWindow(__int64 a1, char a2)
{
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // esi
  unsigned int cy; // ebp
  UINT uFlags; // eax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 272) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1) )
      a2 &= ~2u;
    v4 = *(_DWORD *)(a1 + 200);
    v5 = *(_DWORD *)(a1 + 204);
    v6 = *(_DWORD *)(a1 + 208) - v4;
    cy = *(_DWORD *)(a1 + 212) - v5;
    uFlags = (2 * ((a2 & 1) == 0) + 82964) | 1;
    if ( (a2 & 2) != 0 )
      uFlags = 2 * ((a2 & 1) == 0) + 82964;
    if ( SetWindowPos(*(HWND *)(a1 + 272), 0LL, v4, v5, v6, cy, uFlags) )
      WindowReadyState::PosChanged((WindowReadyState *)(a1 + 360), v6, cy);
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x987,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        v9);
  }
}
