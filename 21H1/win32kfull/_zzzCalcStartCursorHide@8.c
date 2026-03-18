/*
 * XREFs of _zzzCalcStartCursorHide@8 @ 0x744FA
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _zzzWakeInputIdle@4 @ 0x4584E (_zzzWakeInputIdle@4.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _xxxHungAppDemon@16 @ 0x7336E (_xxxHungAppDemon@16.c)
 *     _xxxGetInputEvent@4 @ 0x82D1E (_xxxGetInputEvent@4.c)
 *     _zzzInitTask@48 @ 0x142324 (_zzzInitTask@48.c)
 *     _zzzShowStartGlass@4 @ 0x142781 (_zzzShowStartGlass@4.c)
 * Callees:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NPAU_EPROCESS@@@Z @ 0xA22AC (-IsProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NPAU_EPROCESS@@@Z.c)
 */

int __stdcall zzzCalcStartCursorHide(int a1, int a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  struct _W32PROCESS **v4; // esi
  struct _W32PROCESS *v5; // ecx
  int v7; // edx
  unsigned int v8; // ebx
  struct _W32PROCESS **v9; // eax
  struct _W32PROCESS *i; // eax
  int v11; // esi
  unsigned int v12; // edx
  struct _EPROCESS *v13; // [esp+0h] [ebp-10h]
  unsigned int *v14; // [esp+18h] [ebp+8h]

  v2 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v11 = MEMORY[0xFFDF0324];
    v12 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v11 = MEMORY[0xFFDF0324];
        v12 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v2 = MEMORY[0xFFDF0004];
    }
    v3 = v2 * (v11 << 8) + (((unsigned int)v2 * (unsigned __int64)v12) >> 24);
  }
  else
  {
    v3 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  if ( a1 )
  {
    if ( UmfdHostLifeTimeManager::IsProcessUmfdHost(v13) )
      __debugbreak();
    if ( (*(_BYTE *)(a1 + 8) & 4) == 0 )
    {
      for ( i = gpwpCalcFirst; i; i = (struct _W32PROCESS *)*((_DWORD *)i + 5) )
      {
        if ( i == (struct _W32PROCESS *)a1 )
          goto LABEL_23;
      }
      *(_DWORD *)(a1 + 20) = gpwpCalcFirst;
      gpwpCalcFirst = (struct _W32PROCESS *)a1;
    }
LABEL_23:
    *(_DWORD *)(a1 + 8) |= 4u;
    *(_DWORD *)(a1 + 16) = v3 + a2;
  }
  gtimeStartCursorHide = 0;
  v4 = &gpwpCalcFirst;
  v5 = gpwpCalcFirst;
  if ( gpwpCalcFirst )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v5 + 2);
      v14 = (unsigned int *)((char *)v5 + 8);
      if ( (v7 & 6) != 4 )
        break;
      v8 = *((_DWORD *)v5 + 4);
      if ( gtimeStartCursorHide < v8 )
        gtimeStartCursorHide = *((_DWORD *)v5 + 4);
      v9 = (struct _W32PROCESS **)((char *)v5 + 20);
      v5 = (struct _W32PROCESS *)*((_DWORD *)v5 + 5);
      if ( (int)(v3 - v8) > 0 )
      {
        *v14 = v7 & 0xFFFFFFFB;
        goto LABEL_13;
      }
      v4 = v9;
LABEL_14:
      if ( !v5 )
      {
        if ( gtimeStartCursorHide > v3 )
          return zzzUpdateCursorImage();
        goto LABEL_5;
      }
    }
    v5 = (struct _W32PROCESS *)*((_DWORD *)v5 + 5);
LABEL_13:
    *v4 = v5;
    goto LABEL_14;
  }
LABEL_5:
  gtimeStartCursorHide = 0;
  return zzzUpdateCursorImage();
}
