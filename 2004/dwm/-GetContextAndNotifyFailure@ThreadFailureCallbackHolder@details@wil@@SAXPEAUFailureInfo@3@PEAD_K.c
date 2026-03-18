/*
 * XREFs of ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x140005F70
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x140006040 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1400063D0 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x1400064F0 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(
        struct wil::FailureInfo *a1,
        char *a2,
        unsigned __int64 a3)
{
  char v3; // bp
  struct wil::details::ThreadFailureCallbackHolder **Local; // rbx
  struct wil::details::ThreadFailureCallbackHolder *v8; // rbx
  char v9; // al

  v3 = 0;
  *a2 = 0;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (struct wil::details::ThreadFailureCallbackHolder **)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal();
  else
    Local = 0LL;
  if ( Local && *Local )
  {
    *a2 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(a1, *Local, a2, a3) )
      *((_QWORD *)a1 + 8) = a2;
    v8 = *Local;
    do
    {
      v9 = (***((__int64 (__fastcall ****)(_QWORD, struct wil::FailureInfo *))v8 + 1))(*((_QWORD *)v8 + 1), a1);
      v8 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v8 + 2);
      v3 |= v9;
    }
    while ( v8 );
  }
  if ( wil::details::g_pfnTelemetryCallback )
    wil::details::g_pfnTelemetryCallback(v3, a1);
}
