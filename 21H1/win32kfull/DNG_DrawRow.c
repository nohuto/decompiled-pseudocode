/*
 * XREFs of DNG_DrawRow @ 0x51780
 * Callers:
 *     RenderNineGridInternal @ 0x50CC0 (RenderNineGridInternal.c)
 *     DNG_StretchCol @ 0xB7EF6 (DNG_StretchCol.c)
 * Callees:
 *     DNG_StretchRow @ 0xA1CC0 (DNG_StretchRow.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

char *__thiscall DNG_DrawRow(_DWORD *this)
{
  _DWORD *v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  signed int v6; // ecx
  char *v7; // edx
  char *v8; // eax
  char *v9; // esi
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  char *result; // eax
  int v14; // edi
  int v15; // esi
  _DWORD *v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  char *v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // esi
  unsigned int v23; // esi
  bool v24; // cf
  int v25; // ecx
  char *v26; // esi
  int v27; // ecx
  int v28; // eax
  signed int v29; // ecx
  char *v30; // edx
  char *v31; // esi
  int v32; // esi
  int v33; // eax
  signed int v34; // ecx
  int v35; // edx
  unsigned int v36; // edi
  char *v37; // ecx
  char *v38; // eax
  _DWORD *v39; // edx
  char *v40; // edi
  int v41; // edi
  int v42; // [esp+Ch] [ebp-1Ch]
  unsigned int v43; // [esp+Ch] [ebp-1Ch]
  int v44; // [esp+Ch] [ebp-1Ch]
  _DWORD *v45; // [esp+10h] [ebp-18h]
  unsigned int v46; // [esp+14h] [ebp-14h]
  unsigned int v47; // [esp+14h] [ebp-14h]
  int v48; // [esp+14h] [ebp-14h]
  int v49; // [esp+18h] [ebp-10h]
  int v50; // [esp+18h] [ebp-10h]
  int v51; // [esp+1Ch] [ebp-Ch]
  char *v52; // [esp+1Ch] [ebp-Ch]
  int v53; // [esp+20h] [ebp-8h]
  _DWORD *v54; // [esp+20h] [ebp-8h]

  v1 = this;
  v2 = this[2];
  v3 = this[6];
  v49 = v2;
  v4 = this[39];
  v51 = v3;
  this[11] = 0;
  if ( *v1 < v4 )
  {
    if ( v1[12] == v4 )
    {
      v5 = v1[13];
      v6 = 4 * (v1[14] - v5);
      v7 = (char *)(v51 + 4 * v5);
      v8 = (char *)(v49 + 4 * v5);
      if ( v6 > 0 && &v8[v6] > v8 && &v7[v6] > v7 )
      {
        v46 = v1[51];
        if ( v46 <= (unsigned int)v8 )
        {
          v9 = &v7[v6];
          if ( (unsigned int)&v8[v6] <= v1[52]
            && (v46 <= (unsigned int)v7 && (unsigned int)v9 <= v1[52]
             || v1[53] <= (unsigned int)v7 && (unsigned int)v9 <= v1[54]) )
          {
            memcpy(v8, v7, v6);
          }
        }
      }
    }
    else
    {
      DNG_StretchRow(v3, v1 + 23);
    }
  }
  v10 = v49 + 4 * v1[39];
  v11 = v1[12];
  v12 = v11 + v1[11];
  v50 = v10;
  v1[11] = v12;
  result = (char *)(v51 + 4 * v11);
  v52 = result;
  if ( v12 >= v11 )
  {
    if ( v1[22] )
    {
      v14 = v1[20];
      v15 = v1[21];
      if ( v14 < v15 )
      {
        if ( v1[41] )
        {
          v32 = v15 - v14;
          v33 = v14 - v11;
          v54 = (_DWORD *)(v50 + 4 * (v14 - v11));
          v34 = v1[18];
          v35 = v33 % v34;
          v48 = v34;
          v36 = v34;
          v44 = v34 - v33 % v34;
          v37 = &v52[4 * (v33 % v34)];
          if ( v32 > v44 )
          {
            v38 = v52;
          }
          else
          {
            v36 = v32;
            v38 = &v52[4 * v35];
          }
          if ( v32 > 0 && (unsigned int)v32 < 0x3FFFFFFF && v36 < 0x3FFFFFFF )
          {
            v45 = &v54[v32];
            v1 = this;
            if ( v54 < v45 && this[51] <= (unsigned int)v54 )
            {
              v39 = v54;
              if ( (unsigned int)v45 <= this[52] )
              {
                v40 = &v38[4 * v36];
                if ( v38 < v40 && this[53] <= (unsigned int)v38 && (unsigned int)v40 <= this[54] && v48 >= 0 )
                {
                  v41 = v44;
                  do
                  {
                    *v39 = *(_DWORD *)v37;
                    if ( !--v41 )
                    {
                      v41 = this[18];
                      v37 -= 4 * v41;
                    }
                    ++v39;
                    v37 += 4;
                    --v32;
                  }
                  while ( v32 );
                }
              }
            }
          }
        }
        else
        {
          v53 = v1[44];
          v16 = (_DWORD *)(v50 + 4 * v1[48]);
          v17 = v1[45];
          v18 = v1[43];
          v42 = v17;
          v19 = &v52[4 * this[42]];
          v20 = (unsigned int)&v52[4 * (this[10] - v12)];
          v47 = v20;
          if ( this[51] > (unsigned int)v16 )
          {
            v1 = this;
          }
          else
          {
            v21 = v50 + 4 * this[49];
            if ( v21 > this[52] || this[53] > (unsigned int)v19 )
            {
              v1 = this;
            }
            else
            {
              v22 = v53;
              if ( v20 <= this[54] && (unsigned int)v16 < v21 )
              {
                do
                {
                  if ( (unsigned int)v19 >= v20 )
                    break;
                  v23 = v18 + v22;
                  v24 = v23 < v18;
                  *v16 = *(_DWORD *)v19;
                  v20 = v47;
                  v18 = v23;
                  v22 = v53;
                  ++v16;
                  v19 += 4 * v42 + 4 * v24;
                }
                while ( (unsigned int)v16 < v21 );
              }
              v1 = this;
            }
          }
        }
      }
      v12 = v1[11];
      v10 = v50 + 4 * v1[19];
    }
    v25 = v1[18];
    v26 = &v52[4 * v25];
    result = (char *)(v25 + v12);
    v1[11] = v25 + v12;
    if ( v25 + v12 >= v25 )
    {
      v27 = v1[40];
      result = (char *)(v1[4] - v27);
      if ( v1[1] > (int)result )
      {
        if ( v1[15] == v27 )
        {
          v28 = v1[16];
          v29 = 4 * (v1[17] - v28);
          v30 = &v26[4 * v28];
          result = (char *)(v10 + 4 * v28);
          if ( v29 > 0 && &result[v29] > result && &v30[v29] > v30 )
          {
            v43 = v1[51];
            if ( v43 <= (unsigned int)result )
            {
              v31 = &v30[v29];
              if ( (unsigned int)&result[v29] <= v1[52]
                && (v43 <= (unsigned int)v30 && (unsigned int)v31 <= v1[52]
                 || v1[53] <= (unsigned int)v30 && (unsigned int)v31 <= v1[54]) )
              {
                return (char *)memcpy(result, v30, v29);
              }
            }
          }
        }
        else
        {
          return (char *)DNG_StretchRow(v26, v1 + 31);
        }
      }
    }
  }
  return result;
}
