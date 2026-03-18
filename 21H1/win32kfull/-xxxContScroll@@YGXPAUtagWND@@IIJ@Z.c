/*
 * XREFs of ?xxxContScroll@@YGXPAUtagWND@@IIJ@Z @ 0x1A2DA3
 * Callers:
 *     <none>
 * Callees:
 *     __GetMessagePos@0 @ 0xA9662 (__GetMessagePos@0.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 *     ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D (-xxxDoScroll@@YGXPAUtagWND@@0HHH@Z.c)
 *     _xxxTrackBox@20 @ 0x1A48C7 (_xxxTrackBox@20.c)
 */

void __stdcall xxxContScroll(struct tagWND *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // esi
  int MessagePos; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+4h] [ebp-Ch]

  v4 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 392);
  if ( v4 )
  {
    MessagePos = _GetMessagePos();
    v6 = *((_DWORD *)a1 + 5);
    if ( (*(_BYTE *)(v6 + 18) & 0x40) != 0 )
      LOWORD(MessagePos) = *(_WORD *)(v6 + 60) - MessagePos;
    else
      LOWORD(MessagePos) = MessagePos - *(_WORD *)(v6 + 52);
    xxxTrackBox(
      a1,
      0,
      0,
      ((unsigned __int16)(HIWORD(MessagePos) - *(_WORD *)(v6 + 56)) << 16) | (unsigned __int16)MessagePos,
      0);
    if ( v4 == *(_DWORD *)(*((_DWORD *)a1 + 2) + 392) && (*(_BYTE *)v4 & 1) != 0 )
    {
      v7 = _SetSystemTimer((unsigned int)a1, (char *)0xFFFE, *(_DWORD *)(_gpsi + 4444) >> 3, (int)xxxContScroll, 0);
      v8 = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v4 + 40) = v7;
      if ( v8 )
        xxxDoScroll(*(struct tagWND **)(v4 + 36), 0, (*(_DWORD *)v4 >> 1) & 1, v9, v10);
    }
  }
}
