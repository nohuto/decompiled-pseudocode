/*
 * XREFs of ?GetLastTopMostWindowNoIME@@YGPAUtagWND@@PAU1@@Z @ 0x1C38E
 * Callers:
 *     _ImeSetTopmost@12 @ 0x1C212 (_ImeSetTopmost@12.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 */

struct tagWND *__thiscall GetLastTopMostWindowNoIME(_DWORD *this)
{
  int DesktopWindow; // eax
  _DWORD *v2; // ecx
  _DWORD *v3; // edi
  _DWORD *v4; // edx
  _DWORD *v5; // esi
  int v6; // ebx

  DesktopWindow = _GetDesktopWindow(this);
  v3 = 0;
  if ( !DesktopWindow )
    return 0;
  v4 = *(_DWORD **)(DesktopWindow + 60);
  if ( !v4 )
    return 0;
  do
  {
    if ( (*(_BYTE *)(v4[5] + 16) & 8) == 0 )
      break;
    v5 = v4;
    v6 = *(_DWORD *)(v4[19] + 4);
    if ( (*(_BYTE *)(v6 + 10) & 1) != 0 || (v2 = this, *(_WORD *)v6 == *(_WORD *)(_gpsi + 498)) )
    {
      while ( v2 != v5 )
      {
        v5 = (_DWORD *)v5[16];
        if ( !v5 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v3 = v4;
    }
    v4 = (_DWORD *)v4[12];
  }
  while ( v4 );
  return (struct tagWND *)v3;
}
