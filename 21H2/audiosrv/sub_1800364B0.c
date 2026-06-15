/*
 * XREFs of sub_1800364B0 @ 0x1800364B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180133808 @ 0x180133808 (sub_180133808.c)
 */

void __fastcall sub_1800364B0(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, unsigned __int64 Timer)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx

  v3 = Context;
  if ( (unsigned int)dword_18019C4F0 > 5
    && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C4F0, 0LL, Timer) )
  {
    sub_180133808(v4, &unk_18016CA32);
  }
  v3[29] = 0LL;
  LOBYTE(Context) = 1;
  *((_DWORD *)v3 + 46) = 5;
  *((_BYTE *)v3 + 208) = 1;
  sub_180036510(v3, Context, Timer);
}
