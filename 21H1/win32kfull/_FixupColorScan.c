/*
 * XREFs of _FixupColorScan @ 0x1C4844
 * Callers:
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void *__fastcall FixupColorScan(unsigned int *a1, void *a2)
{
  unsigned int v3; // eax
  char *v4; // esi
  char *v5; // edx
  void *v6; // eax
  _DWORD *v7; // edi
  void *v8; // esi
  bool v9; // cc
  _WORD *v10; // ebx
  int v11; // ecx
  int v12; // eax
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  int v16; // ebx
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // edi
  unsigned __int8 *v21; // edi
  int v22; // ebx
  unsigned int v23; // eax
  __int16 v24; // si
  int v25; // edx
  __int16 v26; // di
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  _BYTE *v30; // edx
  int v31; // esi
  int v32; // ebx
  char *v33; // edx
  int v34; // ecx
  int v35; // ebx
  __int16 v36; // si
  __int16 v37; // di
  int v38; // edi
  int v39; // esi
  int v40; // ebx
  int v41; // ecx
  _BYTE *v42; // esi
  unsigned int v43; // eax
  char *v44; // ecx
  unsigned int v45; // eax
  _DWORD *v46; // esi
  int v47; // ecx
  unsigned int v48; // eax
  void *result; // eax
  void **v50; // [esp+10h] [ebp-98h]
  size_t v51; // [esp+14h] [ebp-94h]
  int v53; // [esp+1Ch] [ebp-8Ch]
  int v54; // [esp+20h] [ebp-88h]
  int v55; // [esp+24h] [ebp-84h]
  void *v56[8]; // [esp+28h] [ebp-80h] BYREF
  int v57; // [esp+48h] [ebp-60h]
  _DWORD *v58; // [esp+4Ch] [ebp-5Ch]
  int v59; // [esp+50h] [ebp-58h]
  unsigned int v60; // [esp+54h] [ebp-54h]
  unsigned int *v61; // [esp+58h] [ebp-50h]
  char *v62; // [esp+5Ch] [ebp-4Ch]
  unsigned int v63; // [esp+60h] [ebp-48h]
  unsigned int v64; // [esp+64h] [ebp-44h]
  int v65; // [esp+68h] [ebp-40h]
  int v66; // [esp+6Ch] [ebp-3Ch]
  int v67; // [esp+70h] [ebp-38h]
  int v68; // [esp+74h] [ebp-34h]
  int v69; // [esp+78h] [ebp-30h]
  int v70; // [esp+7Ch] [ebp-2Ch]
  unsigned __int8 *v71; // [esp+80h] [ebp-28h]
  _DWORD *v72; // [esp+84h] [ebp-24h]
  int v73; // [esp+88h] [ebp-20h]
  int v74; // [esp+8Ch] [ebp-1Ch]
  int v75; // [esp+90h] [ebp-18h]
  char *v76; // [esp+94h] [ebp-14h]
  int v77; // [esp+98h] [ebp-10h]
  unsigned __int64 v78; // [esp+9Ch] [ebp-Ch]
  char *v79; // [esp+A4h] [ebp-4h]

  v64 = a1[8];
  v51 = a1[10];
  v50 = (void **)(a1 + 73);
  v3 = *a1;
  v61 = a1;
  qmemcpy(v56, a1 + 73, sizeof(v56));
  v4 = (char *)v56[7];
  if ( (v3 & 0x20) != 0 )
  {
    v5 = (char *)v56[4];
    *a1 = v3 & 0xFFFFFFDF;
    ++v4;
  }
  else if ( (int)v56[7] > 1 )
  {
    v6 = v56[0];
    v62 = (char *)v56[0];
    qmemcpy(v56, &v56[1], 0x14u);
    v7 = v56[2];
    v56[5] = v6;
    memcpy(v6, v56[2], (size_t)v56[6]);
    v8 = v56[1];
    v9 = (int)a1[9] <= 0;
    v10 = v56[3];
    if ( v9 )
    {
      memcpy(v56[3], v56[1], (size_t)v56[6]);
    }
    else
    {
      ((void (__cdecl *)(unsigned int *, char *))v61[4])(v61 + 2, (char *)v56[3] + 3);
      v11 = 3 * v64;
      *v10 = v10[3];
      *((_BYTE *)v10 + 2) = *((_BYTE *)v10 + 8);
      *(_WORD *)((char *)v10 + v11 + 3) = *(_WORD *)((char *)v10 + v11 - 3);
      *((_BYTE *)v10 + v11 + 5) = *((_BYTE *)v10 + v11 - 1);
    }
    v5 = (char *)v56[4];
    v77 = *(_DWORD *)v8 & 0xFFFFFF;
    HIDWORD(v78) = *v7 & 0xFFFFFF;
    v75 = *(_DWORD *)((_BYTE *)v8 + 3) & 0xFFFFFF;
    LODWORD(v78) = *(_DWORD *)((char *)v7 + 3) & 0xFFFFFF;
    v74 = *(_DWORD *)((_BYTE *)v8 + 6) & 0xFFFFFF;
    v12 = *(_DWORD *)((char *)v7 + 6) & 0xFFFFFF;
    v13 = v64-- == 1;
    v14 = *((unsigned __int8 *)v8 + 4);
    v73 = v12;
    v60 = *((unsigned __int8 *)v8 + 3) + 4 * (*((unsigned __int8 *)v8 + 5) + 2 * v14);
    if ( !v13 )
    {
      v76 = (char *)v56[4] + 5;
      v71 = (unsigned __int8 *)v8 + 7;
      v79 = v62 + 5;
      v72 = (char *)v56[0] + 6;
      v58 = (_DWORD *)((char *)v7 + 9);
      v55 = (_BYTE *)v8 - (_BYTE *)v7;
      v15 = (char *)v10 - (char *)v56[0];
      v16 = (char *)v10 - (_BYTE *)v8;
      v54 = v15;
      v57 = v16;
      v61 = (unsigned int *)((_BYTE *)v8 - (char *)v56[0]);
      v59 = (char *)v56[4] - (char *)v56[0];
      v62 = (char *)((char *)v56[4] - (char *)v8);
      do
      {
        v17 = v75;
        v18 = v77;
        v19 = v74;
        v77 = v75;
        v66 = v18;
        v20 = HIDWORD(v78);
        v78 = __PAIR64__(v78, v73);
        v75 = v74;
        v68 = v20;
        v74 = *(_DWORD *)((char *)v58 + v55) & 0xFFFFFF;
        v73 = *v58 & 0xFFFFFF;
        v63 = v60;
        v53 = v71[1];
        v21 = v71;
        v60 = *((unsigned __int8 *)v61 + (_DWORD)v72) + 4 * (v53 + 2 * *v71);
        if ( v77 == v75 || v78 != __PAIR64__(v19, v17) )
        {
          v33 = v79;
        }
        else
        {
          v65 = *(_DWORD *)((char *)v72 - 3) & 0xFFFFFF;
          v69 = *v72 & 0xFFFFFF;
          v70 = *(_DWORD *)&v71[v16 - 4] & 0xFFFFFF;
          v67 = *(_DWORD *)((char *)v72 + v54) & 0xFFFFFF;
          if ( v77 ^ v74 | v19 ^ v66 | HIDWORD(v78) ^ v73 | (unsigned int)v78 ^ v68
            && v77 ^ v70 | HIDWORD(v78) ^ v65 | v19 ^ v67 | (unsigned int)v78 ^ v69 )
          {
            if ( v63 < v60 )
            {
              v35 = *(_DWORD *)((char *)v72 + v59);
              v68 = (unsigned __int8)v78;
              v63 = (unsigned __int8)v77;
              v36 = v78;
              v37 = v77;
              *((_BYTE *)v72 + v59) = ((unsigned __int8)v78
                                     + 8
                                     + 12 * (unsigned __int8)v35
                                     + (unsigned __int8)v77
                                     + (unsigned __int8)v67
                                     + (unsigned int)(unsigned __int8)v66) >> 4;
              v38 = v37 & 0xFF00;
              v69 = v36 & 0xFF00;
              v39 = v77;
              v62[(_DWORD)v71] = (v69 + 2048 + 12 * (v35 & 0xFF00) + v38 + (v67 & 0xFF00) + (v66 & 0xFF00u)) >> 12;
              v39 &= 0xFF0000u;
              v70 = v78 & 0xFF0000;
              v76[3] = (int)((int)&loc_80000 + 12 * (v35 & 0xFF0000) + (v78 & 0xFF0000) + v39 + v66 + (v67 & 0xFF0000)) >> 20;
              v40 = *(_DWORD *)(v79 - 2);
              *(v79 - 2) = (v68 + 8 + 12 * (unsigned __int8)v40 + v63 + (unsigned __int8)v73 + (unsigned __int8)v65) >> 4;
              v33 = v79;
              v41 = v65 & 0xFF0000;
              *(v79 - 1) = (v69 + 2048 + 12 * (v40 & 0xFF00) + v38 + (v73 & 0xFF00) + (v65 & 0xFF00u)) >> 12;
              *v33 = ((int)&loc_80000 + 12 * (v40 & 0xFF0000) + v70 + v39 + v73 + v41) >> 20;
            }
            else
            {
              v22 = *(_DWORD *)(v76 - 2);
              v65 = BYTE4(v78);
              v23 = BYTE4(v78)
                  + 8
                  + 12 * (unsigned __int8)v22
                  + (unsigned __int8)v19
                  + (unsigned __int8)v70
                  + (unsigned __int8)v74;
              v63 = (unsigned __int8)v19;
              v24 = WORD2(v78);
              v25 = v70 & 0xFF00;
              v26 = v75;
              *(v76 - 2) = v23 >> 4;
              v27 = v26 & 0xFF00;
              v66 = v24 & 0xFF00;
              v28 = HIDWORD(v78);
              v29 = 12 * (v22 & 0xFF00) + v27 + v25 + (v74 & 0xFF00);
              v30 = v76;
              v31 = v75;
              *(v76 - 1) = (unsigned int)(v66 + 2048 + v29) >> 12;
              v31 &= 0xFF0000u;
              v67 = v28 & 0xFF0000;
              *v30 = ((int)&loc_80000 + 12 * (v22 & 0xFF0000) + v74 + (v28 & 0xFF0000) + v31 + (v70 & 0xFF0000)) >> 20;
              v32 = *(_DWORD *)(v79 + 1);
              v79[1] = (v65 + 8 + 12 * (unsigned __int8)v32 + v63 + (unsigned __int8)v68 + (unsigned __int8)v69) >> 4;
              v33 = v79;
              v34 = v69 & 0xFF0000;
              v79[2] = (v66 + 2048 + 12 * (v32 & 0xFF00) + v27 + (v68 & 0xFF00) + (v69 & 0xFF00u)) >> 12;
              v33[3] = ((int)&loc_80000 + 12 * (v32 & 0xFF0000) + v68 + v67 + v31 + v34) >> 20;
            }
            v16 = v57;
            v21 = v71;
          }
          else
          {
            v33 = v79;
            v42 = v76;
            v43 = (v53 + 1 + (unsigned int)*(v71 - 2)) >> 1;
            v79[3] = v43;
            *v33 = v43;
            v42[3] = v43;
            *v42 = v43;
            v44 = v62;
            v45 = (*(v21 - 3) + 1 + (unsigned int)*v21) >> 1;
            v33[2] = v45;
            *(v33 - 1) = v45;
            v44[(_DWORD)v21] = v45;
            *(v42 - 1) = v45;
            v46 = v72;
            v47 = v59;
            v48 = (*(v21 - 4) + 1 + (unsigned int)*((unsigned __int8 *)v61 + (_DWORD)v72)) >> 1;
            v33[1] = v48;
            *(v33 - 2) = v48;
            *((_BYTE *)v46 + v47) = v48;
            *(v76 - 2) = v48;
          }
        }
        v58 = (_DWORD *)((char *)v58 + 3);
        v72 = (_DWORD *)((char *)v72 + 3);
        v76 += 3;
        v13 = v64-- == 1;
        v71 = v21 + 3;
        v79 = v33 + 3;
      }
      while ( !v13 );
      v5 = (char *)v56[4];
    }
    v4 = (char *)v56[7];
  }
  else
  {
    v5 = (char *)v56[5];
  }
  if ( a2 )
    memcpy(a2, v5 + 3, v51);
  v56[7] = v4 - 1;
  result = a2;
  qmemcpy(v50, v56, 0x20u);
  return result;
}
