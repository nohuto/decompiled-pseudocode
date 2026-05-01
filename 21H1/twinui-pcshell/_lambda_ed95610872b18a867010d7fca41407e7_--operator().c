/*
 * XREFs of _lambda_ed95610872b18a867010d7fca41407e7_::operator() @ 0x180031908
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30___::Run @ 0x180031880 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30___--Run.c)
 * Callees:
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180031D10 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_fb130b4a30319f651b73f20ef7604bb2___ @ 0x180075468 (CIAMGlobals--QueueViewManagementTask__lambda_fb130b4a30319f651b73f20ef7604bb2___.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800937A8 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180129748 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     WPP_SF_qd @ 0x180136024 (WPP_SF_qd.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z @ 0x1801637C4 (--$FailedSettingPresentedWindowOnFrame@AEBJPEBG@CFramePresentationTelemetry@@SAXAEBJ$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=5
int __fastcall lambda_ed95610872b18a867010d7fca41407e7_::operator()(CFrameApplicationPresentation **a1)
{
  CFrameApplicationPresentation *v2; // rbx
  CFrameApplicationPresentation *v3; // rcx
  char v4; // r15
  __int64 v5; // r13
  CFrameApplicationPresentation *v6; // rcx
  CFrameApplicationPresentation *v7; // r14
  __int64 v8; // rbx
  CFrameApplicationPresentation *v9; // r12
  char *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  CFrameApplicationPresentation *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  CFrameApplicationPresentation *v18; // r14
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdx
  CFrameApplicationPresentation *v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD **v27; // rcx
  int v28; // ebx
  int v29; // ebx
  __int64 v30; // rax
  void *v31; // rbx
  HANDLE ProcessHeap; // rax
  int v34; // [rsp+20h] [rbp-69h]
  char v35; // [rsp+30h] [rbp-59h] BYREF
  CFrameApplicationPresentation *v36; // [rsp+38h] [rbp-51h]
  __int64 v37; // [rsp+40h] [rbp-49h]
  char v38[16]; // [rsp+50h] [rbp-39h] BYREF
  LPVOID lpMem; // [rsp+60h] [rbp-29h]
  char v40; // [rsp+68h] [rbp-21h]
  _QWORD **v41; // [rsp+70h] [rbp-19h] BYREF
  _QWORD *v42; // [rsp+80h] [rbp-9h]
  int v43; // [rsp+88h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned int v45; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v46; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v47; // [rsp+100h] [rbp+77h] BYREF
  __int64 v48; // [rsp+108h] [rbp+7Fh]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v38);
  v2 = (CFrameApplicationPresentation *)**((_QWORD **)a1[1] + 13);
  v3 = *a1;
  if ( *a1 && v2 )
  {
    if ( v3 == v2 )
    {
      v4 = 1;
    }
    else
    {
      v47 = 0LL;
      v46 = 0LL;
      if ( (**(int (__fastcall ***)(CFrameApplicationPresentation *, GUID *, __int64 *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v47) < 0 )
        goto LABEL_71;
      v28 = (**(__int64 (__fastcall ***)(CFrameApplicationPresentation *, GUID *, __int64 *))v2)(
              v2,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v46);
      if ( v28 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      if ( v28 < 0 || (v4 = 1, v47 != v46) )
LABEL_71:
        v4 = 0;
      v3 = *a1;
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v3 + 32LL))(v3);
  v6 = a1[1];
  if ( v5 == **((_QWORD **)v6 + 14) && v4 )
  {
    LODWORD(v26) = wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
                     a1 + 2,
                     0LL);
  }
  else
  {
    if ( !IsWindowVisible(*((HWND *)v6 + 16)) )
      ShowWindowAsync(*((HWND *)a1[1] + 16), 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v29 = *((_DWORD *)a1[1] + 12);
      v30 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
      v34 = v29;
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_5ec67ad958ea315cfc78e4414cad3743_Traceguids, v30);
    }
    v7 = a1[1];
    v8 = **((_QWORD **)v7 + 13);
    v48 = v8;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v7 = a1[1];
    }
    v9 = *a1;
    v36 = v7;
    v37 = 0LL;
    v10 = (char *)(*(__int64 (__fastcall **)(CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)v7 + 64LL))(
                    v7,
                    &v46);
    v11 = 0LL;
    v47 = 0LL;
    if ( &v35 != v10 )
    {
      v11 = *(_QWORD *)v10;
      *(_QWORD *)v10 = 0LL;
      v47 = v11;
    }
    v37 = v11;
    v12 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (CFrameApplicationPresentation *)*((_QWORD *)v7 + 10);
    if ( v13 != v9 || *((_QWORD *)v7 + 11) != v5 )
      *((_BYTE *)v7 + 96) = 0;
    if ( v13 != v9 )
    {
      if ( v9 )
      {
        (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v9 + 8LL))(v9);
        v13 = (CFrameApplicationPresentation *)*((_QWORD *)v7 + 10);
      }
      v46 = (__int64)v13;
      *((_QWORD *)v7 + 10) = v9;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    }
    *((_QWORD *)v7 + 11) = v5;
    (*(void (__fastcall **)(CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, &v46);
    v14 = v46;
    v15 = v47;
    if ( v46 != v47 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v7 + 78) + 520LL))(*((_QWORD **)v7 + 78));
      v14 = v46;
    }
    if ( v14 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( (unsigned int)GetWindowBand(*((_QWORD *)a1[1] + 16), &v45) )
      (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, v45);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1[1] + 15) + 48LL))(*((_QWORD *)a1[1] + 15), v5);
    LODWORD(v46) = v16;
    v17 = retaddr;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B8,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v16,
        v34);
      v47 = *((_QWORD *)a1[1] + 75);
      CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &,unsigned short const *>(&v46, &v47);
    }
    if ( v5 )
    {
      v46 = v5;
      CIAMGlobals::QueueViewManagementTask__lambda_fb130b4a30319f651b73f20ef7604bb2___(v17, &v46);
    }
    CFrameApplicationPresentation::_UpdateMinSizePreferences(a1[1], **((HWND **)a1[1] + 14));
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD, _QWORD))(*(_QWORD *)*a1 + 208LL))(
      *a1,
      *((_QWORD *)a1[1] + 16),
      (unsigned int)(*((_DWORD *)a1[1] + 56) != 0) + 4);
    if ( v8 && !v4 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 208LL))(v8, *((_QWORD *)a1[1] + 16), 0LL);
    v18 = a1[1];
    v36 = v18;
    v37 = 0LL;
    v19 = (__int64 *)(*(__int64 (__fastcall **)(CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)v18 + 64LL))(
                       v18,
                       &v46);
    v20 = 0LL;
    v21 = 0LL;
    if ( &v47 != v19 )
    {
      v20 = *v19;
      *v19 = 0LL;
      v21 = v20;
    }
    v37 = v20;
    v22 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    *((_BYTE *)v18 + 96) = 1;
    (*(void (__fastcall **)(CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v46);
    v23 = v46;
    if ( v46 != v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v18 + 78) + 520LL))(*((_QWORD **)v18 + 78));
      v23 = v46;
    }
    if ( v23 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v24 = a1[1];
    if ( **((_QWORD **)v24 + 14) )
    {
      if ( !*((_DWORD *)v24 + 56) )
      {
        v25 = *((_QWORD *)v24 + 79);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 192LL))(v25);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    LODWORD(v26) = wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
                     a1 + 2,
                     0LL);
    if ( v8 )
      LODWORD(v26) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v43 )
  {
    if ( v43 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B0,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v34);
    v43 = 0;
    v27 = v41;
    while ( 1 )
    {
      v26 = *v27;
      if ( !*v27 )
        break;
      if ( v26 == &v41 )
      {
        LODWORD(v26) = (_DWORD)v42;
        *v27 = v42;
        break;
      }
      v27 = (_QWORD **)(v26 + 2);
      v41 = (_QWORD **)(v26 + 2);
    }
    v41 = 0LL;
  }
  if ( v40 )
  {
    v31 = lpMem;
    ProcessHeap = GetProcessHeap();
    LODWORD(v26) = HeapFree(ProcessHeap, 0, v31);
  }
  return (int)v26;
}
