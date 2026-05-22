/*
 * XREFs of ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180036EB0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BC9C (atexit.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800675D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800893A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameControllerRawInputProvider::OnTargetWithFocusChanged(
        RTL_SRWLOCK *this,
        struct IInputTarget *a2,
        __int64 (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v5; // r14
  int LastError; // edi
  __int64 (__fastcall **v7)(struct IInputTarget *, GUID *, __int64 *); // rax
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  int Ptr; // edx
  PVOID v15; // rcx
  char *v16; // rcx
  int Ptr_high; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // esi
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  const char *v25; // r9
  int v26; // eax
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  int UserDataCounta; // [rsp+20h] [rbp-E0h]
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int InBuffer; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  WINBOOL fPending; // [rsp+5Ch] [rbp-A4h] BYREF
  WINBOOL v36; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL v37; // [rsp+64h] [rbp-9Ch] BYREF
  WINBOOL v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h] BYREF
  int v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+7Ch] [rbp-84h] BYREF
  int v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v46; // [rsp+88h] [rbp-78h]
  LPVOID Context; // [rsp+90h] [rbp-70h] BYREF
  LPVOID v48; // [rsp+98h] [rbp-68h] BYREF
  LPVOID v49; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID v50; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  int *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  int *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  unsigned int *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  int *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  int *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  int *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v5 = this + 7;
  AcquireSRWLockExclusive(this + 7);
  LastError = 0;
  if ( !a3 )
  {
    HIDWORD(this[17].Ptr) = 0;
    HIDWORD(this[18].Ptr) = 0;
    goto LABEL_9;
  }
  v7 = *a3;
  v33 = 0LL;
  v8 = (*v7)((struct IInputTarget *)a3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v33);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v8,
      UserDataCount);
    goto LABEL_45;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 32LL))(v33, &v30);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_45:
    wil::details::in1diag3::FailFast_Hr(
      v10,
      (void *)0xE6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v9,
      UserDataCount);
    goto LABEL_46;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 72LL))(v33, &v34);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_46:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0xE7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v11,
      UserDataCount);
    goto LABEL_47;
  }
  v13 = v30;
  if ( !v34 )
  {
    HIDWORD(this[17].Ptr) = v30;
    HIDWORD(this[18].Ptr) = 0;
    goto LABEL_7;
  }
LABEL_47:
  HIDWORD(this[18].Ptr) = v13;
LABEL_7:
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
LABEL_9:
  Ptr = (int)this[18].Ptr;
  if ( !Ptr )
  {
    Ptr = HIDWORD(this[18].Ptr);
    if ( !Ptr )
      Ptr = HIDWORD(this[17].Ptr);
  }
  InBuffer = Ptr;
  v15 = this[6].Ptr;
  if ( v15 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 64LL))(v15);
  v16 = (char *)this[8].Ptr;
  if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !DeviceIoControl(v16, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x326,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gameco"
                                "ntrollerrawinputprovider.cpp",
                  v25);
    goto LABEL_39;
  }
  Ptr_high = (int)this[18].Ptr;
  if ( !Ptr_high )
    Ptr_high = HIDWORD(this[17].Ptr);
  v31 = Ptr_high;
  UserDataCounta = 0;
  v18 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v31, 4LL);
  if ( v18 < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x342,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gameco"
                                "ntrollerrawinputprovider.cpp",
                  (const char *)(unsigned int)v18,
                  0);
    goto LABEL_39;
  }
  if ( LODWORD(this[18].Ptr) )
    v19 = 0;
  else
    v19 = HIDWORD(this[18].Ptr);
  v29 = v19;
  v20 = (unsigned int)this[19].Ptr;
  v46 = v20;
  if ( v19 != v20 )
  {
    UserDataCounta = 0;
    v26 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v29, 4LL);
    if ( v26 < 0 )
    {
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x35C,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\game"
                                  "controllerrawinputprovider.cpp",
                    (const char *)(unsigned int)v26,
                    0);
      goto LABEL_39;
    }
    LODWORD(this[19].Ptr) = v29;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1802094E8;
    qword_1802094E8 = &RawInputProvidersContinuousTracing::`vftable';
    qword_180209500 = (struct _tlgProvider_t *)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1802094E8, qword_180209500, 0LL);
    InitOnceComplete(&`ISMTracing::Instance'::`2'::wrapper, 0, &qword_1802094E8);
  }
  v21 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v21 && *v21 )
  {
    v50 = 0LL;
    if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v36, &v50) && v36 )
    {
      v50 = &qword_1802094E8;
      qword_1802094E8 = &RawInputProvidersContinuousTracing::`vftable';
      qword_180209500 = (struct _tlgProvider_t *)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1802094E8, qword_180209500, 0LL);
      InitOnceComplete(&`ISMTracing::Instance'::`2'::wrapper, 0, &qword_1802094E8);
    }
    v48 = 0LL;
    if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v37, &v48) && v37 )
    {
      v48 = &qword_1802094E8;
      qword_1802094E8 = &RawInputProvidersContinuousTracing::`vftable';
      qword_180209500 = (struct _tlgProvider_t *)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1802094E8, qword_180209500, 0LL);
      InitOnceComplete(&`ISMTracing::Instance'::`2'::wrapper, 0, &qword_1802094E8);
    }
    v22 = (_DWORD *)*((_QWORD *)v48 + 1);
    if ( v22 && *v22 )
    {
      v49 = 0LL;
      if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v38, &v49) && v38 )
      {
        v49 = &qword_1802094E8;
        qword_1802094E8 = &RawInputProvidersContinuousTracing::`vftable';
        qword_180209500 = (struct _tlgProvider_t *)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1802094E8, qword_180209500, 0LL);
        InitOnceComplete(&`ISMTracing::Instance'::`2'::wrapper, 0, &qword_1802094E8);
      }
      v23 = *((_QWORD *)v49 + 1);
      if ( *(_DWORD *)v23 > 4u )
      {
        v39 = v29;
        v40 = v31;
        v41 = InBuffer;
        v42 = v20;
        v43 = HIDWORD(this[18].Ptr);
        v44 = (int)this[18].Ptr;
        v45 = HIDWORD(this[17].Ptr);
        v68 = &v39;
        v69 = 4LL;
        v66 = &v40;
        v67 = 4LL;
        v64 = &v41;
        v65 = 4LL;
        v62 = &v42;
        v63 = 4LL;
        v60 = &v43;
        v61 = 4LL;
        v58 = &v44;
        v59 = 4LL;
        v56 = &v45;
        v57 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 4;
        EventDescriptor.Keyword = 0LL;
        UserData.Ptr = *(_QWORD *)(v23 + 8);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v53 = &unk_1801C9EC4;
        v54 = 198;
        v55 = 1;
        v46 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(*(_QWORD *)(v23 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      }
    }
  }
LABEL_39:
  if ( LastError < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x103,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)LastError,
      UserDataCounta);
    JUMPOUT(0x18005BB24LL);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 0LL;
}
