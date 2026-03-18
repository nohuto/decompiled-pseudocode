/*
 * XREFs of _xxxCallMsgFilter@8 @ 0x94CF8
 * Callers:
 *     _NtUserCallMsgFilter@8 @ 0x94C5A (_NtUserCallMsgFilter@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2 (-xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 * Callees:
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 */

int __fastcall xxxCallMsgFilter(unsigned int *a1, int a2)
{
  unsigned int v4; // eax
  int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]

  v4 = a1[1];
  if ( v4 == 576 || v4 == 283 || v4 == 281 )
    return 0;
  if ( ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x80u) != 0
    && xxxCallHook(0, a2, a1, 6u, v6, v7) )
  {
    return 1;
  }
  if ( ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 1) == 0 )
    return 0;
  return xxxCallHook(0, a2, a1, 0xFFFFFFFF, v6, v7);
}
