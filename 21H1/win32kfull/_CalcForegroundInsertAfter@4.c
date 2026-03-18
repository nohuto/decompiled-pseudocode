/*
 * XREFs of _CalcForegroundInsertAfter@4 @ 0x932A2
 * Callers:
 *     ?TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z @ 0x32AE4 (-TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z @ 0x32CDC (-CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z @ 0x93274 (-CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     ?CheckOnTop@@YGHPAUtagTHREADINFO@@PAUtagWND@@I@Z @ 0x14CE05 (-CheckOnTop@@YGHPAUtagTHREADINFO@@PAUtagWND@@I@Z.c)
 * Callees:
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     ?GetLastNonBottomMostWindow@@YGPAUtagWND@@PAU1@H@Z @ 0x93408 (-GetLastNonBottomMostWindow@@YGPAUtagWND@@PAU1@H@Z.c)
 */

struct tagWND *__thiscall CalcForegroundInsertAfter(struct tagWND *this)
{
  int v2; // esi
  struct tagWND *LastNonBottomMostWindow; // eax
  struct tagWND *v4; // edx
  int v5; // eax
  int v7; // ebx
  struct tagWND *v8; // esi
  struct tagWND *v9; // ecx
  _BYTE *v10; // eax
  char v11; // ah
  int v12; // eax
  int v13; // esi
  int v14; // eax
  struct tagWND *v15; // [esp+0h] [ebp-14h]
  int v16; // [esp+4h] [ebp-10h]
  struct tagWND *v17; // [esp+10h] [ebp-4h]

  v2 = *((_DWORD *)this + 5);
  if ( (*(_BYTE *)(v2 + 12) & 0x20) != 0 )
  {
    LastNonBottomMostWindow = GetLastNonBottomMostWindow(v15, v16);
  }
  else
  {
    LastNonBottomMostWindow = (struct tagWND *)GetLastTopMostWindow(this);
    v2 = *((_DWORD *)this + 5);
  }
  v4 = LastNonBottomMostWindow;
  if ( (*(_BYTE *)(v2 + 23) & 0xC0) == 0x40
    || (v5 = *((_DWORD *)this + 2), (*(_BYTE *)(v5 + 264) & 0x20) == 0)
    && (*(_DWORD *)(*(_DWORD *)(v5 + 232) + 8) & 0x80100) == 0 )
  {
    v7 = _gpqForeground;
    if ( _gpqForeground )
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 2) + 236) != _gpqForeground )
      {
        v8 = v4 ? v4 : *(struct tagWND **)(*((_DWORD *)this + 14) + 60);
        v9 = v4;
        if ( !v8 )
          goto LABEL_22;
        do
        {
          v17 = v8;
          if ( v8 == this )
            break;
          v10 = (_BYTE *)*((_DWORD *)v8 + 5);
          if ( (v10[12] & 0x20) != 0 )
            break;
          if ( *((_DWORD *)v8 + 2) == *((_DWORD *)this + 2) && (v10[16] & 8) == 0 )
          {
            v11 = v10[23];
            if ( (v11 & 0xC0) == 0x40 || (v11 & 0x10) != 0 )
              break;
          }
          v8 = (struct tagWND *)*((_DWORD *)v8 + 12);
          v4 = v17;
        }
        while ( v8 );
        v7 = _gpqForeground;
        if ( !v8 || (*(_BYTE *)(*((_DWORD *)v8 + 5) + 12) & 0x20) != 0 )
        {
LABEL_22:
          v4 = v9;
          if ( !v9 )
            v9 = *(struct tagWND **)(*((_DWORD *)this + 14) + 60);
          v12 = *(_DWORD *)(v7 + 64);
          v13 = 0;
          if ( v12 )
            v13 = *(_DWORD *)(v12 + 8);
          while ( v9 )
          {
            v14 = *((_DWORD *)v9 + 5);
            if ( (*(_BYTE *)(v14 + 12) & 0x20) != 0 )
              break;
            if ( *((_DWORD *)v9 + 2) == v13 && (*((_DWORD *)v9 + 16) || (*(_BYTE *)(v14 + 23) & 0x10) != 0) )
              v4 = v9;
            v9 = (struct tagWND *)*((_DWORD *)v9 + 12);
          }
        }
      }
    }
  }
  return v4;
}
