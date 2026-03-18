/*
 * XREFs of ?ValidateZorder@@YGHPAUtagCVR@@@Z @ 0x93140
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     _PWInsertAfter@4 @ 0x9324A (_PWInsertAfter@4.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     ?GetLastNonBottomMostWindow@@YGPAUtagWND@@PAU1@H@Z @ 0x93408 (-GetLastNonBottomMostWindow@@YGPAUtagWND@@PAU1@H@Z.c)
 *     _HWInsertAfter@4 @ 0xA50E8 (_HWInsertAfter@4.c)
 */

char __thiscall ValidateZorder(_DWORD *this)
{
  struct tagWND *v2; // edi
  int v3; // eax
  struct tagWND *v4; // ecx
  struct tagWND *v5; // esi
  int v6; // eax
  int v7; // eax
  char v8; // dl
  struct tagWND *LastTopMostWindow; // eax
  int v12; // eax
  struct tagWND *LastNonBottomMostWindow; // eax
  struct tagWND *v14; // [esp+0h] [ebp-10h]
  int v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+Ch] [ebp-4h]

  v2 = (struct tagWND *)_HMObjectFromHandle(*this);
  if ( *(char *)(*((_DWORD *)v2 + 5) + 11) < 0 )
    return 1;
  v3 = PWInsertAfter(this[1]);
  v4 = (struct tagWND *)v3;
  if ( this[1] )
  {
    if ( !v3 )
      return 1;
  }
  if ( v3 != 1 )
  {
    v5 = *(struct tagWND **)(*((_DWORD *)v2 + 14) + 60);
    if ( v3 )
    {
      v6 = *(_DWORD *)(v3 + 20);
      v16 = v6;
      if ( *(char *)(v6 + 11) >= 0 )
      {
        if ( (*(_BYTE *)(v6 + 12) & 0x20) != 0 )
        {
          LastNonBottomMostWindow = GetLastNonBottomMostWindow(v14, v15);
          this[1] = HWInsertAfter(LastNonBottomMostWindow);
          return 0;
        }
        v7 = *((_DWORD *)v2 + 5);
        v8 = *(_BYTE *)(v7 + 16) & 8;
        if ( (*(_BYTE *)(v7 + 11) & 4) != 0 )
          v8 ^= 8u;
        if ( v8 == (*(_BYTE *)(v16 + 16) & 8) )
          goto LABEL_11;
        LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(v2);
        v4 = LastTopMostWindow;
        if ( LastTopMostWindow != v2 )
        {
          if ( LastTopMostWindow )
            v12 = *(_DWORD *)LastTopMostWindow;
          else
            v12 = 0;
          this[1] = v12;
LABEL_11:
          if ( v5 == v2 )
            return 0;
          while ( v5 )
          {
            if ( *((struct tagWND **)v5 + 12) == v2 )
              return v4 == v5;
            v5 = (struct tagWND *)*((_DWORD *)v5 + 12);
          }
        }
      }
      return 1;
    }
    if ( *(_DWORD *)(*((_DWORD *)v2 + 5) + 148) == 1 )
    {
      while ( v5 && *(_DWORD *)(*((_DWORD *)v5 + 5) + 148) != 1 )
        v5 = (struct tagWND *)*((_DWORD *)v5 + 12);
    }
    return v5 == v2;
  }
  if ( (*(_BYTE *)(*((_DWORD *)v2 + 5) + 12) & 0x20) != 0 )
    return *((_DWORD *)v2 + 12) == 0;
  return v2 == GetLastNonBottomMostWindow(v14, v15);
}
