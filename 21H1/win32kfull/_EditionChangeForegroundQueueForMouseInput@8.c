/*
 * XREFs of _EditionChangeForegroundQueueForMouseInput@8 @ 0x147787
 * Callers:
 *     <none>
 * Callees:
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904 (-MSGLUA_GPQFOREGROUND@@YGXXZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14183D (-xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

int __stdcall EditionChangeForegroundQueueForMouseInput(int a1, int a2)
{
  struct tagWND *v2; // ebx
  struct tagWND *CompositionInputWindowUIOwner; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // [esp+8h] [ebp-Ch] BYREF
  struct tagWND *v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]
  char v10; // [esp+1Fh] [ebp+Bh]

  v2 = *(struct tagWND **)(a1 + 80);
  if ( a2 )
  {
    v10 = 1;
    if ( !(unsigned __int8)CheckAccess(a2, *(_DWORD *)(*((_DWORD *)v2 + 2) + 236) + 316) )
    {
      EtwTraceUIPIInputError(
        _gptiCurrent,
        *((_DWORD *)v2 + 2),
        *(_DWORD *)(*((_DWORD *)v2 + 2) + 236),
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 2) + 236) + 316),
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 2) + 236) + 320),
        1);
      return 0;
    }
  }
  else
  {
    v10 = 0;
  }
  CompositionInputWindowUIOwner = v2;
  if ( IsIndependentInputWindow(v2) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v2);
    if ( !CompositionInputWindowUIOwner )
      return 0;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(GetNonChildAncestor((int)CompositionInputWindowUIOwner) + 20) + 19) & 8) == 0
    && (*(_BYTE *)(*((_DWORD *)CompositionInputWindowUIOwner + 5) + 145) & 0x10) == 0 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    if ( CompositionInputWindowUIOwner != v2 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v7 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v7;
      v8 = CompositionInputWindowUIOwner;
      HMLockObject(CompositionInputWindowUIOwner);
    }
    xxxForceForegroundWindowNoRestoreFocus((int)CompositionInputWindowUIOwner, 0);
    if ( CompositionInputWindowUIOwner != v2 )
      ThreadUnlock1();
    if ( v10 && _gpqForeground && !(unsigned __int8)CheckAccess(a2, _gpqForeground + 316) )
    {
      MSGLUA_GPQFOREGROUND();
      return 0;
    }
  }
  return 1;
}
