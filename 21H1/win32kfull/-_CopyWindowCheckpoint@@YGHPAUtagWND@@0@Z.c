/*
 * XREFs of ?_CopyWindowCheckpoint@@YGHPAUtagWND@@0@Z @ 0xC2790
 * Callers:
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall _CopyWindowCheckpoint(int a1, int a2)
{
  const void *Prop; // eax
  void *v4; // eax
  _BYTE v7[52]; // [esp+10h] [ebp-38h] BYREF

  Prop = (const void *)_GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
  if ( !Prop )
    return 0;
  qmemcpy(v7, Prop, sizeof(v7));
  if ( IsWindowDesktopComposed(a1) )
  {
    TransformRectBetweenCoordinateSpaces(v7, v7, a2, a1);
    TransformPointBetweenCoordinateSpaces(&v7[32], &v7[32], a2, a1);
    TransformPointBetweenCoordinateSpaces(&v7[40], &v7[40], a2, a1);
  }
  v4 = CkptRestore(a2, (int)v7);
  if ( !v4 )
    return 0;
  qmemcpy(v4, v7, 0x34u);
  return 1;
}
