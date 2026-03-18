/*
 * XREFs of ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0033334
 * Callers:
 *     ImeSetTopmost @ 0x1C0033178 (ImeSetTopmost.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 */

struct tagWND *__fastcall GetLastTopMostWindowNoIME(struct tagWND *a1)
{
  __int64 DesktopWindow; // rax
  _QWORD *v2; // r11
  _QWORD *v3; // r9
  _QWORD *v4; // rdx
  _QWORD *v5; // r10
  int v6; // edi
  _QWORD *v7; // r8
  __int64 v8; // rbx

  DesktopWindow = GetDesktopWindow(a1);
  v3 = 0LL;
  if ( !DesktopWindow )
    return 0LL;
  v4 = *(_QWORD **)(DesktopWindow + 112);
  if ( !v4 )
    return 0LL;
  do
  {
    v5 = v4;
    if ( (*(_BYTE *)(v4[5] + 24LL) & 8) == 0 )
      break;
    v6 = 0;
    v7 = v4;
    v8 = *(_QWORD *)(v4[17] + 8LL);
    if ( (*(_BYTE *)(v8 + 10) & 1) != 0 || *(_WORD *)v8 == *(_WORD *)(gpsi + 898LL) )
    {
      while ( v2 != v7 )
      {
        v7 = (_QWORD *)v7[15];
        if ( !v7 )
          goto LABEL_6;
      }
      v6 = 1;
    }
LABEL_6:
    v4 = (_QWORD *)v4[11];
    if ( v6 )
      v5 = v3;
    v3 = v5;
  }
  while ( v4 );
  return (struct tagWND *)v3;
}
