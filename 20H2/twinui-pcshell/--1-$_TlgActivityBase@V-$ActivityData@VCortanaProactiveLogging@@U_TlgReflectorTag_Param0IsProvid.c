/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$0A@@@IEAA@XZ @ 0x1801B7108
 * Callers:
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801B7048 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1801B7048.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$0A@@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B6B48 (--$_tlgWriteActivityAutoStop@$0A@$0A@@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

int __fastcall _TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,0,0>::~_TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,0,0>(
        __int64 a1)
{
  _UNKNOWN **v1; // rax
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  WINBOOL v6; // [rsp+30h] [rbp+8h] BYREF
  _DWORD **v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = &retaddr;
  if ( *(_DWORD *)a1 == 1 )
  {
    v7 = 0LL;
    *(_DWORD *)a1 = 2;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
    {
      v7 = (_DWORD **)qword_1805CC310;
      qword_1805CC310[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC328 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC310, qword_1805CC328, v3);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CC310);
    }
    LODWORD(v1) = _tlgWriteActivityAutoStop<0,0>(v7[1], (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
  return (int)v1;
}
