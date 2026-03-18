/*
 * XREFs of _WPP_RECORDER_SF_DDD@32 @ 0x17FF96
 * Callers:
 *     ?xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z @ 0x17F3F5 (-xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_DDD(int a1, int a2, int a3, char a4, char a5, char a6)
{
  struct RECORDER_LOG__ *v6; // esi

  v6 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
      60,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      0);
  return _WppAutoLogTrace(v6, 4, 14, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, 60, &a4, 4, &a5, 4, &a6, 4, 0);
}
