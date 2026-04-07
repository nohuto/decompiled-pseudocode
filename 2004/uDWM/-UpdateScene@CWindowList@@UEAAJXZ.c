/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001B420
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035E54 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004B4A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18001B820 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001D7A4 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18002C4A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  int v2; // esi
  CDesktopManager *v3; // rbx
  CDesktopManager *v4; // rdx
  int v5; // r8d
  __int64 v6; // rax
  CDesktopManager *v7; // rcx
  CDesktopManager *v8; // rbx
  unsigned int v9; // edi
  __int64 i; // r13
  CDesktopManager *v11; // rcx
  _QWORD *v12; // rdi
  PVOID v13; // rbx
  struct CVisual *v14; // rdx
  struct CVisual *v15; // rdx
  __int64 v16; // rdi
  _QWORD *v17; // rax
  char v18; // r14
  PVOID v19; // rcx
  int v20; // eax
  struct CVisual *v21; // rdx
  struct CVisual *v22; // rdx
  __int64 v23; // rax
  struct CVisual *v24; // rdx
  int v25; // r8d
  __int64 v26; // rdx
  int v27; // eax
  CDesktopManager *v28; // rcx
  char *v29; // rdi
  __int64 v30; // rcx
  int v31; // eax
  CDesktopManager *v33; // rcx
  __int64 *v34; // r9
  __int64 v35; // r10
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rbx
  bool v40; // di
  void *v41; // rcx
  DWORD LastError; // ebx
  int v43; // [rsp+20h] [rbp-68h]
  PVOID RestartKey; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v45[16]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() == *((_DWORD *)v3 + 164) )
    goto LABEL_3;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = 0;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( !*(_DWORD *)(v6 + 40) )
    goto LABEL_3;
  v34 = *(__int64 **)(v6 + 16);
  v35 = *(unsigned int *)(v6 + 40);
  do
  {
    v36 = *v34;
    v37 = v5 + 1;
    ++v34;
    if ( *(_DWORD *)(v36 + 24) == 4 )
      v37 = v5;
    v5 = v37;
    --v35;
  }
  while ( v35 );
  if ( v37 <= 0 )
    goto LABEL_3;
  v38 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  if ( v38 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v38 + 116));
    v4 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v39 = *((_QWORD *)v4 + 26);
  if ( !v39 )
    goto LABEL_3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v40 = !*(_DWORD *)(v39 + 64) || !*(_BYTE *)(v39 + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 116), 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v39 = &CAnimationEngine::`vftable';
    DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)(v39 + 72));
    DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)(v39 + 40));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v39);
  }
  if ( !v40 )
  {
LABEL_3:
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    v9 = 0;
    RestartKey = 0LL;
    for ( i = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31); v9 < *((_DWORD *)v8 + 194); ++v9 )
      CDesktopManager::UpdateSceneImpl(v7, *(struct CVisual **)(*((_QWORD *)v8 + 94) + 8LL * v9));
    v12 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
    if ( v12 )
    {
      v13 = RestartKey;
      do
      {
        v14 = (struct CVisual *)v12[3];
        if ( v14 )
          CDesktopManager::UpdateSceneImpl(v11, v14);
        v15 = (struct CVisual *)v12[5];
        if ( v15 )
          CDesktopManager::UpdateSceneImpl(v11, v15);
        v16 = v12[7];
        if ( v16 )
        {
          v17 = *(_QWORD **)(v16 + 96);
          if ( v17 )
          {
            if ( v17[2] && v17[6] && (v13 = (PVOID)v17[3], v2 |= 1u, v13) )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(v17[3]);
              v18 = 1;
            }
            else
            {
              v18 = 0;
            }
            if ( (v2 & 1) != 0 )
            {
              v2 &= ~1u;
              v19 = v13;
              if ( v13 )
              {
                v13 = 0LL;
                (*(void (__fastcall **)(PVOID))(*(_QWORD *)v19 + 16LL))(v19);
              }
            }
            if ( v18 )
            {
              v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v16 + 96) + 16LL) + 64LL))(*(_QWORD *)(*(_QWORD *)(v16 + 96) + 16LL));
              if ( v20 < 0 )
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x190,
                  (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
                  (const char *)(unsigned int)v20);
            }
          }
        }
        v12 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
      }
      while ( v12 );
    }
    v21 = (struct CVisual *)*((_QWORD *)this + 62);
    if ( v21 && *((_QWORD *)v21 + 3) )
      CDesktopManager::UpdateSceneImpl(v11, v21);
    v22 = (struct CVisual *)*((_QWORD *)this + 63);
    if ( v22 && *((_QWORD *)v22 + 3) )
      CDesktopManager::UpdateSceneImpl(v11, v22);
    v23 = *((_QWORD *)this + 65);
    if ( v23 )
    {
      v24 = *(struct CVisual **)(v23 + 48);
      if ( v24 )
        CDesktopManager::UpdateSceneImpl(v11, v24);
    }
    if ( i && *(_QWORD *)(i + 8) )
    {
      CWindowList::MoveTransitionAndTouchVisualToFront(this);
      CDesktopManager::UpdateSceneImpl(v33, *(struct CVisual **)(i + 8));
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&CommitChannel_UpdateScene,
        v25,
        1,
        (__int64)v45);
    v26 = *((_QWORD *)this + 73);
    if ( (unsigned __int64)(v26 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v26 = *((_QWORD *)this + 71);
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                   + 16LL)
                                                     + 32LL))(
            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
            v26);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1767,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v27,
        v43);
    v28 = (CDesktopManager *)*((_QWORD *)this + 71);
    *((_BYTE *)this + 602) = 0;
    if ( v28 )
    {
      NtDCompositionCommitSynchronizationObject();
      ConfirmResizeCommit(*((_QWORD *)this + 72));
      v41 = (void *)*((_QWORD *)this + 71);
      *((_QWORD *)this + 72) = 0LL;
      CloseHandle(v41);
      *((_QWORD *)this + 71) = 0LL;
    }
    v29 = (char *)*((_QWORD *)this + 73);
    if ( (unsigned __int64)(v29 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v29);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 73) = 0LL;
    if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v28) >= 0 )
    {
      v30 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
      if ( v30 )
      {
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 24LL))(v30);
        if ( v31 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1771,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v31,
            v43);
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
