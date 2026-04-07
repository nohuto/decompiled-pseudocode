/*
 * XREFs of ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180029888
 * Callers:
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011390 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029020 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180029680 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180026EB0 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18002BB6C (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180038C08 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowCloakChange(
        CAnimationScheduler *this,
        const struct CTopLevelWindow **a2,
        unsigned __int8 a3,
        bool a4,
        bool *a5)
{
  int v6; // r15d
  CAnimationScheduler *v8; // rcx
  int v9; // r8d
  signed int v10; // esi
  __int64 v11; // rbx
  const struct CStoryboard *v13; // r13
  BOOL v14; // eax
  int v16; // [rsp+38h] [rbp-49h] BYREF
  BOOL v17; // [rsp+40h] [rbp-41h] BYREF
  const struct CTopLevelWindow *v18; // [rsp+48h] [rbp-39h] BYREF
  char v19[16]; // [rsp+50h] [rbp-31h] BYREF
  const struct CTopLevelWindow **v20; // [rsp+60h] [rbp-21h]
  int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+6Ch] [rbp-15h]
  int *v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  BOOL *v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+8Ch] [rbp+Bh]

  v6 = a3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0;
  v11 = 0LL;
  for ( *a5 = 0; (unsigned int)v11 < *((_DWORD *)this + 10); v11 = (unsigned int)(v11 + 1) )
  {
    v13 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v11);
    if ( CAnimationScheduler::_ShouldTrack(v8, (const struct CWindowData *)a2, v13, 1) )
    {
      v10 = CWindowPropertyTracker::OnWindowCloakChange(
              (CAnimationScheduler *)((char *)this + 48),
              v13,
              (const struct CWindowData *)a2,
              v6,
              a4);
      LOBYTE(v8) = v10 >= 0;
      *a5 |= v10 >= 0;
    }
    else if ( (_BYTE)v6 )
    {
      CTransitionVisualController::RemoveTLWClone(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
        a2[48],
        0,
        0);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v14 = *a5;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v17 = v14;
    v18 = a2[5];
    v20 = &v18;
    v23 = &v16;
    v26 = &v17;
    v16 = v6;
    v21 = 8;
    v24 = 4;
    v27 = 4;
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmSystemAnimation_WindowCloak,
      v9,
      4,
      (__int64)v19);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v10;
}
