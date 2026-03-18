/*
 * XREFs of _WPP_RECORDER_SF_L@24 @ 0x15A329
 * Callers:
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_L(int a1, int a2, int a3, char a4)
{
  struct RECORDER_LOG__ *v4; // esi
  int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]
  int savedregs; // [esp+Ch] [ebp+0h]

  v4 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, void *, int, char *, int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
      14,
      &a4,
      4,
      0);
  return _WppAutoLogTrace(
           v4,
           4,
           19,
           &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
           14,
           &a4,
           4,
           0,
           v6,
           v7,
           v8,
           savedregs);
}
