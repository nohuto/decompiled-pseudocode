/*
 * XREFs of _DrawEdge@16 @ 0x90568
 * Callers:
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _DrawPushButton@16 @ 0x904D2 (_DrawPushButton@16.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     ?DrawGroove@@YGXPAUHDC__@@PAUHBRUSH__@@PAUtagRECT@@H@Z @ 0xC1DEE (-DrawGroove@@YGXPAUHDC__@@PAUHBRUSH__@@PAUtagRECT@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 * Callees:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DrawDiagonal@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@2I@Z @ 0x1B749A (-DrawDiagonal@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@I@Z @ 0x1B77F8 (-FillTriangle@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@I@Z.c)
 */

int __fastcall DrawEdge(HDC a1, int *a2, unsigned int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int *v6; // esi
  unsigned int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  HDC v12; // edi
  struct tagRECT *v13; // edx
  unsigned int v14; // esi
  int v15; // eax
  int v16; // eax
  int v18; // eax
  HDC v19; // eax
  int v20; // eax
  HDC v21; // eax
  RECT *v22; // [esp+0h] [ebp-80h]
  HBRUSH v23; // [esp+4h] [ebp-7Ch]
  int v26; // [esp+18h] [ebp-68h]
  int v27; // [esp+1Ch] [ebp-64h]
  int v28; // [esp+20h] [ebp-60h]
  int v29; // [esp+24h] [ebp-5Ch]
  int v30; // [esp+28h] [ebp-58h] BYREF
  int v31; // [esp+2Ch] [ebp-54h]
  int v32; // [esp+30h] [ebp-50h]
  int v33; // [esp+34h] [ebp-4Ch]
  _DWORD v34[17]; // [esp+38h] [ebp-48h]

  v4 = 1;
  v5 = a4;
  if ( *(_WORD *)(_gpsi + 6240) == 1 )
    v5 = a4 | 0x8000;
  if ( (v5 & 0x8000) != 0 )
    v5 |= 0x4000u;
  v6 = a2;
  v7 = a3;
  v26 = *v6++;
  v27 = *v6++;
  v28 = *v6;
  v29 = v6[1];
  v8 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_24;
  while ( 1 )
  {
    if ( (v5 & 0x4000) != 0 )
    {
      v18 = v8 & 3;
      if ( (v5 & 0x8000) != 0 )
        v13 = v18 ? *(struct tagRECT **)(_gpsi + 4316) : *(struct tagRECT **)(_gpsi + 4312);
      else
        v13 = v18 ? *(struct tagRECT **)(_gpsi + 4356) : *(struct tagRECT **)(_gpsi + 4352);
      v12 = (HDC)v13;
    }
    else
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 2;
          if ( v11 )
          {
            if ( v11 != 4 )
              return 0;
            v12 = (v5 & 0x1000) != 0 ? *(HDC *)(_gpsi + 4356) : *(HDC *)(_gpsi + 4376);
            v13 = *(struct tagRECT **)(_gpsi + 4380);
          }
          else
          {
            v12 = (v5 & 0x1000) != 0 ? *(HDC *)(_gpsi + 4380) : *(HDC *)(_gpsi + 4372);
            v13 = *(struct tagRECT **)(_gpsi + 4356);
          }
        }
        else
        {
          v12 = (v5 & 0x1000) != 0 ? *(HDC *)(_gpsi + 4376) : *(HDC *)(_gpsi + 4356);
          v13 = *(struct tagRECT **)(_gpsi + 4372);
        }
      }
      else
      {
        v12 = (v5 & 0x1000) != 0 ? *(HDC *)(_gpsi + 4372) : *(HDC *)(_gpsi + 4380);
        v13 = *(struct tagRECT **)(_gpsi + 4376);
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v16 = DrawDiagonal(v12, v13, (HBRUSH)v5, (HBRUSH)v22, (unsigned int)v23);
    }
    else
    {
      v14 = 0;
      if ( (v5 & 4) != 0 )
      {
        v14 = 1;
        v4 = v27;
        v30 = --v28;
        v31 = v27;
        v32 = 1;
        v33 = v29 - v27;
        v34[0] = v13;
      }
      if ( (v5 & 8) != 0 )
      {
        --v29;
        v4 = 20 * v14;
        *(int *)((char *)&v30 + v4) = v26;
        *(int *)((char *)&v31 + v4) = v29;
        ++v14;
        *(int *)((char *)&v32 + v4) = v28 - v26;
        *(_DWORD *)((char *)&v34[-1] + v4) = 1;
        *(_DWORD *)((char *)v34 + v4) = v13;
      }
      v15 = v26;
      if ( (v5 & 1) != 0 )
      {
        v4 = 20 * v14;
        *(int *)((char *)&v30 + v4) = v26;
        *(int *)((char *)&v31 + v4) = v27;
        *(_DWORD *)((char *)&v34[-1] + v4) = v29 - v27;
        ++v14;
        v15 = v26 + 1;
        *(int *)((char *)&v32 + v4) = 1;
        *(_DWORD *)((char *)v34 + v4) = v12;
        ++v26;
      }
      if ( (v5 & 2) != 0 )
      {
        v4 = 20 * v14;
        *(int *)((char *)&v30 + v4) = v15;
        ++v14;
        *(int *)((char *)&v31 + v4) = v27;
        *(int *)((char *)&v32 + v4) = v28 - v26;
        *(_DWORD *)((char *)&v34[-1] + v4) = 1;
        *(_DWORD *)((char *)v34 + v4) = v12;
        ++v27;
      }
      v16 = GrePolyPatBlt(a1, 0xF00021u, (struct XDCOBJ *)&v30, v14, v4);
    }
    v7 = a3;
    v4 = v16;
LABEL_24:
    v8 = v7 & 0xC;
    if ( (v7 & 0xC) == 0 )
      break;
    a3 = v7 & 0xFFFFFFF3;
  }
  if ( (v5 & 0x800) != 0 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      if ( (v5 & 0x8000) != 0 )
        v19 = *(HDC *)(_gpsi + 4312);
      else
        v19 = *(HDC *)(_gpsi + 4352);
      v20 = FillTriangle(v19, (struct tagRECT *)v5, (HBRUSH)v22, (unsigned int)v23);
    }
    else
    {
      if ( (v5 & 0x8000) != 0 )
        v21 = *(HDC *)(_gpsi + 4312);
      else
        v21 = *(HDC *)(_gpsi + 4352);
      v20 = FillRect(v21, v22, v23);
    }
    v4 = v20;
  }
  if ( (v5 & 0x2000) != 0 )
  {
    *a2 = v26;
    a2[1] = v27;
    a2[2] = v28;
    a2[3] = v29;
  }
  return v4;
}
