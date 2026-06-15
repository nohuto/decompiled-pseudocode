/*
 * XREFs of ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180023AAC
 * Callers:
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800326C0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000FF70 (WPP_SF_S.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180023CB4 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x180026A4C (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002E10C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F69C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForApp(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned int a4)
{
  int v7; // esi
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  struct TSSession *v9; // rax
  __int64 v10; // rcx
  struct TSSession *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  struct CApplication *v14; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  CApplicationManager *v16; // rcx
  struct CApplication *v17; // rdx
  int active; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct TSSession *v21; // [rsp+60h] [rbp+8h] BYREF

  v21 = this;
  v7 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( g_bIsSystemAsleep == 1
    && ((g_bIsSystemAsleep = 0,
         v9 = (struct TSSession *)operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow),
         v11 = v9,
         (v21 = v9) == 0LL)
      ? (v11 = 0LL)
      : (struct TSSession *)(*(_DWORD *)v9 = a4),
        v11 && (v12 = QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v10, v11), v13 = v12, v12 < 0)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x654,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v12);
    operator delete(v11, (const struct std::nothrow_t *)4);
  }
  else
  {
    if ( !a2 )
      goto LABEL_26;
    v14 = 0LL;
    v15 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    if ( !(unsigned int)TsSessionFromSessionId(a4, 0, 0LL, &v21) )
    {
      v16 = (CApplicationManager *)*((_QWORD *)v21 + 13);
      while ( v16 )
      {
        v17 = (struct CApplication *)*((_QWORD *)v16 + 2);
        v16 = *(CApplicationManager **)v16;
        if ( *((_QWORD *)v17 + 80) == a3 )
        {
          v14 = v17;
          break;
        }
      }
    }
    if ( v15 )
      LeaveCriticalSection(v15);
    if ( v14 )
    {
      active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v16, v14);
      v7 = active;
      if ( active < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, active);
        }
        AudPolicyLogError("CApplicationManager::HandleMediaPlaybackRequestForApp", 1644, v7);
      }
    }
    else
    {
LABEL_26:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, a2);
      }
    }
    v13 = v7;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return v13;
}
