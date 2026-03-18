/*
 * XREFs of ?vPatCpyRect1_6x6@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22CE2A
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU_PATBLTFRAME@@H@Z@Z @ 0x22CB54 (-vDIBnPatBltSrccopy6x6@@YGXPAVSURFACE@@PAU_CLIPOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@P6GXPAU.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vPatCpyRect1_6x6(struct _PATBLTFRAME *a1, int a2)
{
  int *v2; // esi
  int v3; // ecx
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  int *v12; // esi
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // ebx
  int v16; // ecx
  unsigned int v17; // esi
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // esi
  int v22; // edi
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // edi
  const void *v28; // eax
  int v29; // esi
  char *i; // edi
  int v31; // edi
  int v32; // esi
  int v33; // eax
  int v34; // esi
  const void *v35; // eax
  char *v36; // ebx
  int v37; // edi
  const void *v38; // esi
  void *v39; // edi
  int *v40; // ebx
  int v41; // esi
  const void *v42; // ecx
  int v43; // edi
  const void *v44; // esi
  void *v45; // edi
  int *v46; // ebx
  int v47; // esi
  const void *v48; // ecx
  bool v49; // zf
  int v50; // [esp-4h] [ebp-90h]
  int v51; // [esp+Ch] [ebp-80h]
  unsigned __int8 *v52; // [esp+10h] [ebp-7Ch]
  char v53; // [esp+14h] [ebp-78h]
  int v54; // [esp+18h] [ebp-74h]
  int v55; // [esp+1Ch] [ebp-70h]
  int v56; // [esp+20h] [ebp-6Ch]
  int *v57; // [esp+28h] [ebp-64h]
  int MaxCount; // [esp+2Ch] [ebp-60h]
  int v59; // [esp+30h] [ebp-5Ch]
  int v60; // [esp+34h] [ebp-58h]
  int v61; // [esp+38h] [ebp-54h]
  unsigned __int8 *v62; // [esp+3Ch] [ebp-50h]
  unsigned int v63; // [esp+44h] [ebp-48h]
  int v64; // [esp+48h] [ebp-44h]
  int v65; // [esp+4Ch] [ebp-40h]
  int v66; // [esp+50h] [ebp-3Ch]
  char *v67; // [esp+54h] [ebp-38h]
  unsigned int v68; // [esp+58h] [ebp-34h]
  int v69; // [esp+5Ch] [ebp-30h]
  int v70; // [esp+60h] [ebp-2Ch]
  char v71; // [esp+67h] [ebp-25h]
  int v72; // [esp+68h] [ebp-24h]
  int v73; // [esp+6Ch] [ebp-20h]
  int v74; // [esp+6Ch] [ebp-20h]
  int v75; // [esp+70h] [ebp-1Ch]
  int v76; // [esp+70h] [ebp-1Ch]
  int v77; // [esp+70h] [ebp-1Ch]
  int v78; // [esp+74h] [ebp-18h]
  int v79; // [esp+74h] [ebp-18h]
  int v80; // [esp+74h] [ebp-18h]
  int Src; // [esp+78h] [ebp-14h] BYREF
  int v82; // [esp+7Ch] [ebp-10h] BYREF
  int v83; // [esp+80h] [ebp-Ch]
  int v84; // [esp+84h] [ebp-8h]

  v2 = (int *)*((_DWORD *)a1 + 4);
  v57 = v2;
  v54 = *((_DWORD *)a1 + 2);
  v72 = 6 * v54;
  do
  {
    v3 = *v2;
    v4 = v2[2];
    v68 = (unsigned int)(&aulMsk)[*v2 & 0x1F];
    v64 = ~v68;
    v5 = (unsigned int *)((char *)(&aulMsk)[v4 & 0x1F] + 1) != 0 ? (unsigned int)(&aulMsk)[v4 & 0x1F] : 0;
    v66 = v2[1];
    v6 = *v2 >> 5;
    v63 = v5;
    v60 = ~v5;
    v7 = (v4 >> 5) - ((v3 + 31) >> 5);
    v61 = *(_DWORD *)a1 + v66 * *((_DWORD *)a1 + 2) + 4 * (v3 >> 5);
    v55 = v7;
    if ( v7 == -1 )
      goto LABEL_11;
    if ( !v7 )
    {
      if ( v68 == -1 || !v5 )
      {
LABEL_11:
        v68 &= v60;
        v50 = 9;
        v64 = ~v68;
      }
      else
      {
        v50 = 8;
      }
      v9 = v50;
      v69 = v50;
      goto LABEL_13;
    }
    if ( v68 == -1 )
      v8 = 3 - (v5 != 0);
    else
      v8 = v5 == 0;
    v69 = v8;
    v9 = v8;
LABEL_13:
    v10 = *((_DWORD *)a1 + 1);
    if ( v66 == *((_DWORD *)a1 + 6) )
      v62 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
    else
      v62 = (unsigned __int8 *)(v10 + 8 * (((v66 - *((_DWORD *)a1 + 6)) % 6 + 6) % 6));
    v52 = (unsigned __int8 *)(v10 + 48);
    v59 = v7 / 3;
    MaxCount = 4 * v7;
    v65 = v7 % 3;
    v11 = v6 % 3;
    v12 = v57;
    v56 = v11;
    v13 = 6;
    v71 = *((_BYTE *)a1 + 20);
    v14 = v57[3] - v66;
    if ( v14 >= 6 || (v13 = v57[3] - v66, v14) )
    {
      v53 = 6 - *((_BYTE *)a1 + 20);
      while ( 1 )
      {
        v15 = (_DWORD *)v61;
        v67 = (char *)v61;
        v61 += v54;
        v51 = v13 - 1;
        v16 = (v12[3] - v66++ + 5) / 6;
        v70 = v16;
        v17 = *v62 >> 2;
        if ( v71 )
          v17 = ((unsigned __int8)(*v62 >> 2 << v53) | (unsigned __int8)(v17 >> v71)) & 0x3F;
        v18 = v17 | ((v17 | ((v17 | ((v17 | (v17 << 6)) << 6)) << 6)) << 6);
        if ( v9 == 9 )
        {
          if ( v56 )
          {
            if ( v56 == 1 )
            {
              v19 = 16 * v18;
              v17 >>= 2;
            }
            else
            {
              v19 = v18 << 6;
            }
          }
          else
          {
            v19 = 4 * v18;
            v17 >>= 4;
          }
          v20 = v17 | v19;
          v21 = v64;
          HIBYTE(v78) = v20;
          LOBYTE(v78) = HIBYTE(v20);
          BYTE1(v78) = BYTE2(v20);
          BYTE2(v78) = BYTE1(v20);
          Src = v78;
          do
          {
            *v15 = v68 & v78 | v64 & *v15;
            v15 = (_DWORD *)((char *)v15 + v72);
            --v16;
          }
          while ( v16 );
          v22 = v78;
          v70 = 0;
          goto LABEL_36;
        }
        HIBYTE(v79) = (v17 >> 4) | (4 * v18);
        LOBYTE(v79) = ((v17 >> 4) | (4 * v18)) >> 24;
        BYTE1(v79) = ((v17 >> 4) | (4 * v18)) >> 16;
        BYTE2(v79) = (unsigned __int16)((v17 >> 4) | (4 * v18)) >> 8;
        v22 = v79;
        v23 = (v17 >> 2) | (16 * v18);
        HIBYTE(v79) = (v17 >> 2) | (16 * v18);
        v24 = v17 | (v18 << 6);
        LOBYTE(v79) = HIBYTE(v23);
        BYTE1(v79) = BYTE2(v23);
        BYTE2(v79) = BYTE1(v23);
        v82 = v79;
        LOBYTE(v80) = HIBYTE(v24);
        BYTE1(v80) = BYTE2(v24);
        BYTE2(v80) = BYTE1(v24);
        HIBYTE(v80) = v24;
        v83 = v80;
        if ( v56 == 1 )
          break;
        Src = v22;
        if ( v56 == 2 )
        {
          v26 = v82;
          v82 = v22;
          v22 = v80;
          v83 = v26;
          goto LABEL_34;
        }
LABEL_35:
        v16 = v70;
        v21 = v64;
        v84 = v22;
LABEL_36:
        if ( v69 )
        {
          switch ( v69 )
          {
            case 1:
              v37 = v68 & v22;
              v76 = v37;
              *v15 = v37 | v21 & *v15;
              if ( v59 > 0 )
              {
                v15[1] = v82;
                v15[2] = v83;
                v15[3] = v84;
                v38 = v15 + 1;
                v39 = v15 + 4;
                v15 += 3 * v59;
                qmemcpy(v39, v38, 4 * ((unsigned int)(12 * v59 - 12) >> 2));
                v37 = v76;
              }
              if ( v65 )
                memcpy(v15 + 1, &v82, 4 * v65);
              v40 = (int *)&v67[v72];
              v41 = v70 - 1;
              if ( v70 != 1 )
              {
                v42 = v67 + 4;
                do
                {
                  *v40 = v37 | v64 & *v40;
                  memcpy(v40 + 1, v42, MaxCount);
                  v40 = (int *)((char *)v40 + v72);
                  v42 = v67 + 4;
                  --v41;
                }
                while ( v41 );
              }
              break;
            case 2:
              v31 = 4 * v65;
              v32 = v60 & *(&Src + v65);
              v75 = v32;
              if ( v59 > 0 )
              {
                *v15 = Src;
                v15[1] = v82;
                v15[2] = v83;
                qmemcpy(v15 + 3, v15, 4 * ((unsigned int)(12 * v59 - 12) >> 2));
                v15 += 3 * v59;
                v31 = 4 * v65;
              }
              if ( v65 )
              {
                memcpy(v15, &Src, 4 * v65);
                v15 = (_DWORD *)((char *)v15 + v31);
              }
              v33 = v32 | v63 & *v15;
              v34 = v70;
              *v15 = v33;
              v35 = v67;
              v36 = &v67[v72];
              while ( --v34 )
              {
                memcpy(v36, v35, MaxCount);
                *(_DWORD *)&v36[4 * v55] = v75 | v63 & *(_DWORD *)&v36[4 * v55];
                v36 += v72;
                v35 = v67;
              }
              break;
            case 3:
              if ( v59 > 0 )
              {
                *v15 = Src;
                v15[1] = v82;
                v15[2] = v83;
                qmemcpy(v15 + 3, v15, 4 * ((unsigned int)(12 * v59 - 12) >> 2));
                v15 += 3 * v59;
              }
              if ( v65 )
                memcpy(v15, &Src, 4 * v65);
              v28 = v67;
              v29 = v70;
              for ( i = &v67[v72]; --v29; i += v72 )
              {
                memcpy(i, v28, MaxCount);
                v28 = v67;
              }
              break;
            case 8:
              v27 = v68 & v22;
              v73 = v60 & v82;
              do
              {
                *v15 = v27 | v21 & *v15;
                v15[1] = v73 | v63 & v15[1];
                v15 = (_DWORD *)((char *)v15 + v72);
                --v16;
              }
              while ( v16 );
              break;
          }
        }
        else
        {
          v43 = v68 & v22;
          v77 = v43;
          v74 = v60 & *(&v82 + v65);
          *v15 = v43 | v21 & *v15;
          if ( v59 > 0 )
          {
            v15[1] = v82;
            v15[2] = v83;
            v15[3] = v84;
            v44 = v15 + 1;
            v45 = v15 + 4;
            v15 += 3 * v59;
            qmemcpy(v45, v44, 4 * ((unsigned int)(12 * v59 - 12) >> 2));
            v43 = v77;
          }
          if ( v65 )
          {
            memcpy(v15 + 1, &v82, 4 * v65);
            v15 += v65;
          }
          v15[1] = v74 | v63 & v15[1];
          v46 = (int *)&v67[v72];
          v47 = v70 - 1;
          if ( v70 != 1 )
          {
            v48 = v67 + 4;
            do
            {
              *v46 = v43 | v64 & *v46;
              memcpy(v46 + 1, v48, MaxCount);
              v46[v55 + 1] = v74 | v63 & v46[v55 + 1];
              v46 = (int *)((char *)v46 + v72);
              v48 = v67 + 4;
              --v47;
            }
            while ( v47 );
          }
        }
        v62 += 8;
        if ( v62 == v52 )
          v62 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
        v13 = v51;
        v9 = v69;
        v12 = v57;
        if ( !v51 )
          goto LABEL_78;
      }
      v25 = v22;
      v22 = v82;
      v82 = v80;
      v83 = v25;
LABEL_34:
      Src = v22;
      goto LABEL_35;
    }
LABEL_78:
    v2 = v12 + 4;
    v49 = a2-- == 1;
    v57 = v2;
  }
  while ( !v49 );
}
