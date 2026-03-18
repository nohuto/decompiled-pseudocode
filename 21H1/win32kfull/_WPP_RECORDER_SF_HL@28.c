/*
 * XREFs of _WPP_RECORDER_SF_HL@28 @ 0x15A2BB
 * Callers:
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_HL(int a1, int a2, int a3, char a4, char a5)
{
  struct RECORDER_LOG__ *v5; // esi
  int v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+4h] [ebp-8h]

  v5 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, void *, int, char *, int, char *, int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
      12,
      &a4,
      2,
      &a5,
      4,
      0);
  return _WppAutoLogTrace(v5, 4, 19, &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids, 12, &a4, 2, &a5, 4, 0, v7, v8);
}
