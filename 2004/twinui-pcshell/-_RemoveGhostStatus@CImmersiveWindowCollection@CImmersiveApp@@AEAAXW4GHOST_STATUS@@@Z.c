/*
 * XREFs of ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180023E40
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180023B40 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180023C90 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0004@@@Z @ 0x180093FB0 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0004@@@Z.c)
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18017DCCC (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x18017E200 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18017F994 (-OnActivationRequested@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18017B8E0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180181EF8 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     WPP_SF_LSdL @ 0x180184350 (WPP_SF_LSdL.c)
 */

ULONG __fastcall CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(__int64 a1, int a2)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // r14
  ULONG result; // eax
  __int64 v8; // r10
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  REGHANDLE v12; // rcx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+40h] [rbp-69h] BYREF
  int v15; // [rsp+44h] [rbp-65h] BYREF
  int v16; // [rsp+48h] [rbp-61h] BYREF
  int v17; // [rsp+4Ch] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+50h] [rbp-59h] BYREF
  const WCHAR *v19; // [rsp+58h] [rbp-51h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v22; // [rsp+80h] [rbp-29h]
  int v23; // [rsp+88h] [rbp-21h]
  int v24; // [rsp+8Ch] [rbp-1Dh]
  const WCHAR *v25; // [rsp+90h] [rbp-19h]
  int v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+9Ch] [rbp-Dh]
  int *v28; // [rsp+A0h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp-1h]
  int *v30; // [rsp+B0h] [rbp+7h]
  __int64 v31; // [rsp+B8h] [rbp+Fh]
  int *v32; // [rsp+C0h] [rbp+17h]
  __int64 v33; // [rsp+C8h] [rbp+1Fh]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_LSdL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      23,
      (_DWORD)WPP_GLOBAL_Control,
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 592LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 160) + 600LL),
      *(_DWORD *)(a1 + 212));
  v4 = *(_DWORD *)(a1 + 212);
  v5 = v4 & ~a2;
  *(_DWORD *)(a1 + 212) = v5;
  v6 = *(_QWORD *)(a1 + 160);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD110;
    qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v13);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
  }
  result = (unsigned int)Context;
  v8 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *(const WCHAR **)(v6 + 592);
    v17 = *(_DWORD *)(v6 + 600);
    v32 = &v15;
    v30 = &v16;
    v28 = &v17;
    v15 = v5;
    v16 = v4;
    v19 = v9;
    v33 = 4LL;
    v31 = 4LL;
    v29 = 4LL;
    if ( v9 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v9 = &szAgent;
      v11 = 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v8 + 8);
    v25 = v9;
    v26 = v11;
    v27 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v22 = &unk_1804FB1DF;
    UserData.Reserved = 2;
    v12 = *(_QWORD *)(v8 + 32);
    v23 = 77;
    v24 = 1;
    LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    result = EventWriteTransfer(v12, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)v4) & 2) != 0 )
  {
    if ( (v5 & 2) != 0 )
      return CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(a1, 0LL, 2LL);
    else
      return CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(a1, 2LL);
  }
  return result;
}
