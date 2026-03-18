/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QAEHPAU_POINTFIX@@PAU_RECTL@@@Z @ 0x65208
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

int __thiscall ESTROBJ::bOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, struct _RECTL *a3)
{
  int v4; // edx
  LONG v5; // ecx
  int v6; // eax
  int v7; // edx
  int result; // eax
  _DWORD *v9; // esi
  int v10; // edx
  LONG v11; // edx
  int v12; // edx
  LONG v13; // edx
  int v14; // edx
  LONG v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // ebx
  FIX v21; // eax
  FIX v22; // edi
  FIX v23; // edx
  int v24; // ecx
  int v25; // edx
  int v26; // [esp+8h] [ebp-1Ch]
  int v27; // [esp+Ch] [ebp-18h]
  int v28; // [esp+10h] [ebp-14h]
  _DWORD *v29; // [esp+14h] [ebp-10h]
  int v30; // [esp+18h] [ebp-Ch]
  int v31; // [esp+1Ch] [ebp-8h]

  if ( (*((_BYTE *)this + 4) & 2) == 0 )
  {
    v9 = (_DWORD *)**((_DWORD **)this + 11);
    v29 = v9;
    if ( v9[102] || v9[103] || v9[109] || v9[110] )
    {
      if ( v9[100] || v9[101] || v9[111] || v9[112] )
      {
        v31 = lCvt(v9[100], v9[101], *((_DWORD *)this + 19));
        v30 = lCvt(v9[102], v9[103], *((_DWORD *)this + 19));
        v28 = lCvt(v9[100], v9[101], *((_DWORD *)this + 21));
        v26 = lCvt(v9[102], v9[103], *((_DWORD *)this + 21));
        v18 = lCvt(v9[109], v9[110], *((_DWORD *)this + 20));
        v27 = lCvt(v9[111], v9[112], *((_DWORD *)this + 20));
        v19 = lCvt(v9[109], v9[110], *((_DWORD *)this + 22));
        v20 = lCvt(v29[111], v29[112], *((_DWORD *)this + 22));
        v21 = v18 + v31 + *((_DWORD *)this + 13);
        a2->x = v21;
        v22 = *((_DWORD *)this + 13) + v28 + v18;
        a2[1].x = v22;
        v23 = *((_DWORD *)this + 13) + v28 + v19;
        a2[2].x = v23;
        a2[3].x = *((_DWORD *)this + 13) + v19 + v31;
        a2->y = *((_DWORD *)this + 14) + v27 + v30;
        a2[1].y = *((_DWORD *)this + 14) + v26 + v27;
        a2[2].y = *((_DWORD *)this + 14) + v26 + v20;
        a2[3].y = *((_DWORD *)this + 14) + v20 + v30;
        v24 = (v22 > v21) ^ (v22 <= v23);
        a3->left = a2[v24].x;
        a3->right = a2[v24 + 2].x;
        v25 = (a2[1].y > a2[2].y) ^ (a2[1].y <= a2->y);
        a3->top = a2[v25].y;
        a3->bottom = a2[v25 + 2].y;
        ERECTL::vOrder((ERECTL *)a3);
        a3->left = (a3->left >> 4) - 2;
        a3->top = (a3->top >> 4) - 2;
        a3->right = ((a3->right + 15) >> 4) + 2;
        a3->bottom = ((a3->bottom + 15) >> 4) + 2;
        return 1;
      }
      v14 = (*((_DWORD *)this + 13) + 8) >> 4;
      if ( (int)v9[109] >= 0 )
      {
        a3->left = v14 + (*((int *)this + 22) >> 4);
        v15 = ((*((_DWORD *)this + 20) + 15) >> 4) + v14;
      }
      else
      {
        a3->left = v14 - ((*((_DWORD *)this + 20) + 15) >> 4);
        v15 = v14 - (*((int *)this + 22) >> 4);
      }
      a3->right = v15;
      v16 = (*((_DWORD *)this + 14) + 8) >> 4;
      if ( (int)v9[102] >= 0 )
      {
        a3->top = v16 + (*((int *)this + 19) >> 4);
        v17 = ((*((_DWORD *)this + 21) + 15) >> 4) + v16;
      }
      else
      {
        a3->top = v16 - ((*((_DWORD *)this + 21) + 15) >> 4);
        v17 = v16 - (*((int *)this + 19) >> 4);
      }
      a3->bottom = v17 + 1;
    }
    else
    {
      v10 = (*((_DWORD *)this + 13) + 8) >> 4;
      if ( (int)v9[100] >= 0 )
      {
        a3->left = v10 + (*((int *)this + 19) >> 4);
        v11 = ((*((_DWORD *)this + 21) + 15) >> 4) + v10;
      }
      else
      {
        a3->left = v10 - ((*((_DWORD *)this + 21) + 15) >> 4);
        v11 = v10 - (*((int *)this + 19) >> 4);
      }
      a3->right = v11;
      v12 = (*((_DWORD *)this + 14) + 8) >> 4;
      if ( (int)v9[111] >= 0 )
      {
        a3->top = v12 + (*((int *)this + 22) >> 4);
        v13 = ((*((_DWORD *)this + 20) + 15) >> 4) + v12;
      }
      else
      {
        a3->top = v12 - ((*((_DWORD *)this + 20) + 15) >> 4);
        v13 = v12 - (*((int *)this + 22) >> 4);
      }
      a3->bottom = v13;
      ++a3->right;
    }
    return 0;
  }
  v4 = (*((_DWORD *)this + 13) + 8) >> 4;
  a3->left = v4 + (*((int *)this + 19) >> 4);
  v5 = v4 + ((*((_DWORD *)this + 21) + 15) >> 4);
  a3->right = v5;
  v6 = **((_DWORD **)this + 11);
  if ( (*(_DWORD *)(v6 + 12) & 0x2000) != 0 && (*(_BYTE *)(v6 + 712) & 6) != 0 )
  {
    a3->right = v5 + 1;
    *((_DWORD *)this + 1) &= ~0x10u;
  }
  v7 = (*((_DWORD *)this + 14) + 8) >> 4;
  a3->top = v7 - ((*((_DWORD *)this + 20) + 15) >> 4);
  result = 0;
  a3->bottom = v7 - (*((int *)this + 22) >> 4);
  return result;
}
