/*
 * XREFs of ??$WindowEventDispatcher_CachedView@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18005A898
 * Callers:
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18005A170 (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_CachedView<unsigned short const *,unsigned int>(
        const WCHAR **a1,
        int *a2)
{
  ULONG result; // eax
  __int64 v5; // r10
  const WCHAR *v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  REGHANDLE v9; // rcx
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  const WCHAR *v14; // [rsp+48h] [rbp-19h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  const WCHAR *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int *v23; // [rsp+98h] [rbp+37h]
  __int64 v24; // [rsp+A0h] [rbp+3Fh]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805A0260;
    qword_1805A0260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0278 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0260, qword_1805A0278, v10);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805A0260);
  }
  result = (unsigned int)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v12 = *a2;
    v6 = *a1;
    v14 = v6;
    v23 = &v12;
    v24 = 4LL;
    if ( v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
      v8 = 2 * v7 + 2;
    }
    else
    {
      v6 = &word_1804BE2A8;
      v8 = 2;
    }
    v20 = v6;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    v21 = v8;
    v22 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_1804E87EB;
    UserData.Reserved = 2;
    v9 = *(_QWORD *)(v5 + 32);
    v18 = 62;
    v19 = 1;
    LODWORD(v14) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return result;
}
