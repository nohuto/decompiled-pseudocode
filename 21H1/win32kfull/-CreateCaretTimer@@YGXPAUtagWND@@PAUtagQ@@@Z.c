/*
 * XREFs of ?CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0xBA7AE
 * Callers:
 *     __SetCaretBlinkTime@4 @ 0x7DA40 (__SetCaretBlinkTime@4.c)
 *     _zzzSetCaretPos@8 @ 0x820C0 (_zzzSetCaretPos@8.c)
 *     _zzzInternalShowCaret@0 @ 0xBA734 (_zzzInternalShowCaret@0.c)
 * Callees:
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 */

void __fastcall CreateCaretTimer(int a1, int a2)
{
  if ( !*(_DWORD *)(a2 + 252)
    && *(_DWORD *)(_gpsi + 4452) != -1
    && *(_DWORD *)UPDWORDPointer(8226)
    && ((*(_BYTE *)(_gpsi + 1836) & 4) != 0 || !_gProtocolType) )
  {
    *(_DWORD *)(a2 + 252) = _SetSystemTimer(*(_DWORD *)(_gpsi + 4452), &CaretBlinkProc, 0);
    if ( *(_DWORD *)(_gpsi + 4452) )
      *(_DWORD *)(a2 + 228) = *(_DWORD *)UPDWORDPointer(8226) / *(_DWORD *)(_gpsi + 4452) + 1;
    else
      *(_DWORD *)(a2 + 228) = -1;
  }
}
