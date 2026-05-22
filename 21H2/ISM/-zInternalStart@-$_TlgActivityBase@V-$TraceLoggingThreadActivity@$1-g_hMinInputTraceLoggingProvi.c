/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x1800A2AF4
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A1628 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(
        __int64 a1)
{
  _OWORD *v1; // rdi
  ULONG result; // eax

  v1 = (_OWORD *)(a1 + 8);
  if ( (unsigned int)dword_1802063F0 <= 5 )
  {
    *v1 = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, (LPGUID)(a1 + 8));
    *(_OWORD *)(a1 + 24) = *v1;
    result = EventActivityIdControl(4u, (LPGUID)(a1 + 24));
    *(_BYTE *)(a1 + 4) = 1;
  }
  *(_DWORD *)a1 = 1;
  return result;
}
