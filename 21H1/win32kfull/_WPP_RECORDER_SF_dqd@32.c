/*
 * XREFs of _WPP_RECORDER_SF_dqd@32 @ 0xAFCB4
 * Callers:
 *     _NtUserSendInput@12 @ 0xAF922 (_NtUserSendInput@12.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_dqd(int a1, int a2, int a3, char a4, char a5, char a6)
{
  struct RECORDER_LOG__ *v6; // esi

  v6 = gFullLog;
  if ( ((unsigned int)&loc_80000 & WPP_GLOBAL_Control->Characteristics) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids,
      10,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      0);
  return _WppAutoLogTrace(v6, 4, 20, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids, 10, &a4, 4, &a5, 4, &a6, 4, 0);
}
