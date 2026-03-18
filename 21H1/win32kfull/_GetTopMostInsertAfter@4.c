/*
 * XREFs of _GetTopMostInsertAfter@4 @ 0x140095
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z @ 0x32CDC (-CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 */

_DWORD *__thiscall GetTopMostInsertAfter(_DWORD *this)
{
  __int16 v1; // ax
  _DWORD *v2; // eax
  int v3; // edi
  _DWORD *i; // ecx

  v1 = *(_WORD *)(this[5] + 30) & 0x3FFF;
  if ( v1 != 668
    && v1 != 672
    && _gptiCurrent != _gHardErrorHandler
    && (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8)) == 0 )
  {
    v2 = *(_DWORD **)(_gptiCurrent + 248);
    if ( v2 != grpdeskLogon && v2 == *(_DWORD **)(_gHardErrorHandler + 248) )
    {
      v3 = *(_DWORD *)(v2[1] + 12);
      if ( _GetDesktopWindow(this) == v3 )
      {
        for ( i = *(_DWORD **)(v3 + 60); i && (*(_BYTE *)(i[5] + 16) & 8) != 0; i = (_DWORD *)i[12] )
        {
          if ( _gHardErrorHandler == i[2] )
            return i;
        }
      }
    }
  }
  return 0;
}
