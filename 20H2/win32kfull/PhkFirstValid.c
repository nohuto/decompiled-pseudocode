/*
 * XREFs of PhkFirstValid @ 0x1C0074E6C
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C002DCDC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0074CC4 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C0074DE0 (EditionKeyEventLLHook.c)
 *     EditionLLMouseButtonHook @ 0x1C00780A0 (EditionLLMouseButtonHook.c)
 *     xxxCallMouseHook @ 0x1C0121ECC (xxxCallMouseHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01D92D0 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01E67F0 (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01EFECC (xxxPointerCallHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0074F10 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 920);
  if ( (v3 || (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8LL * a2 + 48)) != 0) && (*(_DWORD *)(v3 + 64) & 0x80u) != 0 )
    return PhkNextValid(v3);
  return v3;
}
