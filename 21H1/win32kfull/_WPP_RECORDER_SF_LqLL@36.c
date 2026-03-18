/*
 * XREFs of _WPP_RECORDER_SF_LqLL@36 @ 0x15A481
 * Callers:
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_LqLL(int a1, int a2, int a3, char a4, char a5, char a6, char a7)
{
  struct RECORDER_LOG__ *v7; // esi

  v7 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
      16,
      &a4,
      4,
      &a5,
      4,
      &a6,
      4,
      &a7);
  return _WppAutoLogTrace(v7, 4, 19, &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids, 16, &a4, 4, &a5, 4, &a6, 4, &a7);
}
