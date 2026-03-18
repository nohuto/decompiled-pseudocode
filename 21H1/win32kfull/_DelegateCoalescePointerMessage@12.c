/*
 * XREFs of _DelegateCoalescePointerMessage@12 @ 0x15B8F5
 * Callers:
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 *     _DelegateReleasePointerMessage@8 @ 0x159FCB (_DelegateReleasePointerMessage@8.c)
 * Callees:
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 */

int __fastcall DelegateCoalescePointerMessage(int a1, int a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // esi

  v4 = a3[16];
  v5 = v4 << 25 >> 31;
  v6 = v4 << 26 >> 31;
  if ( v5 )
  {
    if ( !v6 )
      goto LABEL_6;
  }
  else if ( v6 )
  {
    goto LABEL_6;
  }
  if ( !a2 )
    return 0;
LABEL_6:
  if ( a3[3] == 595 )
    return 0;
  v8 = CTouchProcessor::DelegateCoalescePointerMessage(_gpTouchProcessor, a3[5], a2, v6, v5, a3[3]);
  v9 = v8;
  if ( a2 )
  {
    if ( v8 )
      DelQEntry((_DWORD *)(*(_DWORD *)(a1 + 236) + 12), a3, 1);
  }
  return v9;
}
