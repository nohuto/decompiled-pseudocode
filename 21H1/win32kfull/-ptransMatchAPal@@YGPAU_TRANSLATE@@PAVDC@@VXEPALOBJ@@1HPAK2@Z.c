/*
 * XREFs of ?ptransMatchAPal@@YGPAU_TRANSLATE@@PAVDC@@VXEPALOBJ@@1HPAK2@Z @ 0x222F82
 * Callers:
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?ColorMatch@@YGKVXEPALOBJ@@T_PAL_ULONG@@PAK@Z @ 0x222D2D (-ColorMatch@@YGKVXEPALOBJ@@T_PAL_ULONG@@PAK@Z.c)
 */

_DWORD *__fastcall ptransMatchAPal(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // ecx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  _DWORD *result; // eax
  _DWORD *v10; // eax
  signed __int32 v11; // ecx
  int v12; // esi
  _DWORD *v13; // eax
  unsigned int v14; // edx
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // edx
  char i; // al
  unsigned int v20; // ecx
  _DWORD *v21; // esi
  signed __int32 v22; // ecx
  _DWORD *v23; // edx
  _DWORD *v24; // ecx
  int v25; // eax
  int v26; // [esp+Ch] [ebp-30h]
  _DWORD *v27; // [esp+10h] [ebp-2Ch]
  unsigned int v29; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  unsigned int v31; // [esp+1Ch] [ebp-20h]
  int v32; // [esp+20h] [ebp-1Ch]
  char v33; // [esp+24h] [ebp-18h]
  int v34; // [esp+28h] [ebp-14h]
  unsigned int v35; // [esp+2Ch] [ebp-10h]
  int v36; // [esp+30h] [ebp-Ch]
  int v37; // [esp+30h] [ebp-Ch]
  int v38; // [esp+30h] [ebp-Ch]
  unsigned int v39; // [esp+34h] [ebp-8h] BYREF
  char v40; // [esp+3Bh] [ebp-1h]

  v6 = a3[4];
  if ( (v6 & 0x1000) != 0 )
  {
    v7 = 1;
  }
  else if ( (v6 & 0x10000) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = a3[11] >> 1;
  }
  v39 = 0;
  v32 = 0;
  v35 = 256 - v7;
  v8 = v7;
  result = PALLOCMEM2(a4[5] + 7, 1818316871, 0);
  v27 = result;
  if ( result )
  {
    v10 = a4;
    v26 = a4[5];
    if ( a2 )
    {
      v11 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
      a3[6] = v11;
      v12 = (int)a3;
      v13 = (_DWORD *)a3[20];
      if ( v13 != a3 )
      {
        v13[6] = v11;
        v12 = (int)a3;
      }
      v14 = v7;
      v39 = v7;
      if ( v7 >= v35 )
      {
        v10 = a4;
      }
      else
      {
        do
        {
          v15 = *(_DWORD *)(v12 + 76);
          v36 = *(_DWORD *)(v15 + 4 * v14);
          HIBYTE(v36) &= 0xCEu;
          *(_DWORD *)(v15 + 4 * v14++) = v36;
          v12 = (int)a3;
        }
        while ( v14 < v35 );
        v10 = a4;
        v8 = v7;
        v39 = v14;
      }
    }
    else
    {
      v12 = (int)a3;
    }
    v16 = 0;
    v40 = 48;
    v29 = 0;
    if ( v10[5] )
    {
      while ( 1 )
      {
        v37 = *(_DWORD *)(v10[19] + 4 * v16);
        v17 = ColorMatch((int *)&v39, v12, v37);
        v33 = v17;
        if ( v39 )
        {
          if ( v8 || (*(_DWORD *)(v12 + 16) & 0x10000) != 0 )
          {
            for ( i = v40; ; v40 = i )
            {
              v39 = v8;
              if ( v8 < v35 )
                break;
LABEL_26:
              if ( (i & 0x10) == 0 )
              {
                v8 = 0;
                goto LABEL_30;
              }
              i &= ~0x10u;
              v8 = v7;
            }
            v30 = *(_DWORD *)(v12 + 76);
            v20 = v8;
            v31 = v8;
            v34 = v30 + 4 * v8;
            while ( 1 )
            {
              v12 = (int)a3;
              if ( ((unsigned __int8)i & *(_BYTE *)(v34 + 3)) == 0 )
                break;
              v34 += 4;
              v8 = v31 + 1;
              v39 = v8;
              v20 = ++v31;
              if ( v8 >= v35 )
                goto LABEL_26;
            }
            HIBYTE(v37) |= 0x30u;
            ++v32;
            *(_DWORD *)(v30 + 4 * v8) = v37;
            v8 = v20;
            v33 = v20;
          }
        }
        else if ( (v37 & 0x2000000) == 0 )
        {
          v18 = *(_DWORD *)(v12 + 76);
          v38 = *(_DWORD *)(v18 + 4 * v17);
          HIBYTE(v38) |= 0x30u;
          *(_DWORD *)(v18 + 4 * v17) = v38;
        }
LABEL_30:
        v21 = v27;
        *((_BYTE *)v27 + v29 + 4) = v33;
        v16 = v29 + 1;
        v10 = a4;
        v29 = v16;
        if ( v16 >= a4[5] )
          break;
        v12 = (int)a3;
      }
    }
    else
    {
      v21 = v27;
    }
    v22 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
    a4[6] = v22;
    v23 = (_DWORD *)a4[20];
    if ( v23 != a4 )
      v23[6] = v22;
    v24 = (_DWORD *)a3[20];
    if ( v24 == a3 )
      v25 = a3[6];
    else
      v25 = v24[6];
    *v21 = v25;
    *a5 = v32;
    *a6 = v26;
    return v21;
  }
  return result;
}
