/*
 * XREFs of ?DCEPointInTriangle@@YGHPAU_D3DVERTEX@@MM@Z @ 0x14FAD0
 * Callers:
 *     _DCEHitTestWindow@16 @ 0x150745 (_DCEHitTestWindow@16.c)
 * Callees:
 *     <none>
 */

int __userpurge DCEPointInTriangle@<eax>(float *a1@<ecx>, struct _D3DVERTEX *a2, float a3, float a4)
{
  double v4; // st7
  int v5; // edx
  double v6; // st6
  double v7; // st5
  double v9; // st7
  double v10; // st5
  bool v11; // c0
  bool v12; // c3
  double v13; // st5
  int v14; // edi
  int v15; // ebx
  int v16; // esi
  int v17; // esi
  int v18; // eax
  double v19; // st2
  double v20; // st1
  bool v21; // c0
  bool v22; // c3
  double v23; // st7
  double v24; // st5
  double v25; // st2
  int v26; // [esp+0h] [ebp-Ch]
  float v27; // [esp+8h] [ebp-4h]
  float *v28; // [esp+18h] [ebp+Ch]

  v4 = a1[1];
  v5 = 0;
  v6 = a3;
  v7 = *(float *)&a2;
  if ( a1[9] == v4 && v6 == v4 && *a1 <= v7 && a1[8] >= v7 )
    return 1;
  v9 = *(float *)&a2;
  v10 = a1[1] - v6;
  v11 = v10 > 0.0;
  v12 = 0.0 == v10;
  v13 = 0.0;
  if ( v11 || v12 )
    v14 = 1;
  else
    v14 = -1;
  v28 = a1;
  v15 = 1;
  v26 = 3;
  do
  {
    v16 = v15;
    if ( v15 >= 3 )
      v16 = 0;
    v17 = 8 * v16;
    if ( a1[v17 + 1] - v6 < v13 )
      v18 = -1;
    else
      v18 = 1;
    if ( v14 != v18 )
    {
      v19 = *v28 - v9;
      v20 = a1[v17] - v9;
      v21 = v20 < v13;
      v22 = v20 == v13;
      if ( v19 <= v13 )
      {
        if ( v21 || v22 )
          goto LABEL_19;
      }
      else if ( !v21 && !v22 )
      {
        ++v5;
LABEL_19:
        v23 = v13;
LABEL_20:
        v13 = v23;
        v9 = *(float *)&a2;
        v14 = v18;
        goto LABEL_21;
      }
      v24 = v19;
      v25 = a1[v17 + 1] - v28[1];
      v27 = v25;
      if ( fabs(v27) <= 0.00000011920929 )
      {
        v23 = 0.0;
      }
      else
      {
        v23 = 0.0;
        if ( v24 - (a1[v17] - *v28) * (v28[1] - v6) / v25 > 0.0 )
          ++v5;
      }
      goto LABEL_20;
    }
LABEL_21:
    v28 += 8;
    ++v15;
    --v26;
  }
  while ( v26 );
  return v5 & 1;
}
