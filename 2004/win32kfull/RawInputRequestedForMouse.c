/*
 * XREFs of RawInputRequestedForMouse @ 0x1C0039F54
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x1C0039980 (EditionPostRawMouseInputMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0039F7C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     <none>
 */

__int64 RawInputRequestedForMouse()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gHidCounters[1] || HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    return 1;
  return v0;
}
