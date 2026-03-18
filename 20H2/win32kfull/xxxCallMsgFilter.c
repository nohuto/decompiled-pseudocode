/*
 * XREFs of xxxCallMsgFilter @ 0x1C01E673C
 * Callers:
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244B44 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, int a2)
{
  int v3; // r8d

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 == 576 || ((v3 - 281) & 0xFFFFFFFD) == 0 )
    return 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x80u) != 0
    && (unsigned int)xxxCallHook(a2, 0LL, a1, 6) )
  {
    return 1LL;
  }
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 1) != 0 )
    return xxxCallHook(a2, 0LL, a1, -1);
  else
    return 0LL;
}
