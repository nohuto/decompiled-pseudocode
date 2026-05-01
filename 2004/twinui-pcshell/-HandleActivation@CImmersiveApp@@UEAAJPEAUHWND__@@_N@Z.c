/*
 * XREFs of ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180023B40
 * Callers:
 *     <none>
 * Callees:
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023DC0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180023E40 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800242D4 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18002436C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180024678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800278E8 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180061C50 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x18017FA54 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 */

__int64 __fastcall CImmersiveApp::HandleActivation(CImmersiveApp *this, HWND a2)
{
  bool v3; // bp
  __int64 v4; // rcx
  int v6; // esi
  int v7; // r14d
  bool v8; // r8
  int v9; // ecx
  bool v10; // dl
  int v12; // [rsp+20h] [rbp-28h] BYREF
  HWND v13; // [rsp+28h] [rbp-20h]
  bool v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 42);
  v14 = 0;
  v6 = 0;
  v7 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4) )
  {
    v6 = CImmersiveApp::CImmersiveWindowCollection::ProcessActivation(
           (CImmersiveApp *)((char *)this + 184),
           a2,
           v8,
           &v14);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v3 = v14;
  }
  v9 = *((_DWORD *)this + 118);
  if ( (v9 & 2) == 0 )
  {
    *((_DWORD *)this + 118) = v9 | 2;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 580));
    v7 = 2;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 56LL))(*((_QWORD *)this + 42)) )
  {
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((char *)this + 184, 1LL);
    if ( (*((_BYTE *)this + 396) & 2) == 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((char *)this + 184);
      if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp *)((char *)this + 184)) )
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp *)((char *)this + 184), v10);
    }
    *((_BYTE *)this + 696) = 1;
    *((_DWORD *)this + 175) = 1;
  }
  if ( !v3 && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 56LL))(*((_QWORD *)this + 42)) )
    CImmersiveApp::_SetApplicationForegroundPriority((char *)this - 112, 0LL);
  if ( v3 )
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp *)((char *)this + 184));
  if ( v7 )
  {
    v12 = v7;
    v13 = a2;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)((char *)this - 112),
      (const struct APP_CHANGE_INFO *const)&v12,
      1uLL);
  }
  return (unsigned int)v6;
}
