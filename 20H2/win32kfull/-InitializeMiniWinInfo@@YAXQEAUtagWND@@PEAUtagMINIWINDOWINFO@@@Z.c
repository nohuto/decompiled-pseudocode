/*
 * XREFs of ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C003D148
 * Callers:
 *     UserGetMiniWinInfo @ 0x1C0008E8C (UserGetMiniWinInfo.c)
 *     HintSpriteShape @ 0x1C003CE8C (HintSpriteShape.c)
 *     UpdateSprite @ 0x1C003CF2C (UpdateSprite.c)
 *     CreateSprite @ 0x1C00C685C (CreateSprite.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C003DE78 (ScaleDPIRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void __fastcall InitializeMiniWinInfo(struct tagWND *const a1, struct tagMINIWINDOWINFO *a2)
{
  char *v2; // rdi
  int v4; // ebp
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int16 ScaledLogPixels; // di

  v2 = (char *)a1 + 40;
  v4 = (_DWORD)a2 + 16;
  *(_OWORD *)a2 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  *((_DWORD *)a2 + 9) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  *((_DWORD *)a2 + 11) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
  *((_QWORD *)a2 + 6) = ***(_QWORD ***)(*((_QWORD *)a1 + 3) + 8LL);
  v6 = (_OWORD *)((char *)a2 + 56);
  v7 = (_OWORD *)*((_QWORD *)a1 + 27);
  if ( v7 )
  {
    *v6 = *v7;
    *(_OWORD *)((char *)a2 + 72) = v7[1];
    *(_OWORD *)((char *)a2 + 88) = v7[2];
    *(_OWORD *)((char *)a2 + 104) = v7[3];
  }
  else
  {
    memset(v6, 0, 0x40uLL);
  }
  v8 = (_DWORD *)((char *)a2 + 120);
  v9 = a1 - a2;
  v10 = 4LL;
  do
  {
    *v8 = *(_DWORD *)((char *)v8 + v9 + 104);
    ++v8;
    --v10;
  }
  while ( v10 );
  if ( W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)v2 + 288LL) & 0x4000000F) == 0x40000000 )
  {
    v14 = *(unsigned __int16 *)(*(_QWORD *)v2 + 284LL);
    if ( (_WORD)v14 != 96 )
    {
      ScaledLogPixels = GreGetScaledLogPixels(v14, v11, v12, v13);
      ScaleDPIRect((_DWORD)a2, (_DWORD)a2, ScaledLogPixels, 96, 0LL, 0LL);
      ScaleDPIRect(v4, v4, ScaledLogPixels, 96, 0LL, 0LL);
    }
  }
}
