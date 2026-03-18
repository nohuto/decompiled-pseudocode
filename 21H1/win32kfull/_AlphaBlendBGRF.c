/*
 * XREFs of _AlphaBlendBGRF @ 0x1C60DE
 * Callers:
 *     _BltDIB_CY @ 0x1C67B5 (_BltDIB_CY.c)
 *     _ExpandDIB_CY @ 0x1C7594 (_ExpandDIB_CY.c)
 *     _ExpandDIB_CY_ExpCX @ 0x1C7F6C (_ExpandDIB_CY_ExpCX.c)
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 *     _GrayExpandDIB_CY @ 0x1C9547 (_GrayExpandDIB_CY.c)
 *     _GrayExpandDIB_CY_ExpCX @ 0x1C9C3C (_GrayExpandDIB_CY_ExpCX.c)
 *     _GrayShrinkDIB_CY @ 0x1CA729 (_GrayShrinkDIB_CY.c)
 *     _RepDIB_CY @ 0x1CACEC (_RepDIB_CY.c)
 *     _ShrinkDIB_CY @ 0x1CB175 (_ShrinkDIB_CY.c)
 *     _ShrinkDIB_CY_SrkCX @ 0x1CB85E (_ShrinkDIB_CY_SrkCX.c)
 *     _SkipDIB_CY @ 0x1CC159 (_SkipDIB_CY.c)
 *     _TileDIB_CY @ 0x1CC3FC (_TileDIB_CY.c)
 * Callees:
 *     <none>
 */

char __thiscall AlphaBlendBGRF(_DWORD *this)
{
  int v1; // ebx
  unsigned __int16 *v2; // esi
  unsigned __int8 *v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned __int8 *v6; // edi
  unsigned __int8 *v7; // esi
  int v8; // eax
  _BYTE *v9; // esi
  unsigned __int8 *v10; // edi
  int v11; // eax
  __int16 v12; // cx
  _DWORD *v13; // eax
  unsigned __int8 *v14; // ecx
  int v15; // edx
  unsigned __int8 v16; // al
  int v17; // edx
  unsigned int v18; // ecx
  unsigned __int8 *v19; // edx
  unsigned int v20; // esi
  unsigned __int8 v21; // al
  int v22; // esi
  unsigned __int8 v23; // dl
  int v24; // ecx
  _BYTE *v25; // edx
  unsigned int v26; // esi
  unsigned __int8 v27; // al
  int v28; // esi
  unsigned __int8 v29; // dl
  int v30; // ecx
  unsigned __int8 *v31; // edx
  unsigned int v32; // esi
  int v33; // esi
  unsigned __int8 v34; // dl
  int v35; // ecx
  unsigned __int8 v36; // al
  unsigned __int8 *v37; // edx
  unsigned int v38; // esi
  int v39; // esi
  unsigned __int8 v40; // dl
  int v41; // ecx
  unsigned __int8 v42; // al
  int v44; // [esp+Ch] [ebp-18h]
  int v45; // [esp+10h] [ebp-14h]
  unsigned __int8 *v46; // [esp+10h] [ebp-14h]
  _BYTE *v47; // [esp+10h] [ebp-14h]
  unsigned __int8 *v48; // [esp+10h] [ebp-14h]
  unsigned __int8 *v49; // [esp+10h] [ebp-14h]
  unsigned __int8 *v51; // [esp+14h] [ebp-10h]
  unsigned __int8 *v52; // [esp+14h] [ebp-10h]
  int v53; // [esp+18h] [ebp-Ch]
  _BYTE *v54; // [esp+18h] [ebp-Ch]
  unsigned int v55; // [esp+1Ch] [ebp-8h]
  unsigned __int8 v56; // [esp+22h] [ebp-2h]
  unsigned __int8 v57; // [esp+23h] [ebp-1h]
  unsigned __int8 v58; // [esp+23h] [ebp-1h]

  v53 = *this;
  v1 = this[52];
  v2 = (unsigned __int16 *)this[82];
  v45 = this[2] & 4;
  v3 = (unsigned __int8 *)this[81];
  v55 = this[83];
  ((void (__cdecl *)(_DWORD *, unsigned __int8 *))this[18])(this + 16, v3);
  v44 = v53 & 0x80;
  if ( (v53 & 0x1000) != 0 )
  {
    if ( (v53 & 0x80) != 0 )
    {
      if ( v45 )
      {
        v4 = v55;
        do
        {
          if ( *((_BYTE *)v2 + 3) )
          {
            *v2 = *(_WORD *)(v1 + 2 * *((unsigned __int8 *)v2 + 1)) + *(_WORD *)(v1 + 2 * *v3 + 1536);
            v4 = v55;
          }
          v2 += 2;
          ++v3;
        }
        while ( (unsigned int)v2 < v4 );
      }
      else
      {
        v5 = v55;
        v6 = v3 + 2;
        v7 = (unsigned __int8 *)v2 + 1;
        do
        {
          if ( v7[2] )
          {
            *(v7 - 1) = (unsigned __int16)(*(_WORD *)(v1 + 2 * *(v7 - 1)) + *(_WORD *)(v1 + 2 * *(v6 - 2) + 1536)) >> 8;
            v8 = v7[1];
            *v7 = (unsigned __int16)(*(_WORD *)(v1 + 2 * *v7 + 512) + *(_WORD *)(v1 + 2 * *(v6 - 1) + 1536)) >> 8;
            v7[1] = (unsigned __int16)(*(_WORD *)(v1 + 2 * *v6 + 1536) + *(_WORD *)(v1 + 2 * v8 + 1024)) >> 8;
            v5 = v55;
          }
          v7 += 4;
          v6 += 3;
          LOBYTE(v4) = (_BYTE)v7 - 1;
        }
        while ( (unsigned int)(v7 - 1) < v5 );
      }
    }
    else if ( v45 )
    {
      do
      {
        LOWORD(v4) = *(_WORD *)(v1 + 2 * *((unsigned __int8 *)v2 + 1)) + *(_WORD *)(v1 + 2 * *v3++ + 1536);
        *v2 = v4;
        v2 += 2;
      }
      while ( (unsigned int)v2 < v55 );
    }
    else
    {
      v9 = v2 + 1;
      v10 = v3 + 2;
      do
      {
        *(v9 - 2) = (unsigned __int16)(*(_WORD *)(v1 + 2 * (unsigned __int8)*(v9 - 2))
                                     + *(_WORD *)(v1 + 2 * *(v10 - 2) + 1536)) >> 8;
        v11 = (unsigned __int8)*v9;
        *(v9 - 1) = (unsigned __int16)(*(_WORD *)(v1 + 2 * (unsigned __int8)*(v9 - 1) + 512)
                                     + *(_WORD *)(v1 + 2 * *(v10 - 1) + 1536)) >> 8;
        v12 = *(_WORD *)(v1 + 2 * v11 + 1024);
        v4 = *v10;
        v10 += 3;
        *v9 = (unsigned __int16)(*(_WORD *)(v1 + 2 * v4 + 1536) + v12) >> 8;
        v9 += 4;
        LOBYTE(v4) = (_BYTE)v9 - 2;
      }
      while ( (unsigned int)(v9 - 2) < v55 );
    }
    return v4;
  }
  ((void (__cdecl *)(_DWORD *))this[38])(this);
  v13 = this;
  v14 = (unsigned __int8 *)this[53];
  v51 = v14;
  if ( !v45 )
  {
    if ( (v53 & 0x100000) != 0 )
    {
      v4 = v13[21] + 3;
      v54 = (_BYTE *)v4;
      if ( v44 )
      {
        v19 = (unsigned __int8 *)v2 + 1;
        v20 = v55;
        v46 = v19;
        while ( 1 )
        {
          if ( v19[2] )
          {
            v21 = *v14;
            if ( !*v14 )
            {
              *(_WORD *)(v19 - 1) = *(_WORD *)v3;
              v19[1] = v3[2];
              goto LABEL_46;
            }
            if ( v21 != 0xFF )
            {
              v22 = (unsigned __int16)GrayIdxWORD[v21];
              *v54 = *v14 + *v54 - ((v22 * (unsigned int)(unsigned __int8)*v54 + 0x8000) >> 16);
              *(v46 - 1) = *v3 + ((v22 * (*(unsigned __int8 *)(*(v46 - 1) + v1) - (unsigned int)*v3) + 0x8000) >> 16);
              *v46 = v3[1] + ((v22 * (*(unsigned __int8 *)(*v46 + v1 + 256) - (unsigned int)v3[1]) + 0x8000) >> 16);
              v23 = v3[2];
              v24 = v22 * (*(unsigned __int8 *)(v46[1] + v1 + 512) - v23);
              v20 = v55;
              LOBYTE(v24) = v23 + ((unsigned int)(v24 + 0x8000) >> 16);
              v19 = v46;
              v46[1] = v24;
              v14 = v51;
LABEL_46:
              v4 = (unsigned int)v54;
              goto LABEL_47;
            }
            *(v19 - 1) = *(_BYTE *)(*(v19 - 1) + v1);
            *v19 = *(_BYTE *)(*v19 + v1);
            v19[1] = *(_BYTE *)(v19[1] + v1);
            v4 = (unsigned int)v54;
            *v54 = -1;
          }
LABEL_47:
          v19 += 4;
          v54 = (_BYTE *)(v4 + 4);
          ++v14;
          v3 += 3;
          v51 = v14;
          v46 = v19;
          v4 += 4;
          if ( (unsigned int)(v19 - 1) >= v20 )
            return v4;
        }
      }
      v25 = v2 + 1;
      v26 = v55;
      v47 = v25;
      while ( 1 )
      {
        v27 = *v14++;
        v57 = v27;
        v52 = v14;
        if ( !v27 )
          break;
        if ( v27 != 255 )
        {
          v28 = (unsigned __int16)GrayIdxWORD[v27];
          *v54 = v27 + *v54 - ((v28 * (unsigned int)(unsigned __int8)*v54 + 0x8000) >> 16);
          *(v47 - 2) = *v3
                     + ((v28 * (*(unsigned __int8 *)((unsigned __int8)*(v47 - 2) + v1) - (unsigned int)*v3) + 0x8000) >> 16);
          *(v47 - 1) = v3[1]
                     + ((v28 * (*(unsigned __int8 *)((unsigned __int8)*(v47 - 1) + v1 + 256) - (unsigned int)v3[1])
                       + 0x8000) >> 16);
          v29 = v3[2];
          v30 = v28 * (*(unsigned __int8 *)((unsigned __int8)*v47 + v1 + 512) - v29);
          v26 = v55;
          LOBYTE(v30) = v29 + ((unsigned int)(v30 + 0x8000) >> 16);
          v25 = v47;
          *v47 = v30;
          v14 = v52;
LABEL_55:
          v4 = (unsigned int)v54;
          goto LABEL_56;
        }
        *(v25 - 2) = *(_BYTE *)((unsigned __int8)*(v25 - 2) + v1);
        *(v25 - 1) = *(_BYTE *)((unsigned __int8)*(v25 - 1) + v1);
        *v25 = *(_BYTE *)((unsigned __int8)*v25 + v1);
        v4 = (unsigned int)v54;
        *v54 = v57;
LABEL_56:
        v25 += 4;
        v54 = (_BYTE *)(v4 + 4);
        v3 += 3;
        v47 = v25;
        LOBYTE(v4) = (_BYTE)v25 - 2;
        if ( (unsigned int)(v25 - 2) >= v26 )
          return v4;
      }
      *((_WORD *)v25 - 1) = *(_WORD *)v3;
      *v25 = v3[2];
      goto LABEL_55;
    }
    if ( (v53 & 0x80) != 0 )
    {
      v31 = (unsigned __int8 *)v2 + 1;
      v32 = v55;
      v48 = v31;
      while ( 1 )
      {
        if ( v31[2] )
        {
          v58 = *v14;
          if ( !*v14 )
          {
            *(_WORD *)(v31 - 1) = *(_WORD *)v3;
            v36 = v3[2];
            goto LABEL_66;
          }
          if ( v58 == 0xFF )
          {
            *(v31 - 1) = *(_BYTE *)(*(v31 - 1) + v1);
            *v31 = *(_BYTE *)(*v31 + v1);
            v36 = *(_BYTE *)(v31[1] + v1);
LABEL_66:
            v31[1] = v36;
            goto LABEL_67;
          }
          v33 = (unsigned __int16)GrayIdxWORD[v58];
          *(v48 - 1) = *v3 + ((v33 * (*(unsigned __int8 *)(*(v31 - 1) + v1) - (unsigned int)*v3) + 0x8000) >> 16);
          *v48 = v3[1] + ((v33 * (*(unsigned __int8 *)(*v48 + v1 + 256) - (unsigned int)v3[1]) + 0x8000) >> 16);
          v34 = v3[2];
          v35 = v33 * (*(unsigned __int8 *)(v48[1] + v1 + 512) - v34);
          v32 = v55;
          LOBYTE(v35) = v34 + ((unsigned int)(v35 + 0x8000) >> 16);
          v31 = v48;
          v48[1] = v35;
          v14 = v51;
        }
LABEL_67:
        v31 += 4;
        ++v14;
        v3 += 3;
        v51 = v14;
        v48 = v31;
        LOBYTE(v4) = (_BYTE)v31 - 1;
        if ( (unsigned int)(v31 - 1) >= v32 )
          return v4;
      }
    }
    v37 = (unsigned __int8 *)(v2 + 1);
    v38 = v55;
    v49 = v37;
    while ( 1 )
    {
      v56 = *v14;
      if ( !*v14 )
        break;
      if ( v56 == 0xFF )
      {
        *(v37 - 2) = *(_BYTE *)(*(v37 - 2) + v1);
        *(v37 - 1) = *(_BYTE *)(*(v37 - 1) + v1);
        v42 = *(_BYTE *)(*v37 + v1);
LABEL_75:
        *v37 = v42;
        goto LABEL_76;
      }
      v39 = (unsigned __int16)GrayIdxWORD[v56];
      *(v49 - 2) = *v3 + ((v39 * (*(unsigned __int8 *)(*(v37 - 2) + v1) - (unsigned int)*v3) + 0x8000) >> 16);
      *(v49 - 1) = v3[1] + ((v39 * (*(unsigned __int8 *)(*(v49 - 1) + v1 + 256) - (unsigned int)v3[1]) + 0x8000) >> 16);
      v40 = v3[2];
      v41 = v39 * (*(unsigned __int8 *)(*v49 + v1 + 512) - v40);
      v38 = v55;
      LOBYTE(v41) = v40 + ((unsigned int)(v41 + 0x8000) >> 16);
      v37 = v49;
      *v49 = v41;
      v14 = v51;
LABEL_76:
      v37 += 4;
      ++v14;
      v3 += 3;
      v51 = v14;
      v49 = v37;
      LOBYTE(v4) = (_BYTE)v37 - 2;
      if ( (unsigned int)(v37 - 2) >= v38 )
        return v4;
    }
    *((_WORD *)v37 - 1) = *(_WORD *)v3;
    v42 = v3[2];
    goto LABEL_75;
  }
  if ( (v53 & 0x80) != 0 )
  {
    v4 = v55;
    do
    {
      if ( *((_BYTE *)v2 + 3) )
      {
        v15 = (unsigned __int16)GrayIdxWORD[*v3];
        v16 = *v14;
        if ( *v14 )
        {
          if ( v16 != 0xFF )
          {
            *v2 = v15 + (((*v2 - v15) * ((unsigned __int16)GrayIdxWORD[v16] >> 4) + 2048) >> 12);
            v14 = v51;
          }
        }
        else
        {
          *v2 = v15;
        }
        v4 = v55;
      }
      ++v14;
      v2 += 2;
      ++v3;
      v51 = v14;
    }
    while ( (unsigned int)v2 < v4 );
  }
  else
  {
    do
    {
      v4 = *v3++;
      v17 = (unsigned __int16)GrayIdxWORD[v4];
      LOBYTE(v4) = *v14;
      if ( *v14 )
      {
        if ( (_BYTE)v4 != 0xFF )
        {
          v18 = (unsigned __int16)GrayIdxWORD[(unsigned __int8)v4];
          v4 = *v2 - v17;
          *v2 = v17 + ((int)(v4 * (v18 >> 4) + 2048) >> 12);
          v14 = v51;
        }
      }
      else
      {
        *v2 = v17;
      }
      ++v14;
      v2 += 2;
      v51 = v14;
    }
    while ( (unsigned int)v2 < v55 );
  }
  return v4;
}
