/*
 * XREFs of _xxxTrackBox@20 @ 0x1A48C7
 * Callers:
 *     ?xxxContScroll@@YGXPAUtagWND@@IIJ@Z @ 0x1A2DA3 (-xxxContScroll@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 *     ?RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A2C4E (-RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D (-xxxDoScroll@@YGXPAUtagWND@@0HHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 */

int __stdcall xxxTrackBox(int *a1, unsigned int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // esi
  struct tagWND *v7; // eax
  struct tagWND *v8; // ecx
  char v9; // dl
  unsigned int v10; // edx
  int v11; // eax
  void *v12; // edx
  int v13; // [esp+0h] [ebp-18h]
  unsigned int v14; // [esp+4h] [ebp-14h]
  struct tagWND *v15; // [esp+10h] [ebp-8h]

  result = a1[2];
  v6 = *(_DWORD *)(result + 392);
  if ( v6 )
  {
    if ( !a2 || (result = a2 >> 8, BYTE1(a2) == 2) )
    {
      if ( (*(_DWORD *)v6 & 8) != 0 )
      {
        RecalcTrackRect(v6);
        *(_DWORD *)v6 &= ~8u;
      }
      v7 = (struct tagWND *)PtInRect((_DWORD *)(v6 + 16), (__int16)a4, SHIWORD(a4));
      v8 = v7;
      v15 = v7;
      if ( v7 != (struct tagWND *)(v9 & 1) )
      {
        zzzDrawInvertScrollArea((_DWORD *)v6, (int)a1, v7, *(struct tagSBTRACK **)(v6 + 36), v13, v14);
        result = a1[2];
        if ( v6 != *(_DWORD *)(result + 392) )
          return result;
        v8 = v15;
      }
      v10 = *(_DWORD *)(_gpsi + 4444) >> 3;
      if ( a2 != 512 )
      {
        if ( a2 != 513 )
        {
          if ( a2 == 514 )
            xxxEndScroll(a1, 0);
LABEL_18:
          result = a1[2];
          if ( v6 == *(_DWORD *)(result + 392) )
          {
            result = ((unsigned __int8)v15 ^ (unsigned __int8)*(_DWORD *)v6) & 1;
            *(_DWORD *)v6 ^= result;
          }
          return result;
        }
        *(_DWORD *)(v6 + 40) = 0;
        v10 = *(_DWORD *)(_gpsi + 4444);
      }
      if ( v8 )
      {
        if ( v8 != (struct tagWND *)(*(_DWORD *)v6 & 1) )
        {
          v11 = _SetSystemTimer((unsigned int)a1, (char *)0xFFFE, v10, (int)xxxContScroll, 0);
          v12 = *(void **)(v6 + 12);
          *(_DWORD *)(v6 + 40) = v11;
          if ( v12 )
            xxxDoScroll(v12, *(int **)(v6 + 8), *(struct tagWND **)(v6 + 36), 0, (*(_DWORD *)v6 >> 1) & 1, v13, v14);
        }
      }
      goto LABEL_18;
    }
  }
  return result;
}
