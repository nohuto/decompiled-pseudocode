/*
 * XREFs of _lambda_8f853f3308fdbebd25aa75747bd09082_::operator() @ 0x180064848
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b125c00b27fbf4663240ba082ce6596___::Run @ 0x1800647C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b125c00b27fbf4663240ba082ce6596___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006B014 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009509C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18014DC88 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     WPP_SF_Ld @ 0x180164C28 (WPP_SF_Ld.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x18018712C (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall lambda_8f853f3308fdbebd25aa75747bd09082_::operator()(unsigned int *a1)
{
  _QWORD **v2; // rsi
  __int64 v3; // rcx
  int v4; // r15d
  char *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD **v13; // rcx
  __int64 v14; // rcx
  void *v15; // rbx
  HANDLE ProcessHeap; // rax
  int v18; // [rsp+20h] [rbp-49h]
  _BYTE v19[16]; // [rsp+40h] [rbp-29h] BYREF
  LPVOID lpMem; // [rsp+50h] [rbp-19h]
  char v21; // [rsp+58h] [rbp-11h]
  _QWORD **v22; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v26; // [rsp+D0h] [rbp+67h] BYREF
  char v27; // [rsp+D8h] [rbp+6Fh] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 4),
    (wil::ActivityThreadWatcher *)v19);
  if ( !IsWindowVisible(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL)) )
  {
    v14 = *((_QWORD *)a1 + 1);
    if ( **(_QWORD **)(v14 + 104) )
    {
      if ( !*a1 )
      {
        v26 = *(_QWORD *)(v14 + 600);
        CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(&v26);
        ShowWindowAsync(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL), 4);
      }
    }
  }
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 56LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
    *a1);
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      1LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_5ec67ad958ea315cfc78e4414cad3743_Traceguids,
      *a1,
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 48LL));
  v2 = (_QWORD **)*((_QWORD *)a1 + 1);
  v3 = *v2[13];
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v3 + 208LL))(
      v3,
      v2[16],
      (unsigned int)(*((_DWORD *)v2 + 56) != 0) + 4);
    v2 = (_QWORD **)*((_QWORD *)a1 + 1);
  }
  v4 = *a1;
  v5 = (char *)((__int64 (__fastcall *)(_QWORD **, __int64 *))(*v2)[8])(v2, &v26);
  v6 = 0LL;
  v7 = 0LL;
  if ( &v27 != v5 )
  {
    v6 = *(_QWORD *)v5;
    *(_QWORD *)v5 = 0LL;
    v7 = v6;
  }
  v8 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v4 == *((_DWORD *)v2 + 56) )
    *((_BYTE *)v2 + 544) = 1;
  ((void (__fastcall *)(_QWORD **, __int64 *))(*v2)[8])(v2, &v26);
  v9 = v26;
  if ( v26 != v7 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v2[78] + 520LL))(v2[78]);
    v9 = v26;
  }
  if ( v9 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v10 = *((_QWORD *)a1 + 1);
  if ( **(_QWORD **)(v10 + 112) )
  {
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *(_QWORD *)(v10 + 632);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 192LL))(v11);
    }
  }
  if ( *((_BYTE *)a1 + 4) )
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 128LL),
      0LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(v12) = wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 4);
  if ( v24 )
  {
    if ( v24 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B0,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v18);
    v24 = 0;
    v13 = v22;
    while ( 1 )
    {
      v12 = *v13;
      if ( !*v13 )
        break;
      if ( v12 == &v22 )
      {
        LODWORD(v12) = (_DWORD)v23;
        *v13 = v23;
        break;
      }
      v13 = (_QWORD **)(v12 + 2);
      v22 = (_QWORD **)(v12 + 2);
    }
    v22 = 0LL;
  }
  if ( v21 )
  {
    v15 = lpMem;
    ProcessHeap = GetProcessHeap();
    LODWORD(v12) = HeapFree(ProcessHeap, 0, v15);
  }
  return (int)v12;
}
