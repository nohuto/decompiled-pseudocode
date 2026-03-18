/*
 * XREFs of _xxxHungAppDemon@16 @ 0x7336E
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z @ 0x6FC58 (-VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     _IdleTimerProc@0 @ 0x73DA6 (_IdleTimerProc@0.c)
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 *     _ProcessHungWindow@4 @ 0xC2576 (_ProcessHungWindow@4.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 */

struct tagWND *__stdcall xxxHungAppDemon(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned int v5; // esi
  struct tagWND *result; // eax
  struct tagWND *v7; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // eax
  int v11; // esi
  unsigned int v12; // edx
  int v13; // [esp+0h] [ebp-20h]
  int v14; // [esp+0h] [ebp-20h]
  unsigned int *v15; // [esp+4h] [ebp-1Ch]
  unsigned int *v16; // [esp+4h] [ebp-1Ch]
  unsigned int v17; // [esp+Ch] [ebp-14h] BYREF
  int v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch] BYREF
  struct tagWND *v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v19 = 0;
  v20 = 0;
  v21 = 0;
  IdleTimerProc();
  v4 = MEMORY[0xFFDF0004];
  v18 = MEMORY[0xFFDF0004];
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
      v4 = v18;
    }
    v5 = (((unsigned int)v4 * (unsigned __int64)v12) >> 24) + v4 * (v11 << 8);
  }
  else
  {
    v5 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  if ( v5 >= gtimeStartCursorHide )
    zzzCalcStartCursorHide(0, 0);
  result = (struct tagWND *)_grpdeskRitInput;
  if ( _grpdeskRitInput )
  {
    result = *(struct tagWND **)(_grpdeskRitInput + 4);
    if ( *((_DWORD *)result + 3) )
    {
      v17 = 0;
      for ( result = VWPLNextBase(_gpvwplHungRedraw, 0, &v17, _gpvwplHungRedraw, _gpvwplHungRedraw, v13, v15);
            ;
            result = VWPLNextBase(_gpvwplHungRedraw, v7, &v17, _gpvwplHungRedraw, _gpvwplHungRedraw, v14, v16) )
      {
        v7 = result;
        if ( !result )
          break;
        if ( IsHungWindow(result) )
        {
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v19 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v19;
          v20 = v7;
          if ( v7 )
            HMLockObject(v7);
          v10 = *((_DWORD *)v7 + 5);
          if ( (*(_BYTE *)(v10 + 11) & 0x10) != 0 )
          {
            ClearHungFlag((struct tagVWPL **)v7, 0x310u);
            ProcessHungWindow(v7);
            v10 = *((_DWORD *)v7 + 5);
          }
          if ( (*(_BYTE *)(v10 + 11) & 8) != 0 )
          {
            ClearHungFlag((struct tagVWPL **)v7, 0x308u);
            xxxRedrawHungWindow(v7, 0);
          }
          ThreadUnlock1();
        }
      }
    }
  }
  return result;
}
