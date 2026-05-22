/*
 * XREFs of ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001A290
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6a7189ebe620023a05aeb813ce8150ef__void__tagActivationObjectNotification_const___::_Do_call @ 0x1800115B0 (std--_Func_impl_no_alloc__lambda_6a7189ebe620023a05aeb813ce8150ef__void__tagActivationObjectNoti.c)
 * Callees:
 *     ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180002944 (-find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV-$function@$$A6A_NPEAVActivatableEntit.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001A8BC (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamo.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180036EB0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BC9C (atexit.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ActivationNotificationSourceToString@InputTraceLogging@@CAPEBDAEBW4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x180046C6C (-ActivationNotificationSourceToString@InputTraceLogging@@CAPEBDAEBW4ACTIVATIONOBJECTSTATECHANGE_.c)
 *     ?attach@?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180047044 (-attach@-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVB.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800B71C0 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@444AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180104528 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgW.c)
 *     ?UpdateActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJU_LUID@@AEBW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@@Z @ 0x180105568 (-UpdateActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJU_LUID@@AEBW4ACTIVATIONOBJECTNOTIF.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ForegroundManager::OnActivationObjectNotification(
        ForegroundManager *this,
        const struct _tagActivationObjectNotification *a2)
{
  __int128 v4; // xmm2
  int v5; // r8d
  const char *v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  __int64 v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // r13
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rdi
  char v27; // r15
  int inserted; // esi
  const char *v29; // r9
  __int64 v30; // rbx
  DWORD CurrentThreadId; // eax
  const char *v32; // r9
  wil::details::in1diag3 *v33; // rcx
  signed __int32 v34; // edx
  bool v35; // sf
  signed __int32 v36; // edx
  int v37; // [rsp+20h] [rbp-E0h]
  _QWORD *v38; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+74h] [rbp-8Ch] BYREF
  LPVOID Context; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  struct _LUID v45; // [rsp+88h] [rbp-78h] BYREF
  __int128 v46; // [rsp+90h] [rbp-70h]
  struct _LUID v47[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-18h] BYREF
  struct _LUID v55; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char v57; // [rsp+100h] [rbp+0h]
  _QWORD *v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60[8]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v61; // [rsp+158h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v4 = *(_OWORD *)((char *)a2 + 8);
  v46 = v4;
  *(_OWORD *)&v47[0].LowPart = *(_OWORD *)((char *)a2 + 24);
  v48 = *(_OWORD *)((char *)a2 + 40);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180209518;
    qword_180209518[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_180209530 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_180209518,
      qword_180209530,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))InputTraceLogging::Callback);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_180209518);
  }
  if ( **((_DWORD **)Context + 1) > 4u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x8000LL) )
  {
    v40 = *((_DWORD *)a2 + 10);
    v49 = *((_QWORD *)a2 + 4);
    v50 = *((_QWORD *)a2 + 3);
    v51 = *((_QWORD *)a2 + 2);
    v52 = *((_QWORD *)a2 + 1);
    v53 = (__int64)InputTraceLogging::ActivationNotificationSourceToString((const struct _tagActivationObjectNotification *)((char *)a2 + 4));
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          v6 = "Destroyed";
          break;
        case 7:
          v6 = "Foreground";
          break;
        case 8:
          v6 = "NotForeground";
          break;
        default:
          v6 = "UNKNOWN";
          break;
      }
    }
    else
    {
      v6 = "Created";
    }
    v54 = (__int64)v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v5,
      (int)&dword_1801CEE21,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v40);
  }
  v7 = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 )
  {
    v61 = 0LL;
    if ( !(unsigned int)QueryActivationObject(&v47[1], &v61) )
      return;
    v8 = *((_QWORD *)this + 20);
    v9 = DWORD2(v48);
    v10 = DWORD1(v48);
    v11 = *((_QWORD *)&v46 + 1);
    v45 = v47[1];
    v38 = 0LL;
    v12 = operator new(0x68uLL);
    v13 = v12;
    v58 = v12;
    v14 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL);
    if ( *(int *)(v14 + 8) <= 0 )
      v15 = 0LL;
    else
      v15 = *(_QWORD *)(v14 + 16);
    *v12 = &BamoActivatableEntityPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
    v12[1] = &BamoActivatableEntityPrincipal::`vftable'{for `IActivatableEntityPrincipal'};
    v16 = v12 + 2;
    v59 = (char *)(v12 + 2);
    *((_DWORD *)v12 + 6) = 1;
    v12[2] = &Microsoft::BamoImpl::BamoPrincipalImpl::`vftable';
    v17 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) + 88);
    v13[4] = v17;
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    *((_DWORD *)v13 + 10) = 0;
    v13[6] = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(*(_QWORD *)(v13[4] + 32LL) + 56LL) + 24LL))(
            *(_QWORD *)(*(_QWORD *)(v13[4] + 32LL) + 56LL),
            *(unsigned int *)(*(_QWORD *)(v13[4] + 32LL) + 28LL),
            v13 + 2);
    v19 = retaddr;
    if ( v18 >= 0 )
    {
      *v16 = &BamoImpl::BamoActivatableEntityPrincipalImpl::`vftable';
      v13[7] = 0LL;
      v13[8] = 0LL;
      v13[9] = 0LL;
      v13[10] = 0LL;
      *((_BYTE *)v13 + 88) = 0;
      *v13 = &ActivatableEntityBamoPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
      v13[1] = &BamoActivatableEntityPrincipal::`vftable'{for `IActivatableEntityPrincipal'};
      v13[12] = v11;
      wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_exception_policy>::attach(&v38, v13);
      v20 = v38;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v38[1] + 32LL))(v38 + 1, (unsigned int)v4);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v20[1] + 80LL))(v20 + 1, v10);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v20[1] + 96LL))(v20 + 1, v9);
      (*(void (__fastcall **)(_QWORD *, struct _LUID *))(v20[1] + 64LL))(v20 + 1, &v45);
      v21 = DWORD2(v61) >> 2;
      LOBYTE(v21) = (BYTE8(v61) & 4) != 0;
      (*(void (__fastcall **)(_QWORD *, __int64))(v20[1] + 112LL))(v20 + 1, v21);
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 24LL))(v8 + 8);
      v23 = *(_QWORD *)(v22[4] + 32LL);
      if ( *(int *)(v23 + 8) <= 0 )
        v24 = 0LL;
      else
        v24 = *(_QWORD *)(v23 + 16);
      v56 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
      v26 = *(_QWORD *)(v25 + 88);
      v56 = v26;
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
        v20 = v38;
      }
      if ( *(_DWORD *)(v25 + 168) == GetCurrentThreadId() )
      {
        v57 = 1;
        v27 = 1;
      }
      else
      {
        v57 = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 128));
        *(_DWORD *)(v25 + 168) = GetCurrentThreadId();
        v27 = 0;
      }
      ++*(_DWORD *)(v25 + 172);
      inserted = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InsertWorker(
                   v22,
                   v24,
                   (__int64)(v22[8] - v22[7]) >> 3,
                   v20);
      v30 = *(_QWORD *)(v26 + 32);
      --*(_DWORD *)(v30 + 172);
      if ( !v27 )
      {
        CurrentThreadId = GetCurrentThreadId();
        v33 = retaddr;
        if ( *(_DWORD *)(v30 + 168) != CurrentThreadId )
          goto LABEL_50;
        *(_DWORD *)(v30 + 168) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(v30 + 128));
      }
      v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 8), 0xFFFFFFFF);
      v35 = v34 - 1 < 0;
      v36 = v34 - 1;
      if ( v35 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
          v29);
        JUMPOUT(0x18001A8B2LL);
      }
      if ( !v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( inserted >= 0 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v38 + 8LL))(v38);
        return;
      }
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        (const char *)(unsigned int)inserted,
        v37);
    }
    wil::details::in1diag3::FailFast_Hr(
      v19,
      (void *)0x2FA,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v18,
      v37);
LABEL_50:
    wil::details::in1diag3::_FailFast_Unexpected(
      v33,
      (void *)0x679,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v32);
    __debugbreak();
  }
  if ( v7 == 1 )
  {
    v55 = v47[1];
    v60[0] = (__int64)off_1801B0730;
    v60[1] = (__int64)&v55;
    v60[7] = (__int64)v60;
    ActivationWatcherBamoPrincipal::find_and_remove_if(*((_QWORD *)this + 20), v60);
  }
  else if ( (unsigned int)(v7 - 7) <= 1 )
  {
    v44 = 0LL;
    if ( !(unsigned __int8)operator==(&v47[1], &v44) )
    {
      v41 = 7;
      ActivationWatcherBamoPrincipal::UpdateActivatableEntity(
        *((ActivationWatcherBamoPrincipal **)this + 20),
        v47[1],
        (const enum ACTIVATIONOBJECTNOTIFICATION_ACTION *)&v41);
    }
    if ( !(unsigned __int8)operator==(v47, &v44) )
    {
      v42 = 8;
      ActivationWatcherBamoPrincipal::UpdateActivatableEntity(
        *((ActivationWatcherBamoPrincipal **)this + 20),
        v47[0],
        (const enum ACTIVATIONOBJECTNOTIFICATION_ACTION *)&v42);
    }
  }
}
