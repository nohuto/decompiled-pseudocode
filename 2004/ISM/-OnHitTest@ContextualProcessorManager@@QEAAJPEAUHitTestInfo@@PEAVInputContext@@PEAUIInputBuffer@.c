/*
 * XREFs of ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x1801493D4
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180138310 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180018648 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x180018F90 (--0ContextualProcessorInitialState@@QEAA@AEBU0@@Z.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ @ 0x1800190C8 (-Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$As@UIInputTarget@@@?$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800190E8 (--$As@UIInputTarget@@@-$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x180019B54 (-Create@ContextualProcessorBuffer@@SAJPEAVInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029D80 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033780 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B284 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180040E78 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18007F97C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??B?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEBA_NXZ @ 0x180137B8C (--B-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 *     ??$As@UIContextualProcessorBufferTarget@@@?$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180148FF4 (--$As@UIContextualProcessorBufferTarget@@@-$ComPtr@VContextualProcessorBuffer@@@WRL@Microsoft@@Q.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x180149304 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessor.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContextualProcessorManager::OnHitTest(
        ContextualProcessorManager *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5,
        enum ContextualProcessorState *a6)
{
  unsigned int v9; // esi
  int v11; // r14d
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // r15
  _QWORD *v17; // r12
  struct InputContext *v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdi
  int v21; // eax
  struct ContextualProcessorBuffer *v22; // rbx
  __int64 v23; // rcx
  const struct _tlgProvider_t *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbx
  void (__fastcall *v30)(__int64, _QWORD, _QWORD, ContextualProcessorInitialState *); // rdi
  ContextualProcessorInitialState *v31; // rax
  struct ContextualProcessorBuffer *v32; // [rsp+30h] [rbp-A9h] BYREF
  struct IInputTarget *v33; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v34; // [rsp+40h] [rbp-99h] BYREF
  __int64 v35; // [rsp+48h] [rbp-91h] BYREF
  __int64 v36; // [rsp+50h] [rbp-89h] BYREF
  struct HitTestInfo *v37; // [rsp+58h] [rbp-81h]
  struct InputContext *v38; // [rsp+60h] [rbp-79h]
  _BYTE v39[16]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v40[48]; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v41[48]; // [rsp+A8h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v38 = a3;
  v37 = a2;
  v9 = 0;
  if ( !a5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v40, "ContextualProcessingHitTest", 0LL);
  v34 = 0LL;
  v11 = 0;
  if ( !*a5
    || (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a5)(*a5, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &v34) < 0 )
  {
    v32 = 0LL;
    v33 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v32);
    v12 = ContextualProcessorBuffer::Create(a3, a4, &v32);
    v13 = retaddr;
    if ( v12 < 0 )
      goto LABEL_33;
    v14 = Microsoft::WRL::ComPtr<ContextualProcessorBuffer>::As<IContextualProcessorBufferTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v32,
            &v34);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        110LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = Microsoft::WRL::ComPtr<ContextualProcessorBuffer>::As<IInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v32,
            (__int64 *)&v33);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        111LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef((__int64 *)&v33);
    *a5 = v33;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v32);
  }
  v16 = (_QWORD *)*((_QWORD *)this + 2);
  v17 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v16 == v17 )
    goto LABEL_30;
  v18 = v38;
  while ( !wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::operator bool((_QWORD *)(*((_QWORD *)v18 + 22) + 32LL))
       && *((_DWORD *)v16 + 2) != 1 )
  {
LABEL_24:
    v16 += 2;
    if ( v16 == v17 )
      goto LABEL_27;
  }
  v36 = 0LL;
  v35 = 0LL;
  v19 = (__int64 *)(*(__int64 (__fastcall **)(__int64, struct IInputTarget **, _QWORD))(*(_QWORD *)v34 + 48LL))(
                     v34,
                     &v33,
                     *v16);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=(&v36, v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v41,
    "ContextualProcessorHitTest",
    (const struct InputTraceLogging::PerfRegion *)v40);
  v20 = (__int64)v37;
  v21 = (*(__int64 (__fastcall **)(_QWORD, struct HitTestInfo *, struct InputContext *, __int64 *))(*(_QWORD *)*v16
                                                                                                  + 24LL))(
          *v16,
          v37,
          v18,
          &v35);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      136LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)(unsigned int)v21);
LABEL_33:
    wil::details::in1diag3::FailFast_Hr(
      v13,
      109LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v22 = (struct ContextualProcessorBuffer *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 48LL))(*v16);
  v24 = InputETW::Provider(v23);
  v26 = (__int64)v24;
  if ( *(_DWORD *)v24 > 4u && tlgKeywordOn((__int64)v24, 1LL) )
  {
    v32 = v22;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v26,
      (unsigned __int8 *)dword_1801CE5AC,
      v26,
      v27,
      (const wchar_t **)&v32);
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v16 + 48LL))(*v16, v25, v26);
  InputTraceLogging::ContextualProcessing::OnHitTest(v20, v28, v35);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v41);
  v29 = v34;
  v30 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, ContextualProcessorInitialState *))(*(_QWORD *)v34 + 40LL);
  v31 = ContextualProcessorInitialState::ContextualProcessorInitialState(
          (ContextualProcessorInitialState *)v39,
          (const struct ContextualProcessorInitialState *)&v35);
  v30(v29, *((unsigned int *)v37 + 10), *v16, v31);
  if ( (_DWORD)v35 != 2 )
  {
    if ( (_DWORD)v35 == 1 )
    {
      v11 = 1;
    }
    else if ( (_DWORD)v35 == 3 && !v11 )
    {
      v11 = 3;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
    v18 = v38;
    goto LABEL_24;
  }
  v11 = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
LABEL_27:
  if ( !v11 )
  {
LABEL_30:
    v9 = -2147467259;
    goto LABEL_31;
  }
  if ( a6 )
    *(_DWORD *)a6 = v11;
LABEL_31:
  Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v34);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v40);
  return v9;
}
