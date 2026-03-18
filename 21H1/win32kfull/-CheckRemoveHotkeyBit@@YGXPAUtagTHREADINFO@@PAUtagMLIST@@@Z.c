/*
 * XREFs of ?CheckRemoveHotkeyBit@@YGXPAUtagTHREADINFO@@PAUtagMLIST@@@Z @ 0xC52E8
 * Callers:
 *     ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40 (-xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z.c)
 *     _FindQMsg@24 @ 0x6A480 (_FindQMsg@24.c)
 * Callees:
 *     <none>
 */

void __fastcall CheckRemoveHotkeyBit(int a1, _DWORD *a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // esi

  v2 = (_DWORD *)*a2;
  v3 = 0;
  if ( !*a2 )
    goto LABEL_6;
  do
  {
    if ( v2[3] == 786 )
      ++v3;
    v2 = (_DWORD *)*v2;
  }
  while ( v2 );
  if ( v3 <= 1 )
  {
LABEL_6:
    *(_WORD *)(*(_DWORD *)(a1 + 244) + 6) &= ~0x80u;
    *(_WORD *)(*(_DWORD *)(a1 + 244) + 4) &= ~0x80u;
  }
}
