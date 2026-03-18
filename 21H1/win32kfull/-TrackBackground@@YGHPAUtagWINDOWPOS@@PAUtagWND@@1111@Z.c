/*
 * XREFs of ?TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z @ 0x32AE4
 * Callers:
 *     ?TrackZorder@@YGPAUtagWND@@PAUtagWINDOWPOS@@PAU1@11PAPAUHWND__@@2@Z @ 0x32A60 (-TrackZorder@@YGPAUtagWND@@PAUtagWINDOWPOS@@PAU1@11PAPAUHWND__@@2@Z.c)
 * Callees:
 *     _CalcForegroundInsertAfter@4 @ 0x932A2 (_CalcForegroundInsertAfter@4.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     ?GetRootOwner@@YGPAUtagWND@@PAU1@@Z @ 0x979A6 (-GetRootOwner@@YGPAUtagWND@@PAU1@@Z.c)
 *     _FSwpTopmost@4 @ 0xA5E62 (_FSwpTopmost@4.c)
 *     ?IsLastTopMostWindow@@YGHPBUtagWND@@@Z @ 0xEA05C (-IsLastTopMostWindow@@YGHPBUtagWND@@@Z.c)
 */

int __userpurge TrackBackground@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWINDOWPOS *a3,
        struct tagWND *a4,
        struct tagWND *a5,
        struct tagWND *a6,
        struct tagWND *a7,
        struct tagWND *a8)
{
  int v10; // edx
  struct tagWND *LastTopMostWindow; // esi
  int v12; // ebx
  int v13; // edx
  const struct tagWND *v14; // [esp+0h] [ebp-10h]
  struct tagWND *v15; // [esp+0h] [ebp-10h]

  if ( !a3 )
    return 0;
  v10 = *(_DWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v10 + 264) & 2) != 0 )
  {
    if ( !_gptiForeground || *(_DWORD *)(v10 + 232) == *(_DWORD *)(_gptiForeground + 232) )
      return 0;
  }
  else if ( v10 == _gptiForeground )
  {
    return 0;
  }
  if ( !FSwpTopmost() || (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 16) & 8) != 0 )
    return 0;
  LastTopMostWindow = a4;
  if ( !a4 )
    LastTopMostWindow = (struct tagWND *)CalcForegroundInsertAfter(a1);
  v12 = 0;
  if ( !LastTopMostWindow )
    goto LABEL_14;
  if ( a6 && *(_DWORD *)(*(_DWORD *)(a1 + 8) + 236) == _gpqForeground && IsLastTopMostWindow(v14) )
    return 0;
  if ( !IsLastTopMostWindow(v14) && a5 == GetRootOwner(v15) )
  {
    v13 = *((_DWORD *)a5 + 2);
    if ( *(_DWORD *)(v13 + 796) )
    {
      if ( *(_DWORD *)(v13 + 236) == _gpqForeground && a5 == *(struct tagWND **)(_gpqForeground + 64) )
        LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(a1);
    }
  }
  if ( LastTopMostWindow )
    v12 = *(_DWORD *)LastTopMostWindow;
LABEL_14:
  *(_DWORD *)(a2 + 4) = v12;
  return 1;
}
