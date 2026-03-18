/*
 * XREFs of _xxxTrackThumb@20 @ 0x1A49F1
 * Callers:
 *     <none>
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ?RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A2C4E (-RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z.c)
 *     ?xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A30D9 (-xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 */

unsigned __int8 **__stdcall xxxTrackThumb(int *a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // esi
  unsigned __int8 **result; // eax
  int v7; // ebx
  char v8; // dl
  _DWORD *v9; // edx
  struct tagWND *v10; // ecx
  int v11; // esi
  struct tagSBCALC *v12; // [esp+0h] [ebp-10h]
  int v13; // [esp+4h] [ebp-Ch]

  v5 = *(_DWORD **)(a1[2] + 392);
  result = (unsigned __int8 **)(a2 >> 8);
  if ( BYTE1(a2) == 2 && v5 )
  {
    if ( (*v5 & 8) != 0 )
    {
      RecalcTrackRect(*(_DWORD *)(a1[2] + 392));
      *v5 &= ~8u;
    }
    v7 = SHIWORD(a4);
    if ( PtInRect(v5 + 4, (__int16)a4, SHIWORD(a4)) )
    {
      if ( (v8 & 2) == 0 )
        v7 = (__int16)a4;
      v9 = a5;
      v10 = (struct tagWND *)(v7 + v5[11]);
      v11 = a5[15];
      if ( (int)v10 >= v11 )
      {
        if ( (int)v10 >= v11 + a5[14] )
          v10 = (struct tagWND *)(v11 + a5[14]);
      }
      else
      {
        v10 = (struct tagWND *)a5[15];
      }
    }
    else
    {
      v9 = a5;
      v10 = (struct tagWND *)a5[11];
    }
    xxxMoveThumb(v9, a1, v10, v12, v13);
    if ( a2 == 514 )
      return xxxEndScroll(a1, 0);
    result = (unsigned __int8 **)_GetKeyState(1);
    if ( (__int16)result >= 0 )
      return xxxEndScroll(a1, 0);
  }
  return result;
}
