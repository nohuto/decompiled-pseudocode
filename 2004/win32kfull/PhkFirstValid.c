/*
 * XREFs of PhkFirstValid @ 0x1C0045FAC
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0039F7C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C0043AC0 (EditionLLMouseButtonHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0045E04 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C0045F20 (EditionKeyEventLLHook.c)
 *     xxxCallMouseHook @ 0x1C0048840 (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01D9F90 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01E74B0 (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01F0B3C (xxxPointerCallHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0046050 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 912);
  if ( (v3 || (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2 + 48)) != 0) && (*(_DWORD *)(v3 + 64) & 0x80u) != 0 )
    return PhkNextValid(v3);
  return v3;
}
