/*
 * XREFs of _WPP_RECORDER_SF_qqi@36 @ 0x147E5B
 * Callers:
 *     _EditionUpdateInputTransformFromHitTest@24 @ 0x11A3E (_EditionUpdateInputTransformFromHitTest@24.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qqi(int a1, int a2, int a3, char a4, char a5, char a6, int a7)
{
  struct RECORDER_LOG__ *v7; // esi

  v7 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
      32,
      &a4,
      4,
      &a5,
      4,
      &a6,
      8,
      0);
  return _WppAutoLogTrace(v7, 4, 16, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, 32, &a4, 4, &a5, 4, &a6, 8, 0);
}
