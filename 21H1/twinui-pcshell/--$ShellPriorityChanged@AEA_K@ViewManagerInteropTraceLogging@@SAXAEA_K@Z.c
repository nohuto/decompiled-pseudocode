/*
 * XREFs of ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x180058B98
 * Callers:
 *     ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180055760 (-UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ.c)
 *     ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x180056850 (-BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 *     ?BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z @ 0x1802806EC (-BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z.c)
 *     ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x180287214 (-UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(int *a1)
{
  ULONG result; // eax
  __int64 v3; // rcx
  int v4; // eax
  unsigned __int16 *v5; // rax
  REGHANDLE v6; // rcx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  int v9; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  unsigned int v11; // [rsp+40h] [rbp+7h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+1Fh] BYREF
  void *v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+74h] [rbp+3Bh]
  int *v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+80h] [rbp+47h]
  int v19; // [rsp+84h] [rbp+4Bh]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805A0260;
    qword_1805A0260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0278 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0260, qword_1805A0278, v7);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805A0260);
  }
  result = (unsigned int)Context;
  v3 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    v19 = 0;
    EventDescriptor.Keyword = 0LL;
    v9 = v4;
    v17 = &v9;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v5 = *(unsigned __int16 **)(v3 + 8);
    v6 = *(_QWORD *)(v3 + 32);
    UserData.Ptr = (ULONGLONG)v5;
    v18 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v5;
    v14 = &unk_1804E7BD0;
    UserData.Reserved = 2;
    v15 = 39;
    v16 = 1;
    v11 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return result;
}
