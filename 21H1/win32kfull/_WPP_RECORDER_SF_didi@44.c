/*
 * XREFs of _WPP_RECORDER_SF_didi@44 @ 0x149DC0
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_didi(int a1, int a2, int a3, char a4, char a5, int a6, char a7, char a8, int a9)
{
  struct RECORDER_LOG__ *v9; // esi

  v9 = gFullLog;
  if ( ((unsigned int)&loc_80000 & WPP_GLOBAL_Control->Characteristics) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
      43,
      &a4,
      4,
      &a5,
      8,
      &a7,
      4,
      &a8);
  return _WppAutoLogTrace(v9, 2, 20, &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids, 43, &a4, 4, &a5, 8, &a7, 4, &a8);
}
