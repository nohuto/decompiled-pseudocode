/*
 * XREFs of _WPP_RECORDER_SF_qqD@32 @ 0x9D582
 * Callers:
 *     ?SetProcessFlags@@YGXPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z @ 0x9D4F4 (-SetProcessFlags@@YGXPAUtagW32JOB@@PAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qqD(int a1, int a2, int a3, char a4, char a5, char a6)
{
  struct RECORDER_LOG__ *v6; // esi

  v6 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
      21,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      0);
  return _WppAutoLogTrace(v6, 4, 13, &WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, 21, &a4, 4, &a5, 4, &a6, 4, 0);
}
