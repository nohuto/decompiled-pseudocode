/*
 * XREFs of ?GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z @ 0xF4610
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z @ 0xF49FC (-UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 *     ?GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z @ 0xF479E (-GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z.c)
 */

char __userpurge GetLayeredRegion@<al>(_DWORD *a1@<ecx>, struct tagWND *a2, HRGN a3, bool *a4)
{
  int v4; // esi
  char v5; // bl
  int WindowRgn; // eax
  int v7; // edi
  PKTHREAD CurrentThread; // eax
  int v9; // esi
  PKTHREAD v10; // eax
  PKTHREAD v11; // eax
  int v12; // eax
  void *TopLevelWindow; // eax
  struct tagWND *v15; // [esp-4h] [ebp-18h]
  HRGN v16; // [esp+0h] [ebp-14h]
  unsigned int v17; // [esp+4h] [ebp-10h]

  v4 = (int)a1;
  v5 = 1;
  if ( _IsTopLevelWindow(a1) )
  {
    WindowRgn = GetWindowRgn((struct tagWND *)0x20, v16, v17);
    if ( !WindowRgn )
    {
      v5 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v7 = 2 * (*(_BYTE *)(*(_DWORD *)(v4 + 20) + 23) & 4 | 1);
    CurrentThread = KeGetCurrentThread();
    v9 = v7;
    if ( W32GetThreadWin32Thread(CurrentThread) )
    {
      v10 = KeGetCurrentThread();
      if ( *(_DWORD *)(W32GetThreadWin32Thread(v10) + 248) )
      {
        v11 = KeGetCurrentThread();
        if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v11) + 248) + 4) + 32) & 1) != 0 )
        {
          v12 = *(_DWORD *)(a1[5] + 184);
          if ( (v12 & 0xF) == 0 && (v12 & 0x40000000) != 0 )
            v9 = v7 | 0x20;
        }
      }
    }
    v15 = (struct tagWND *)v9;
    v4 = (int)a1;
    WindowRgn = GetWindowRgn(v15, v16, v17);
  }
  LOBYTE(WindowRgn) = WindowRgn == 1
                   && (TopLevelWindow = (void *)_GetTopLevelWindow(v4)) != 0
                   && _GhostWindowFromHungWindow(TopLevelWindow);
LABEL_16:
  *(_BYTE *)a2 = WindowRgn;
  return v5;
}
