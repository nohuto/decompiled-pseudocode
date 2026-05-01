/*
 * XREFs of ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18000E730
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18000B7BC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180081788 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18000B794 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180049D6C (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800520CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@45@Z @ 0x18044F54C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U3@@-$_tlgWrit.c)
 */

LPVOID __fastcall CSingleViewShellExperience::BoostPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v6; // eax
  PCWSTR StringRawBuffer; // rdi
  PCWSTR v8; // rax
  __int64 v9; // r14
  LPVOID result; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  struct _TP_TIMER **v14; // rdi
  struct _TP_TIMER *v15; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v17; // rdx
  void (*v18)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v19; // ecx
  char v20; // al
  int v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-18h] BYREF
  __int64 v25; // [rsp+68h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  _FILETIME pftDueTime; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+40h] BYREF
  WINBOOL fPending; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+50h] BYREF

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      goto LABEL_6;
    if ( (*(_BYTE *)(a1 + 132) & 0x20) != 0 )
      goto LABEL_6;
    if ( *(_BYTE *)(a1 + 140) )
      goto LABEL_6;
    *(_BYTE *)(a1 + 140) = 1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v6 >= 0 )
      goto LABEL_6;
    v17 = 1176LL;
LABEL_20:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6,
      v21);
    goto LABEL_6;
  }
  CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1, a2, a3, a4, v21);
  if ( !*(_BYTE *)(a1 + 141) )
  {
    v12 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 1;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 120LL))(v12, a1);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x460,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v13,
        v21);
  }
  v6 = CSingleViewShellExperience::EnsureUnboostCallback((CSingleViewShellExperience *)a1);
  if ( v6 < 0 )
  {
    v17 = 1123LL;
    goto LABEL_20;
  }
  v14 = (struct _TP_TIMER **)(a1 + 144);
  pftDueTime = (_FILETIME)-300000000LL;
  v15 = *(struct _TP_TIMER **)(a1 + 144);
  if ( v15
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_dbcc80de21d0b741db4b8e5637d74bc6_::_lambda_invoker_cdecl_,
                            (PVOID)a1,
                            0LL),
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
          a1 + 144,
          ThreadpoolTimer),
        (v15 = *v14) != 0LL) )
  {
    SetThreadpoolTimer(v15, &pftDueTime, 0, 0);
  }
LABEL_6:
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v8 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  Context = 0LL;
  v9 = (__int64)v8;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v18);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  result = Context;
  v11 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v11 > 5u )
  {
    result = (LPVOID)tlgKeywordOn(v11, 0x200000000000LL);
    if ( (_BYTE)result )
    {
      v20 = *(_BYTE *)(a1 + 140);
      LODWORD(v30) = 0;
      LOBYTE(v28) = v20;
      LOBYTE(pftDueTime.dwLowDateTime) = *(_BYTE *)(a1 + 141);
      LODWORD(v22) = v4;
      v24 = (__int64)StringRawBuffer;
      v25 = v9;
      return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                       v19,
                       (int)&dword_1804FEBD8,
                       (__int64)&v25,
                       (__int64)&v24,
                       (__int64)&v22,
                       (__int64)&pftDueTime,
                       (__int64)&v30,
                       (__int64)&v28);
    }
  }
  return result;
}
