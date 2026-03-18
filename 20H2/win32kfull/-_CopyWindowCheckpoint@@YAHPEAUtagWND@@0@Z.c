/*
 * XREFs of ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0004878
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D1C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall _CopyWindowCheckpoint(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // eax
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp-10h]

  v3 = 0;
  Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
  if ( Prop )
  {
    v6 = *(_OWORD *)(Prop + 16);
    v11 = *(_OWORD *)Prop;
    v7 = *(_OWORD *)(Prop + 32);
    v8 = *(_DWORD *)(Prop + 48);
    v12 = v6;
    v14 = v8;
    v13 = v7;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      TransformRectBetweenCoordinateSpaces(&v11, &v11, a2, a1);
      TransformPointBetweenCoordinateSpaces(&v13, &v13, a2, a1);
      TransformPointBetweenCoordinateSpaces((char *)&v13 + 8, (char *)&v13 + 8, a2, a1);
    }
    v9 = CkptRestore(a2, &v11);
    if ( v9 )
    {
      v3 = 1;
      *(_OWORD *)v9 = v11;
      *(_OWORD *)(v9 + 16) = v12;
      *(_OWORD *)(v9 + 32) = v13;
      *(_DWORD *)(v9 + 48) = v14;
    }
  }
  return v3;
}
