/*
 * XREFs of ?RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A2C4E
 * Callers:
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 *     ?InvertScrollHilite@@YGXPAUtagWND@@PAUtagSBTRACK@@@Z @ 0x1A2BEF (-InvertScrollHilite@@YGXPAUtagWND@@PAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 *     _xxxTrackBox@20 @ 0x1A48C7 (_xxxTrackBox@20.c)
 *     _xxxTrackThumb@20 @ 0x1A49F1 (_xxxTrackThumb@20.c)
 * Callees:
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?CalcTrackDragRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A26D0 (-CalcTrackDragRect@@YGXPAUtagSBTRACK@@@Z.c)
 */

void __thiscall RecalcTrackRect(int this)
{
  unsigned int v2; // eax
  int *v3; // edi
  int *v4; // ecx
  _DWORD *v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v2 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 4) == 0 )
  {
    CalcSBStuff(*(_DWORD **)(this + 4), (v2 >> 1) & 1);
    v2 = *(_DWORD *)this;
  }
  v3 = &v8;
  v4 = &v9;
  if ( (v2 & 2) == 0 )
  {
    v3 = &v9;
    v4 = &v8;
  }
  v5 = *(_DWORD **)(this + 64);
  *v3 = v5[6];
  *v4 = v5[4];
  v3[2] = v5[7];
  v6 = *(_DWORD *)(this + 36);
  v4[2] = v5[5];
  if ( !v6 )
  {
    v6 = 0;
    v4[2] = v5[9];
    goto LABEL_16;
  }
  if ( v6 == 1 )
  {
    *v4 = v5[10];
  }
  else
  {
    if ( v6 == 2 )
    {
      *v4 = v5[9];
      v7 = v5[13];
    }
    else
    {
      if ( v6 != 3 )
      {
        if ( v6 == 4 )
        {
          CalcTrackDragRect((int *)this);
          v6 = *(_DWORD *)(this + 36);
        }
LABEL_16:
        if ( v6 == 4 )
          return;
        goto LABEL_17;
      }
      *v4 = v5[12];
      v7 = v5[10];
    }
    v4[2] = v7;
  }
LABEL_17:
  *(_DWORD *)(this + 16) = v8;
  *(_DWORD *)(this + 20) = v9;
  *(_DWORD *)(this + 24) = v10;
  *(_DWORD *)(this + 28) = v11;
}
