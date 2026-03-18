/*
 * XREFs of _ShrinkDIB_CX @ 0x1CAEA9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl ShrinkDIB_CX(int a1, unsigned __int8 *a2, _BYTE *a3, int a4, int a5)
{
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  unsigned __int16 *v11; // eax
  unsigned __int8 *v12; // edx
  int v13; // ebx
  __int16 v14; // ax
  int v15; // esi
  int v16; // ebx
  int v17; // esi
  int v18; // eax
  int v19; // edx
  unsigned int v20; // eax
  bool v21; // zf
  unsigned int v22; // eax
  _BYTE *v23; // ebx
  int v24; // ebx
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // ebx
  int v29; // ecx
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  _BYTE v38[36]; // [esp+0h] [ebp-44h] BYREF
  int v39; // [esp+24h] [ebp-20h]
  int v40; // [esp+28h] [ebp-1Ch]
  int v41; // [esp+2Ch] [ebp-18h]
  _DWORD *v42; // [esp+30h] [ebp-14h]
  unsigned int v43; // [esp+34h] [ebp-10h]
  int v44; // [esp+38h] [ebp-Ch]
  unsigned int v45; // [esp+3Ch] [ebp-8h]
  unsigned __int16 *v46; // [esp+40h] [ebp-4h]
  int v47; // [esp+50h] [ebp+Ch]

  if ( a2 )
  {
    v5 = *(unsigned __int16 *)(a1 + 14);
    if ( *(_WORD *)(a1 + 14) )
    {
      v6 = v5 * a2[2];
      v7 = v5 * a2[1];
      v8 = v5 * *a2;
      v9 = 3 * *(unsigned __int16 *)(a1 + 10);
      *(_DWORD *)&v38[24] = v6;
      *(_DWORD *)&v38[28] = v7;
      *(_DWORD *)&v38[32] = v8;
      a2 += v9;
    }
    else
    {
      memset(&v38[24], 0, 12);
      v8 = 0;
      v7 = 0;
      v6 = 0;
    }
    v10 = *(_DWORD *)(a1 + 24);
    v11 = *(unsigned __int16 **)(a1 + 32);
    v39 = *(unsigned __int16 *)(a1 + 12);
    v41 = v10;
    v12 = a2;
    v46 = v11;
    v43 = (unsigned __int16)v39;
    if ( (_WORD)v39 )
    {
      do
      {
        v45 = *v11;
        v46 = v11 + 1;
        v13 = v41 + ((v45 >> 5) & 0x400);
        v44 = v12[2];
        v40 = v13;
        v42 = (_DWORD *)(v13 + 4 * v44);
        v14 = v45;
        if ( (v45 & 0x4000) != 0 )
        {
          v45 &= 0x3FFFu;
          v15 = (v14 & 0x3FFF) * v44 + v6;
          v44 *= v14 & 0x3FFF;
          v16 = v12[1];
          *(_DWORD *)&v38[24] = v15;
          v17 = v14 & 0x3FFF;
          v45 = v17 * v16;
          v18 = *v12;
          *(_DWORD *)&v38[28] = v17 * v16 + v7;
          v19 = v17 * v18;
          *(_DWORD *)&v38[32] = v17 * v18 + v8;
          qmemcpy(v38, &v38[12], 0x18u);
          v6 = *v42 - v44;
          v8 = *(_DWORD *)(v40 + 4 * v18) - v19;
          v7 = *(_DWORD *)(v40 + 4 * v16) - v45;
          v20 = v43 - 1;
          v12 = a2;
          --v43;
        }
        else
        {
          v6 += *v42;
          v7 += *(_DWORD *)(v13 + 4 * v12[1]);
          v8 += *(_DWORD *)(v13 + 4 * *v12);
          v20 = v43;
        }
        v12 += 3;
        *(_DWORD *)&v38[32] = v8;
        v21 = v20 == 0;
        *(_DWORD *)&v38[28] = v7;
        v11 = v46;
        *(_DWORD *)&v38[24] = v6;
        a2 = v12;
      }
      while ( !v21 );
    }
    if ( (_WORD)v39 == 1 )
    {
      *(_DWORD *)v38 = *(_DWORD *)&v38[12];
      *(_DWORD *)&v38[4] = *(_DWORD *)&v38[16];
      *(_DWORD *)&v38[8] = *(_DWORD *)&v38[20];
      v8 = *(_DWORD *)&v38[32];
      v7 = *(_DWORD *)&v38[28];
      v6 = *(_DWORD *)&v38[24];
    }
    v22 = *v11;
    v23 = a3;
    v43 = v22;
    if ( v22 )
    {
      v45 = (unsigned int)a3;
      do
      {
        ++v46;
        v24 = v12[2];
        v25 = (_DWORD *)(v41 + ((v22 >> 5) & 0x400));
        v42 = v25;
        if ( (v43 & 0x4000) != 0 )
        {
          v26 = v43 & 0x3FFF;
          v47 = v26 * v24;
          *(_DWORD *)&v38[24] = v6 + v26 * v24;
          v39 = v26 * v12[1];
          v27 = v39 + v7;
          v28 = v26 * *v12;
          *(_DWORD *)&v38[28] = v39 + v7;
          v29 = v28 + v8;
          v40 = v28;
          v30 = v45;
          *(_DWORD *)&v38[32] = v29;
          v31 = (6 * *(_DWORD *)&v38[20] - *(_DWORD *)&v38[8] - v29) >> 15;
          if ( (v31 & 0xFF00) != 0 )
            LOBYTE(v31) = ~HIBYTE(v31);
          *(_BYTE *)v45 = v31;
          v32 = (6 * *(_DWORD *)&v38[16] - v27 - *(_DWORD *)&v38[4]) >> 15;
          if ( (v32 & 0xFF00) != 0 )
            LOBYTE(v32) = ~HIBYTE(v32);
          *(_BYTE *)(v30 + 1) = v32;
          v33 = (6 * *(_DWORD *)&v38[12] - *(_DWORD *)&v38[24] - *(_DWORD *)v38) >> 15;
          if ( (v33 & 0xFF00) != 0 )
            LOBYTE(v33) = ~HIBYTE(v33);
          *(_BYTE *)(v30 + 2) = v33;
          v34 = v12[2];
          v23 = (_BYTE *)(a5 + v30);
          qmemcpy(v38, &v38[12], 0x18u);
          v45 = (unsigned int)v23;
          v6 = v42[v34] - v47;
          v7 = v42[v12[1]] - v39;
          v8 = v42[*v12] - v40;
        }
        else
        {
          v6 += v25[v24];
          v7 += v42[v12[1]];
          v8 += v42[*v12];
          v23 = (_BYTE *)v45;
        }
        v12 += 3;
        v22 = *v46;
        v43 = v22;
      }
      while ( v22 );
    }
    if ( v23 == (_BYTE *)(a4 - a5) )
    {
      v35 = (5 * *(_DWORD *)&v38[20] - *(_DWORD *)&v38[8]) >> 15;
      if ( (v35 & 0xFF00) != 0 )
        LOBYTE(v35) = ~HIBYTE(v35);
      *v23 = v35;
      v36 = (5 * *(_DWORD *)&v38[16] - *(_DWORD *)&v38[4]) >> 15;
      if ( (v36 & 0xFF00) != 0 )
        LOBYTE(v36) = ~HIBYTE(v36);
      v23[1] = v36;
      v37 = (5 * *(_DWORD *)&v38[12] - *(_DWORD *)v38) >> 15;
      if ( (v37 & 0xFF00) != 0 )
        v37 = ~HIBYTE(v37);
      v23[2] = v37;
    }
  }
}
