/*
 * XREFs of ?DrawDiagonalLine@@YGKPAUHDC__@@PAUtagRECT@@HHI@Z @ 0x1B7526
 * Callers:
 *     ?DrawDiagonal@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@2I@Z @ 0x1B749A (-DrawDiagonal@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@I@Z @ 0x1B77F8 (-FillTriangle@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@I@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge DrawDiagonalLine@<eax>(
        ERECTL *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        struct tagRECT *a4,
        __int16 a5,
        int a6,
        unsigned int a7)
{
  int *v7; // edx
  int v9; // ebx
  int v10; // esi
  int v11; // edi
  int *v12; // ecx
  int v13; // eax
  int v14; // edx
  int *v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // ebx
  int v19; // edx
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // eax
  int v25; // [esp+Ch] [ebp-E0h]
  int v27; // [esp+1Ch] [ebp-D0h]
  unsigned int v29; // [esp+24h] [ebp-C8h]
  int v30; // [esp+28h] [ebp-C4h] BYREF
  int v31; // [esp+2Ch] [ebp-C0h] BYREF
  int v32; // [esp+30h] [ebp-BCh]
  int v33; // [esp+34h] [ebp-B8h] BYREF
  int v34; // [esp+38h] [ebp-B4h]
  int v35; // [esp+3Ch] [ebp-B0h] BYREF
  _DWORD v36[41]; // [esp+40h] [ebp-ACh] BYREF

  v29 = 0;
  if ( ERECTL::bWrapped(a1) )
    return 0;
  v32 = *v7;
  v33 = v7[1];
  v34 = v7[2];
  v35 = v7[3];
  v9 = v35;
  v10 = v32;
  v11 = v34 - v32;
  if ( v35 - v33 < v34 - v32 )
  {
    v12 = &v31;
    v27 = v11 / (v35 - v33);
    v13 = 1;
    v31 = v27;
    v14 = v27;
  }
  else
  {
    v12 = &v30;
    v13 = (v35 - v33) / v11;
    v27 = 1;
    v31 = 1;
    v14 = v13;
  }
  v30 = v13;
  v15 = &v33;
  *v12 = v14;
  v25 = (_DWORD)a3 * v13;
  v16 = v34 - v31;
  v17 = v30;
  v18 = v9 - v30;
  v34 -= v31;
  v35 = v18;
  if ( (int)a3 >= 0 )
    v15 = &v35;
  if ( v10 <= v16 )
  {
    while ( 1 )
    {
      if ( v33 > v18 )
      {
LABEL_25:
        if ( v29 )
          GrePolyPatBlt(a2, 0xF00021u, (struct XDCOBJ *)v36, v29, v17);
        return (unsigned __int16)v31 | ((unsigned __int16)v30 << 16);
      }
      v19 = 5 * v29;
      v20 = ++v29;
      if ( (a5 & 0x800) == 0 )
        break;
      if ( v17 > 1 )
      {
        v36[v19] = v10;
        if ( (a5 & 1) != 0 )
        {
          v22 = *((_DWORD *)a1 + 1);
          v36[v19 + 2] = v31;
          v23 = v17;
          v17 = v22;
          v20 = v29;
          v24 = *v15 + v23 - v17;
        }
        else
        {
          v17 = *v15;
          v36[v19 + 2] = v31;
          v24 = *((_DWORD *)a1 + 3) - v17;
        }
        v36[v19 + 1] = v17;
        v36[v19 + 3] = v24;
        goto LABEL_17;
      }
      v36[v19 + 4] = 0;
      if ( (a5 & 2) != 0 )
      {
        v36[v19 + 1] = *v15;
        v36[v19] = v10;
        v36[v19 + 3] = v17;
        v36[v19 + 2] = *((_DWORD *)a1 + 2) - v10;
      }
      else
      {
        v17 = *(_DWORD *)a1;
        v36[v19 + 1] = *v15;
        v36[v19] = v17;
        v36[v19 + 2] = v31 + v10 - v17;
        v36[v19 + 3] = v30;
      }
LABEL_21:
      v32 = v27 + v10;
      *v15 -= v25;
      if ( v20 == 8 )
      {
        GrePolyPatBlt(a2, 0xF00021u, (struct XDCOBJ *)v36, 8u, v17);
        v29 = 0;
      }
      v10 = v32;
      if ( v32 > v34 )
        goto LABEL_25;
      v18 = v35;
      v17 = v30;
    }
    v36[v19 + 1] = *v15;
    v21 = v31;
    v36[v19] = v10;
    v36[v19 + 2] = v21;
    v36[v19 + 3] = v17;
LABEL_17:
    v36[v19 + 4] = 0;
    goto LABEL_21;
  }
  return (unsigned __int16)v31 | ((unsigned __int16)v30 << 16);
}
