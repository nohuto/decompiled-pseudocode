/*
 * XREFs of ?vCheckForTrivial@XLATE@@QAEXXZ @ 0x225F31
 * Callers:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ??0XLATEMEMOBJ@@QAE@VXEPALOBJ@@0@Z @ 0x225896 (--0XLATEMEMOBJ@@QAE@VXEPALOBJ@@0@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z @ 0x225B92 (-bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall XLATE::vCheckForTrivial(XLATE *this)
{
  int v2; // ebx
  unsigned int v3; // esi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // esi
  int *v11; // ecx
  int v12; // edi
  int v13; // ecx
  int *v14; // eax
  int v15; // ecx
  int v16; // [esp+8h] [ebp-Ch]
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+10h] [ebp-4h]

  v2 = *((_DWORD *)this + 1);
  if ( (v2 & 9) == 0 )
  {
    v3 = *((_DWORD *)this + 3);
    if ( v3 )
    {
      v4 = *((_DWORD *)this + 9);
      if ( !v4 || (v5 = *((_DWORD *)this + 10)) == 0 || *(_DWORD *)(v4 + 20) == *(_DWORD *)(v5 + 20) )
      {
        v6 = 0;
        v7 = (_DWORD *)*((_DWORD *)this + 4);
        while ( *v7 == v6 )
        {
          ++v6;
          ++v7;
          if ( v6 >= v3 )
            goto LABEL_27;
        }
      }
    }
    else
    {
      v8 = *((_DWORD *)this + 9);
      v9 = (_DWORD *)*((_DWORD *)this + 10);
      if ( v8 && v9 && !v9[5] )
      {
        v18 = *(_DWORD *)(v8 + 16);
        v10 = 16711680;
        v16 = 65280;
        if ( (v18 & 2) != 0 )
        {
          v11 = *(int **)(v8 + 76);
          v12 = v11[2];
          v19 = *v11;
          v17 = v11[1];
        }
        else
        {
          v17 = 65280;
          if ( (v18 & 4) != 0 )
          {
            v19 = 255;
            v12 = 16711680;
          }
          else
          {
            v19 = 16711680;
            v12 = 255;
          }
        }
        v13 = v9[4];
        if ( (v13 & 2) != 0 )
        {
          v14 = (int *)v9[19];
          v15 = *v14;
          v10 = v14[2];
          v16 = v14[1];
        }
        else if ( (v13 & 4) != 0 )
        {
          v15 = 255;
        }
        else
        {
          v15 = 16711680;
          v10 = 255;
        }
        if ( v19 == v15 && v17 == v16 && v12 == v10 )
LABEL_27:
          *((_DWORD *)this + 1) = v2 | 1;
      }
    }
  }
}
