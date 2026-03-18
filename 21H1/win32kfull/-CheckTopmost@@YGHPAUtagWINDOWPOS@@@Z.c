/*
 * XREFs of ?CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z @ 0x32CDC
 * Callers:
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     _CalcForegroundInsertAfter@4 @ 0x932A2 (_CalcForegroundInsertAfter@4.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     _GetTopMostInsertAfter@4 @ 0x140095 (_GetTopMostInsertAfter@4.c)
 */

int __thiscall CheckTopmost(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // esi
  _DWORD *v5; // ebx
  int v7; // eax
  int v8; // eax
  int *v9; // eax
  int *v10; // eax
  int v11; // eax
  bool v12; // zf
  char v13; // al
  int v14; // eax
  int *LastTopMostWindow; // eax
  int v16; // eax
  int *v17; // eax
  int *v18; // eax
  _DWORD *TopMostInsertAfter; // eax

  v2 = (_DWORD *)_HMObjectFromHandle(*this);
  v3 = this[6];
  v4 = 0;
  v5 = v2;
  if ( (v3 & 0x14) == 0 )
  {
    v7 = this[1];
    if ( v7 != -1 && v7 != -2 && v5 != *(_DWORD **)(*(_DWORD *)(v5[2] + 236) + 64) )
      this[1] = 0;
  }
  if ( (v3 & 4) != 0 )
    return 0;
  v8 = this[1];
  if ( v8 == 1 )
    return 2;
  if ( v8 == -2 )
  {
    v14 = v5[5];
    if ( (*(_BYTE *)(v14 + 16) & 8) != 0 )
    {
      LastTopMostWindow = (int *)GetLastTopMostWindow(v5);
      if ( LastTopMostWindow )
        v16 = *LastTopMostWindow;
      else
        v16 = 0;
      this[1] = v16;
      if ( v16 != *this )
        return 2;
      v14 = v5[5];
    }
    if ( (*(_WORD *)(v14 + 30) & 0x3FFF) != 0x29D )
    {
      v17 = (int *)v5[13];
      if ( v17 )
        v4 = *v17;
    }
    this[1] = v4;
    return 2;
  }
  if ( v8 != -1 )
  {
    if ( !v8 )
    {
      if ( (*(_BYTE *)(v5[5] + 16) & 8) == 0 )
      {
        v9 = (int *)CalcForegroundInsertAfter(v5);
        if ( v9 )
          v4 = *v9;
        this[1] = v4;
        return 0;
      }
      goto LABEL_13;
    }
    v10 = (int *)GetLastTopMostWindow(v5);
    if ( v10 )
      v11 = *v10;
    else
      v11 = 0;
    if ( this[1] == v11 )
      return 0;
    v12 = (*(_BYTE *)(*(_DWORD *)(_HMObjectFromHandle(this[1]) + 20) + 16) & 8) == 0;
    v13 = *(_BYTE *)(v5[5] + 16);
    if ( !v12 )
    {
      if ( (v13 & 8) != 0 )
      {
LABEL_13:
        if ( _gHardErrorHandler )
        {
          TopMostInsertAfter = (_DWORD *)GetTopMostInsertAfter(v5);
          if ( TopMostInsertAfter )
            this[1] = *TopMostInsertAfter;
        }
        return 0;
      }
      return 1;
    }
    if ( (v13 & 8) == 0 )
      return 0;
    return 2;
  }
  if ( _gHardErrorHandler )
  {
    v18 = (int *)GetTopMostInsertAfter(v5);
    if ( v18 )
      v4 = *v18;
  }
  this[1] = v4;
  return 1;
}
