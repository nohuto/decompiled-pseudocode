/*
 * XREFs of _SetDeepDelayableVisRITTimer@16 @ 0x77F10
 * Callers:
 *     ?zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z @ 0x77D78 (-zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 */

int __fastcall SetDeepDelayableVisRITTimer(int a1, unsigned int a2, int a3, int a4)
{
  if ( (gdwRITdemonLockState & 1) != 0 )
    a2 = 864000000;
  return InternalSetTimer(
           0,
           (char *)gtmridAniCursor,
           a2,
           (int)zzzAnimateCursor,
           (gdwRITdemonLockState & 1) != 0 ? 0x36EE80 : 0,
           20);
}
