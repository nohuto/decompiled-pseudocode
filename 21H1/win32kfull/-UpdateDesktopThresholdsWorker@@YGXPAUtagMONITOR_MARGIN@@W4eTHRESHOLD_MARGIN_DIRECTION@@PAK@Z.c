/*
 * XREFs of ?UpdateDesktopThresholdsWorker@@YGXPAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0xA55E2
 * Callers:
 *     _UpdateDesktopThresholds@0 @ 0xA5498 (_UpdateDesktopThresholds@0.c)
 * Callees:
 *     ?GetCoordFromRect@@YGXPAUtagMONITOR_MARGIN@@PAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0xA56A0 (-GetCoordFromRect@@YGXPAUtagMONITOR_MARGIN@@PAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

unsigned int *__fastcall UpdateDesktopThresholdsWorker(_DWORD *a1, int a2, unsigned int *a3)
{
  int v3; // ebx
  unsigned int *result; // eax
  unsigned int i; // esi
  unsigned int v6; // edi
  int v7; // edx
  _DWORD *v8; // edi
  bool v9; // zf
  signed int v10; // ecx
  int v11; // edx
  _DWORD *v12; // edi
  int *v13; // eax
  int v14; // eax
  int v15; // eax
  bool v16; // cf
  int v17; // edi
  signed int v18; // ebx
  int v19; // ebx
  int v20; // eax
  int v21; // [esp+Ch] [ebp-30h] BYREF
  int v22; // [esp+10h] [ebp-2Ch]
  int v23; // [esp+14h] [ebp-28h]
  int v24; // [esp+18h] [ebp-24h]
  int v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  int v27; // [esp+24h] [ebp-18h]
  int v28; // [esp+28h] [ebp-14h]
  _DWORD *v29; // [esp+2Ch] [ebp-10h]
  unsigned int v30; // [esp+30h] [ebp-Ch]
  int *v31; // [esp+34h] [ebp-8h]

  v29 = a1;
  v3 = a2;
  v21 = 0;
  v27 = a2;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  result = (unsigned int *)_gpDispInfo;
  for ( i = *(_DWORD *)(_gpDispInfo + 56); i; i = *(_DWORD *)(i + 28) )
  {
    result = *(unsigned int **)(i + 20);
    if ( (result[3] & 1) != 0 )
    {
      *(_BYTE *)(i + v3 + 128) = 0;
      *(_BYTE *)(i + v3 + 132) = 0;
      *(_BYTE *)(i + v3 + 136) = 0;
      v6 = *a3;
      *(_BYTE *)(i + v3 + 140) = 0;
      *(_BYTE *)(i + v3 + 144) = 0;
      *(_BYTE *)(i + v3 + 148) = 0;
      *(_BYTE *)(i + v3 + 152) = 0;
      v7 = *(_DWORD *)(i + 20) + 16;
      v30 = v6;
      GetCoordFromRect(&v21, v7, v3);
      if ( v6 )
      {
        v25 = 0;
        v9 = v6 == 0;
        v10 = v22;
        v11 = v21;
        v12 = v29;
        v28 = 0x7FFFFFFF;
        if ( v9 )
          goto LABEL_36;
        v13 = v29 + 2;
        v31 = v29 + 2;
        do
        {
          v14 = *(v13 - 2);
          v26 = v14;
          if ( (v14 < v11 || v14 >= v22)
            && ((v15 = *(v31 - 1), v15 <= v11) || v15 > v22)
            && (v11 < v26 || v11 >= v15)
            && (v22 <= v26 || v22 > v15) )
          {
            result = (unsigned int *)v31;
          }
          else
          {
            result = (unsigned int *)v31;
            v3 = v27;
            if ( v23 > *v31 )
              goto LABEL_6;
            v12 = v29;
            if ( v23 < v28 )
            {
              v28 = v23;
              v11 = v21;
            }
          }
          v13 = (int *)(result + 4);
          v31 = v13;
          v16 = ++v25 < v30;
          v3 = v27;
        }
        while ( v16 );
        if ( v28 == 0x7FFFFFFF )
        {
LABEL_36:
          v20 = 2 * v30;
          v12[2 * v20] = v11;
          v12[2 * v20 + 1] = v10;
          v12[2 * v20 + 2] = v23;
          v12[2 * v20 + 3] = i;
          result = (unsigned int *)(v30 + 1);
          *a3 = v30 + 1;
        }
        else
        {
          result = v12 + 1;
          do
          {
            v17 = *(result - 1);
            if ( v17 >= v11 && v17 < v10
              || (v18 = *result, (int)*result > v11) && v18 <= v10
              || v11 >= v17 && v11 < v18
              || v10 > v17 && v10 <= v18 )
            {
              v19 = v23;
              *(result - 1) = v11;
              *result = v10;
              result[1] = v19;
              result[2] = i;
            }
            result += 4;
            --v30;
          }
          while ( v30 );
          v3 = v27;
        }
      }
      else
      {
        v8 = v29;
        *v29 = v21;
        v8[1] = v22;
        v8[2] = v23;
        result = a3;
        v8[3] = i;
        *a3 = 1;
      }
    }
LABEL_6:
    ;
  }
  return result;
}
