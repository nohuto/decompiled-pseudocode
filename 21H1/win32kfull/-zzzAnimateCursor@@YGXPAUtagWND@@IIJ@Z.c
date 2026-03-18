/*
 * XREFs of ?zzzAnimateCursor@@YGXPAUtagWND@@IIJ@Z @ 0x77D78
 * Callers:
 *     ?AdjustRITDelayableTimers@@YGXH@Z @ 0xAF38E (-AdjustRITDelayableTimers@@YGXH@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748E2 (-FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _SetDeepDelayableVisRITTimer@16 @ 0x77F10 (_SetDeepDelayableVisRITTimer@16.c)
 */

void __stdcall zzzAnimateCursor(struct tagWND *a1, unsigned int a2, unsigned int a3, int a4)
{
  struct tagCURSOR *v4; // eax
  struct tagCURSOR *v5; // edi
  int v6; // ecx
  int v7; // esi
  int v8; // ebx
  signed int v9; // esi
  int v10; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  signed int v13; // ebx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ebx
  unsigned int v19; // edx
  int v20; // edi
  unsigned int v21; // edx
  signed int v22; // [esp+10h] [ebp-18h]
  int v23; // [esp+14h] [ebp-14h]
  int v24; // [esp+18h] [ebp-10h]
  _DWORD v25[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v25[2] = 0;
  v4 = FixupCursorForMonitor(gpcurLogCurrent);
  v5 = v4;
  if ( !v4 || (*((_BYTE *)v4 + 44) & 8) == 0 || !*((_DWORD *)v4 + 16) )
  {
    gdwLastAniTick = 0;
    return;
  }
  if ( gdwLastAniTick )
  {
    v6 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v18 = MEMORY[0xFFDF0324];
      v19 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v18 = MEMORY[0xFFDF0324];
          v19 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v5 = v4;
        v6 = MEMORY[0xFFDF0004];
      }
      v7 = v6 * (v18 << 8) + (((unsigned int)v6 * (unsigned __int64)v19) >> 24);
    }
    else
    {
      v7 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    v8 = *((_DWORD *)v5 + 17);
    v9 = v7 - 100 * *(_DWORD *)(*((_DWORD *)v5 + 16) + 4 * v8) / 6u - gdwLastAniTick;
    v22 = v9;
    if ( v9 >= 0 )
      goto LABEL_8;
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v8 = *((_DWORD *)v4 + 17);
  }
  v22 = 0;
LABEL_8:
  v10 = v8 + 1;
  if ( v10 >= *((_DWORD *)v5 + 13) )
    v10 = 0;
  *((_DWORD *)v5 + 17) = v10;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v25[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v25;
  v25[1] = v5;
  HMLockObject(v5);
  if ( a3 )
    zzzUpdateCursorImage();
  v24 = *((_DWORD *)v5 + 16);
  v13 = 100 * *(_DWORD *)(v24 + 4 * v10) / 6u;
  if ( v13 <= v9 )
  {
    v16 = *((_DWORD *)v5 + 13);
    v17 = *((_DWORD *)v5 + 17);
    v23 = v16;
    do
    {
      v9 -= v13;
      if ( ++v17 >= v16 )
        v17 = 0;
      *((_DWORD *)v5 + 17) = v17;
      v13 = 100 * *(_DWORD *)(v24 + 4 * v17) / 6u;
      v16 = v23;
    }
    while ( v13 <= v9 );
    v22 = v9;
  }
  ThreadUnlock1();
  v14 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v20 = MEMORY[0xFFDF0324];
    v21 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v20 = MEMORY[0xFFDF0324];
        v21 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v9 = v22;
      v14 = MEMORY[0xFFDF0004];
    }
    v15 = v14 * (v20 << 8) + (((unsigned int)v14 * (unsigned __int64)v21) >> 24);
  }
  else
  {
    v15 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  gdwLastAniTick = v15 - v9;
  gtmridAniCursor = SetDeepDelayableVisRITTimer(v14, v14);
}
