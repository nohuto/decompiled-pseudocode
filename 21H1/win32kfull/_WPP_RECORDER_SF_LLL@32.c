/*
 * XREFs of _WPP_RECORDER_SF_LLL@32 @ 0x15A407
 * Callers:
 *     _ValidateDelegatePointerList@16 @ 0x15A1BB (_ValidateDelegatePointerList@16.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_LLL(int a1, int a2, int a3, char a4, char a5, char a6)
{
  struct RECORDER_LOG__ *v6; // esi

  v6 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
      a2,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      0);
  return _WppAutoLogTrace(v6, 4, 19, &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids, a2, &a4, 4, &a5, 4, &a6, 4, 0);
}
