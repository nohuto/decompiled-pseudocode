/*
 * XREFs of ?bFastFill@@YGHJPAU_POINTFIX@@PAU_RECTL@@P6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238ED3
 * Callers:
 *     ?bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238D30 (-bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _RtlEnlargedUnsignedDivide@16 @ 0x238817 (_RtlEnlargedUnsignedDivide@16.c)
 */

int __userpurge bFastFill@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        int *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5,
        void (__stdcall *a6)(struct _RECTL *, unsigned int, void *),
        void (__stdcall *a7)(int, struct _ROW *, unsigned int, void *),
        void *a8)
{
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  _DWORD *v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  int v16; // esi
  unsigned int *v17; // edx
  unsigned int v18; // ecx
  int i; // esi
  int v20; // esi
  int *v21; // edx
  _DWORD *v22; // ecx
  _DWORD *v23; // eax
  int v24; // edi
  int v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  int j; // eax
  int v35; // ecx
  bool v36; // sf
  int v37; // eax
  int v38; // ecx
  ULONG v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  int v44; // edx
  int *v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // edx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  ULONG v52; // [esp+0h] [ebp-248h]
  ULONG *v53; // [esp+4h] [ebp-244h]
  _BYTE v54[32]; // [esp+10h] [ebp-238h] BYREF
  struct _POINTFIX *v55; // [esp+38h] [ebp-210h]
  int v56; // [esp+3Ch] [ebp-20Ch]
  int v57; // [esp+44h] [ebp-204h]
  int *v58; // [esp+4Ch] [ebp-1FCh]
  unsigned int v59; // [esp+50h] [ebp-1F8h]
  unsigned int v60; // [esp+54h] [ebp-1F4h]
  _DWORD v61[8]; // [esp+58h] [ebp-1F0h] BYREF
  _DWORD v62[8]; // [esp+78h] [ebp-1D0h] BYREF
  int v63; // [esp+98h] [ebp-1B0h]
  int v64; // [esp+9Ch] [ebp-1ACh]
  int v65; // [esp+A0h] [ebp-1A8h]
  int v66; // [esp+A4h] [ebp-1A4h]
  struct _RECTL *v67; // [esp+A8h] [ebp-1A0h]
  int v68; // [esp+ACh] [ebp-19Ch]
  int v69; // [esp+B0h] [ebp-198h]
  void (__stdcall *v70)(struct _RECTL *, unsigned int, void *); // [esp+B4h] [ebp-194h]
  int v71; // [esp+B8h] [ebp-190h]
  int *v72; // [esp+BCh] [ebp-18Ch]
  int v73; // [esp+C0h] [ebp-188h]
  int v74; // [esp+C4h] [ebp-184h]
  int v75; // [esp+C8h] [ebp-180h]
  int v76; // [esp+CCh] [ebp-17Ch]
  int v77; // [esp+D0h] [ebp-178h]
  int v78; // [esp+D4h] [ebp-174h]
  _DWORD v79[2]; // [esp+D8h] [ebp-170h] BYREF
  int v80; // [esp+E0h] [ebp-168h]
  int v81; // [esp+E4h] [ebp-164h]
  _BYTE v82[328]; // [esp+E8h] [ebp-160h] BYREF
  CPPEH_RECORD ms_exc; // [esp+230h] [ebp-18h]

  v68 = a2;
  v59 = a1;
  v58 = a3;
  v55 = a4;
  v67 = a5;
  v70 = a6;
  v8 = a1;
  v60 = a1 + 8 * (a2 - 1);
  v9 = a2 - 1;
  v10 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 12) <= v10 )
  {
    do
    {
      v8 += 8;
      if ( !--v9 )
        goto LABEL_13;
    }
    while ( *(_DWORD *)(v8 + 12) <= *(_DWORD *)(v8 + 4) );
    v14 = v8;
    do
    {
      if ( !--v9 )
        goto LABEL_13;
      v14 += 8;
    }
    while ( *(_DWORD *)(v14 + 12) >= *(_DWORD *)(v14 + 4) );
    while ( 1 )
    {
      if ( *(_DWORD *)(v14 + 12) < v10 )
        return 0;
      if ( !--v9 )
        break;
      v14 += 8;
      if ( *(_DWORD *)(v14 + 12) > *(_DWORD *)(v14 + 4) )
        return 0;
    }
LABEL_13:
    v62[7] = 0;
    v61[7] = 0;
    v62[6] = -8;
    v61[6] = 8;
    v62[5] = v8;
    v61[5] = v8;
    v63 = 0;
    v65 = 0;
    v72 = (int *)v82;
    HIDWORD(v13) = 0;
    v73 = 0;
    v69 = 0;
    v71 = 0;
    LODWORD(v13) = (*(_DWORD *)(v8 + 4) + 15) >> 4;
    v77 = v13;
    if ( v58 )
    {
      v63 = *v58;
      v64 = v58[1];
      v65 = v58[2];
      v66 = v58[3];
      if ( v64 > (int)v13 )
        v77 = v64;
      if ( v77 >= v66 )
        return 1;
    }
    else
    {
      v64 = 0x80000000;
      v66 = 0x7FFFFFFF;
    }
    if ( v58 )
    {
      v16 = 1;
      v17 = &v62[5];
LABEL_30:
      if ( v16 >= 0 )
      {
        while ( v68 )
        {
          v18 = v17[1] + *v17;
          if ( v18 >= v59 )
          {
            if ( v18 > v60 )
              v18 = v59;
          }
          else
          {
            v18 = v60;
          }
          if ( *(int *)(v18 + 4) >> 4 >= v64 )
          {
            --v16;
            v17 -= 8;
            goto LABEL_30;
          }
          --v68;
          *v17 = v18;
        }
        return 1;
      }
    }
LABEL_39:
    while ( 1 )
    {
      for ( i = 1; ; i = v56 - 1 )
      {
        v56 = i;
        if ( i < 0 )
          break;
        v20 = 8 * i;
        if ( !v61[v20 + 7] )
        {
          while ( 1 )
          {
            if ( --v68 < 0 || v77 >= v66 )
            {
              if ( HIDWORD(v13) )
              {
                ms_exc.registration.TryLevel = 0;
                ((void (__stdcall *)(int, _BYTE *, _DWORD, void (__stdcall *)(struct _RECTL *, unsigned int, void *)))v67)(
                  v71,
                  v82,
                  HIDWORD(v13),
                  v70);
                ms_exc.registration.TryLevel = -2;
              }
              return 1;
            }
            v21 = (int *)v61[v20 + 5];
            v22 = (int *)((char *)v21 + v61[v20 + 6]);
            v61[v20 + 5] = v22;
            if ( (unsigned int)v22 < v59 )
              break;
            if ( (unsigned int)v22 > v60 )
            {
              v23 = (_DWORD *)v59;
              goto LABEL_48;
            }
LABEL_49:
            v24 = v22[1];
            v57 = v24;
            v25 = ((v24 + 15) >> 4) - v77;
            v61[v20 + 7] = v25;
            if ( v25 > 0 )
            {
              v75 = v21[1];
              v26 = v24 - v75;
              v78 = *v21;
              v27 = *v22 - v78;
              if ( (v27 & 0x80000000) == 0 )
              {
                if ( (int)v27 >= (int)v26 )
                {
                  v74 = v27 / v26;
                  v29 = v27 % v26;
                  v31 = v27 / v26;
                  v61[v20 + 1] = v27 / v26;
                  v61[v20 + 3] = v27 % v26;
                }
                else
                {
                  v61[v20 + 1] = 0;
                  v61[v20 + 3] = v27;
                  v31 = 0;
                  v74 = 0;
                  v29 = v27;
                }
              }
              else
              {
                v28 = -v27;
                if ( (int)v28 >= (int)v26 )
                {
                  v29 = v28 % v26;
                  v30 = -(int)(v28 / v26);
                  v74 = v30;
                  v61[v20 + 1] = v30;
                  v61[v20 + 3] = v28 % v26;
                  if ( (int)(v28 % v26) > 0 )
                  {
                    v74 = v30 - 1;
                    v61[v20 + 1] = v30 - 1;
                    v61[v20 + 3] = v26 - v29;
                    v29 = v26 - v29;
                  }
                }
                else
                {
                  v61[v20 + 1] = -1;
                  v29 = v26 - v28;
                  v61[v20 + 3] = v26 - v28;
                  v74 = -1;
                }
                v31 = v74;
              }
              v61[v20 + 4] = v26;
              v61[v20 + 2] = -1;
              v76 = v75 & 0xF;
              v32 = -1;
              if ( (v75 & 0xF) != 0 )
              {
                v76 = 16 - v76;
                v33 = v78;
                v32 = -1;
                v74 = v31;
                for ( j = v76; j > 0; j = --v76 )
                {
                  v74 = v61[v20 + 1];
                  v33 += v74;
                  v61[v20] = v33;
                  v29 = v61[v20 + 3];
                  v35 = v61[v20 + 2];
                  v36 = v29 + v35 < 0;
                  v32 = v29 + v35;
                  v61[v20 + 2] = v32;
                  if ( !v36 )
                  {
                    v32 -= v26;
                    v61[v20 + 2] = v32;
                    v61[v20] = ++v33;
                  }
                }
                v78 = v33;
                HIDWORD(v13) = v73;
              }
              v37 = v78;
              v76 = v78 & 0xF;
              if ( (v78 & 0xF) != 0 )
              {
                v78 += 15;
                v32 -= v26 * (16 - v76);
                v37 = v78;
              }
              v78 = v37 >> 4;
              v61[v20] = v37 >> 4;
              v38 = v32 >> 4;
              v61[v20 + 2] = v38;
              v75 = (v75 + 15) >> 4;
              if ( v75 < v64 )
              {
                v75 = v64 - v75;
                HIDWORD(v13) = v73;
                if ( v57 >> 4 >= v64 || v74 || v29 )
                {
                  v76 = v78 + v75 * v74;
                  v61[v20] = v76;
                  v13 = v38 + v29 * (__int64)v75;
                  v36 = v13 < 0;
                  v57 = HIDWORD(v13);
                  HIDWORD(v13) = v73;
                  if ( v36 )
                  {
                    v61[v20 + 2] = v13;
                  }
                  else
                  {
                    if ( v57 | v13 & 0x80000000 )
                    {
                      v75 = 0;
                      v39 = RtlEnlargedUnsignedDivide((ULARGE_INTEGER)__PAIR64__(v57, v13), v52, v53);
                      v57 = 0;
                      v40 = v75;
                    }
                    else
                    {
                      v39 = (int)v13 / (int)v26;
                      v40 = (int)v13 % (int)v26;
                    }
                    v61[v20] = v76 + 1 + v39;
                    v61[v20 + 2] = v40 - v26;
                  }
                }
              }
              goto LABEL_77;
            }
          }
          v23 = (_DWORD *)v60;
LABEL_48:
          v22 = v23;
          v61[v20 + 5] = v23;
          goto LABEL_49;
        }
LABEL_77:
        ;
      }
      v41 = v62[7];
      if ( v62[7] >= v61[7] )
        v41 = v61[7];
      v78 = v41;
      v62[7] -= v41;
      v61[7] -= v41;
      if ( v77 + v41 > v66 )
        v78 = v66 - v77;
      if ( v62[3] | v61[3] || v62[1] | v61[1] || v78 <= 2 )
        break;
      if ( HIDWORD(v13) )
      {
        ms_exc.registration.TryLevel = 1;
        ((void (__stdcall *)(int, _BYTE *, _DWORD, void (__stdcall *)(struct _RECTL *, unsigned int, void *)))v67)(
          v71,
          v82,
          HIDWORD(v13),
          v70);
        ms_exc.registration.TryLevel = -2;
        v72 = (int *)v82;
        HIDWORD(v13) = 0;
        v73 = 0;
        v69 = 0;
      }
      v76 = v62[0];
      v42 = v61[0];
      if ( v62[0] != v61[0] )
      {
        if ( v62[0] > v61[0] )
        {
          v76 = v61[0];
          v42 = v62[0];
        }
        v79[0] = 0;
        v80 = 0;
        v79[1] = v77;
        v81 = v77 + v78;
        v43 = v76;
        if ( !v58 )
        {
          v79[0] = v76;
          v80 = v42;
          ms_exc.registration.TryLevel = 3;
          goto LABEL_102;
        }
        if ( v76 < v63 )
          v43 = v63;
        v79[0] = v43;
        if ( v42 > v65 )
          v42 = v65;
        v80 = v42;
        if ( v43 < v42 )
        {
          ms_exc.registration.TryLevel = 2;
LABEL_102:
          ((void (__stdcall *)(_DWORD *, int, _DWORD))v55)(v79, 1, v70);
          ms_exc.registration.TryLevel = -2;
        }
      }
LABEL_103:
      v77 += v78;
    }
    if ( !HIDWORD(v13) )
      v71 = v77;
    while ( 1 )
    {
      v44 = v61[0];
      if ( v61[0] - v62[0] <= 0 )
      {
        if ( v61[0] != v62[0] )
        {
          qmemcpy(v54, v62, sizeof(v54));
          qmemcpy(v62, v61, sizeof(v62));
          qmemcpy(v61, v54, sizeof(v61));
          continue;
        }
        if ( HIDWORD(v13) )
        {
          ms_exc.registration.TryLevel = 6;
          ((void (__stdcall *)(int, _BYTE *, _DWORD, void (__stdcall *)(struct _RECTL *, unsigned int, void *)))v67)(
            v71,
            v82,
            HIDWORD(v13),
            v70);
LABEL_128:
          ms_exc.registration.TryLevel = -2;
          HIDWORD(v13) = 0;
          v69 = 0;
          v73 = 0;
          v72 = (int *)v82;
        }
        v71 = v77 + 1;
        goto LABEL_130;
      }
      if ( v58 )
      {
        v46 = v62[0];
        if ( v62[0] < v63 )
          v46 = v63;
        *v72 = v46;
        v47 = v61[0];
        if ( v61[0] > v65 )
          v47 = v65;
        v72[1] = v47;
        if ( v46 >= v47 )
        {
          if ( HIDWORD(v13) )
          {
            ms_exc.registration.TryLevel = 5;
            ((void (__stdcall *)(int, _BYTE *, _DWORD, void (__stdcall *)(struct _RECTL *, unsigned int, void *)))v67)(
              v71,
              v82,
              HIDWORD(v13),
              v70);
            ms_exc.registration.TryLevel = -2;
            v72 = (int *)v82;
            HIDWORD(v13) = 0;
            v73 = 0;
            v69 = 0;
          }
          v71 = v77 + 1;
          if ( v62[0] < v63 && *(int *)v62[5] >> 4 < v63 && *(int *)v61[5] >> 4 < v63
            || v62[0] >= v65 && *(int *)v62[5] >> 4 >= v65 && *(int *)v61[5] >> 4 >= v65 )
          {
            goto LABEL_103;
          }
          goto LABEL_130;
        }
      }
      else
      {
        v45 = v72;
        *v72 = v62[0];
        v45[1] = v44;
      }
      v73 = ++HIDWORD(v13);
      v72 += 2;
      v69 = HIDWORD(v13);
      if ( HIDWORD(v13) == 40 )
      {
        ms_exc.registration.TryLevel = 4;
        ((void (__stdcall *)(int, _BYTE *, int, void (__stdcall *)(struct _RECTL *, unsigned int, void *)))v67)(
          v71,
          v82,
          40,
          v70);
        goto LABEL_128;
      }
LABEL_130:
      v48 = v61[1] + v61[0];
      v61[0] += v61[1];
      v36 = v61[3] + v61[2] < 0;
      v49 = v61[3] + v61[2];
      v61[2] += v61[3];
      if ( !v36 )
      {
        v61[2] = v49 - v61[4];
        v61[0] = v48 + 1;
      }
      v50 = v62[1] + v62[0];
      v62[0] += v62[1];
      v36 = v62[3] + v62[2] < 0;
      v51 = v62[3] + v62[2];
      v62[2] += v62[3];
      if ( !v36 )
      {
        v62[2] = v51 - v62[4];
        v62[0] = v50 + 1;
      }
      --v78;
      ++v77;
      if ( !v78 )
        goto LABEL_39;
    }
  }
  do
  {
    if ( !--v9 )
      goto LABEL_13;
    a1 += 8;
  }
  while ( *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a1 + 4) );
  do
  {
    if ( !--v9 )
    {
      if ( *(_DWORD *)(a1 + 12) < v10 )
        v8 = a1 + 8;
      goto LABEL_13;
    }
    a1 += 8;
    v11 = *(_DWORD *)(a1 + 12);
    v12 = (_DWORD *)(a1 + 4);
  }
  while ( v11 <= *(_DWORD *)(a1 + 4) );
  v8 = a1;
  do
  {
    if ( v11 > v10 )
      break;
    if ( !--v9 )
      goto LABEL_13;
    v12 += 2;
    v11 = v12[2];
  }
  while ( v11 >= *v12 );
  return 0;
}
