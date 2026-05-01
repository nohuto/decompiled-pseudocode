/*
 * XREFs of ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18004654C
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180044B20 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800816FC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1800466C4 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180046AB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x18007500C (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@45@Z @ 0x180472E3C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U3@@-$_tlgWrit.c)
 */

char __fastcall CSingleViewShellExperience::BoostPriority(__int64 a1, int a2)
{
  int v4; // eax
  PCWSTR StringRawBuffer; // rdi
  PCWSTR v6; // rax
  __int64 v7; // r14
  char result; // al
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  struct _TP_TIMER **v12; // rdi
  struct _TP_TIMER *v13; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v15; // rdx
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v17; // ecx
  char v18; // al
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-18h] BYREF
  __int64 v23; // [rsp+68h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  struct _FILETIME pftDueTime; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+40h] BYREF
  WINBOOL fPending; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_6;
    if ( (*(_BYTE *)(a1 + 132) & 0x20) != 0 )
      goto LABEL_6;
    if ( *(_BYTE *)(a1 + 140) )
      goto LABEL_6;
    *(_BYTE *)(a1 + 140) = 1;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v4 >= 0 )
      goto LABEL_6;
    v15 = 1191LL;
LABEL_20:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4,
      v19);
    goto LABEL_6;
  }
  CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1);
  if ( !*(_BYTE *)(a1 + 141) )
  {
    v10 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 120LL))(v10, a1);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x46F,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v11,
        v19);
  }
  v4 = CSingleViewShellExperience::EnsureUnboostCallback((CSingleViewShellExperience *)a1);
  if ( v4 < 0 )
  {
    v15 = 1138LL;
    goto LABEL_20;
  }
  v12 = (struct _TP_TIMER **)(a1 + 144);
  pftDueTime = (struct _FILETIME)-300000000LL;
  v13 = *(struct _TP_TIMER **)(a1 + 144);
  if ( v13
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_a133ffc3bd012faec39012c4437de407_::_lambda_invoker_cdecl_,
                            (PVOID)a1,
                            0LL),
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
          a1 + 144,
          ThreadpoolTimer),
        (v13 = *v12) != 0LL) )
  {
    SetThreadpoolTimer(v13, &pftDueTime, 0, 0);
  }
LABEL_6:
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v6 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  Context = 0LL;
  v7 = (__int64)v6;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_1805CC2E8;
    qword_1805CC2E8 = &ShellScreenClippingLogging::`vftable';
    qword_1805CC300 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC2E8, qword_1805CC300, v16);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805CC2E8);
  }
  result = (char)Context;
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u )
  {
    result = tlgKeywordOn((__int64)v9, 0x200000000000LL);
    if ( result )
    {
      v18 = *(_BYTE *)(a1 + 140);
      LODWORD(v28) = 0;
      LOBYTE(v26) = v18;
      LOBYTE(pftDueTime.dwLowDateTime) = *(_BYTE *)(a1 + 141);
      LODWORD(v20) = a2;
      v22 = (__int64)StringRawBuffer;
      v23 = v7;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
               v17,
               (int)&dword_18052724C,
               (__int64)&v23,
               (__int64)&v22,
               (__int64)&v20,
               (__int64)&pftDueTime,
               (__int64)&v28,
               (__int64)&v26);
    }
  }
  return result;
}
