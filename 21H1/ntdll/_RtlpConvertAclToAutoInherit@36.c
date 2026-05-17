/*
 * XREFs of _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85
 * Callers:
 *     _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358 (_RtlpConvertToAutoInheritSecurityObject@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlpInheritAcl@68 @ 0x4B2D7852 (_RtlpInheritAcl@68.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlMapGenericMask@8 @ 0x4B2D83B0 (_RtlMapGenericMask@8.c)
 *     _RtlpCompareAces@16 @ 0x4B2D8505 (_RtlpCompareAces@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpConvertAclToAutoInherit(
        void *a1,
        unsigned __int16 *a2,
        int a3,
        int a4,
        void *a5,
        void *a6,
        _DWORD *a7,
        int *a8,
        _DWORD *a9)
{
  unsigned __int16 *v9; // ebx
  _DWORD *v10; // esi
  int v11; // edi
  int *v12; // eax
  void *v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // esi
  unsigned __int16 *v19; // edi
  int v20; // ecx
  unsigned __int8 v21; // bl
  int v22; // ecx
  int v23; // ecx
  char v24; // dl
  int v25; // ebx
  int *v26; // esi
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // edx
  unsigned __int16 v30; // ax
  int v31; // edi
  unsigned __int8 v32; // bl
  int v33; // ecx
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // edx
  char *v38; // ecx
  int v39; // edi
  bool v40; // cf
  _BYTE *v41; // esi
  char v42; // al
  _DWORD *v43; // ecx
  int v44; // eax
  int v45; // edi
  unsigned __int8 *v46; // ecx
  _DWORD *v47; // edx
  char v48; // al
  unsigned __int16 v49; // ax
  int v50; // edi
  int v51; // edi
  int v52; // ecx
  unsigned __int8 v53; // al
  char *v54; // edx
  _BYTE *v55; // ecx
  _BYTE *v56; // esi
  _DWORD *v57; // eax
  unsigned __int16 *v58; // ecx
  int v59; // edi
  _DWORD *v60; // ebx
  _DWORD *v61; // ecx
  int v62; // eax
  unsigned int v63; // ebx
  int v64; // edi
  _DWORD *v65; // esi
  int v66; // eax
  bool v67; // cc
  int v68; // ebx
  int *v69; // esi
  void *Heap; // ecx
  int v71; // [esp+Ch] [ebp-CCh] BYREF
  int v72; // [esp+10h] [ebp-C8h]
  void *Buf2; // [esp+14h] [ebp-C4h]
  char *v74; // [esp+18h] [ebp-C0h]
  int v75; // [esp+1Ch] [ebp-BCh]
  int v76; // [esp+20h] [ebp-B8h]
  int v77; // [esp+24h] [ebp-B4h]
  void *v78; // [esp+28h] [ebp-B0h]
  void *v79; // [esp+2Ch] [ebp-ACh]
  int v80; // [esp+30h] [ebp-A8h]
  int v81; // [esp+34h] [ebp-A4h]
  _DWORD *v82; // [esp+38h] [ebp-A0h]
  void *Src; // [esp+3Ch] [ebp-9Ch]
  int v84; // [esp+40h] [ebp-98h] BYREF
  __int16 v85; // [esp+44h] [ebp-94h]
  _DWORD *v86; // [esp+48h] [ebp-90h]
  int v87; // [esp+4Ch] [ebp-8Ch] BYREF
  int *v88; // [esp+50h] [ebp-88h]
  int v89; // [esp+54h] [ebp-84h] BYREF
  char v90; // [esp+5Ah] [ebp-7Eh] BYREF
  char v91; // [esp+5Bh] [ebp-7Dh]
  void *ProcessHeap; // [esp+5Ch] [ebp-7Ch]
  unsigned __int16 *v93; // [esp+60h] [ebp-78h]
  char v94; // [esp+66h] [ebp-72h]
  char v95; // [esp+67h] [ebp-71h]
  int *v96; // [esp+68h] [ebp-70h] BYREF
  _DWORD *v97; // [esp+6Ch] [ebp-6Ch] BYREF
  int v98; // [esp+70h] [ebp-68h] BYREF
  _BYTE v99[8]; // [esp+74h] [ebp-64h] BYREF
  int v100; // [esp+7Ch] [ebp-5Ch]
  _BYTE v101[8]; // [esp+A4h] [ebp-34h] BYREF
  int v102; // [esp+ACh] [ebp-2Ch]

  v9 = a2;
  v93 = a2;
  v78 = a1;
  v79 = a5;
  Buf2 = a6;
  v88 = a8;
  v97 = 0;
  v87 = 0;
  v81 = 0;
  v84 = 0;
  v10 = a9;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v82 = a9;
  v85 = 768;
  v11 = RtlInitializeSid((int)v99, (int)&v84, 1u);
  if ( v11 < 0 )
    return v11;
  v100 = 0;
  v11 = RtlInitializeSid((int)v101, (int)&v84, 1u);
  if ( v11 < 0 )
    return v11;
  v12 = v88;
  v13 = v78;
  *v10 = 1024;
  v102 = 1;
  *v12 = 0;
  if ( v13 && !RtlValidAcl((int)v13) || !RtlValidAcl((int)v9) )
    return -1073741705;
  v84 = a3;
  v14 = RtlpInheritAcl(
          v13,
          0,
          a4,
          1,
          0,
          (int)v99,
          (int)v101,
          (int)v99,
          (int)v101,
          (int)a7,
          2,
          a3 != 0 ? (unsigned int)&a3 : 0,
          a3 != 0,
          (int *)&v97,
          &v90,
          &v71);
  v15 = (int)v97;
  v11 = v14;
  v80 = (int)v97;
  if ( v14 == -2147483637 )
  {
LABEL_8:
    *v10 |= 0x1000u;
LABEL_88:
    v11 = 0;
    if ( (*v10 & 0x1000) == 0 )
    {
LABEL_94:
      v17 = (int)ProcessHeap;
      if ( v81 )
        RtlFreeHeap((int)ProcessHeap, 0, v81);
      v15 = v80;
      goto LABEL_13;
    }
    v69 = v88;
    if ( *v88 )
    {
      RtlFreeHeap((int)ProcessHeap, 0, *v88);
      *v69 = 0;
    }
    Heap = (void *)RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1310720, v9[1]);
    *v69 = (int)Heap;
    if ( Heap )
    {
      memcpy(Heap, v9, v9[1]);
      v11 = 0;
      goto LABEL_94;
    }
LABEL_92:
    v11 = -1073741801;
    goto LABEL_94;
  }
  if ( v14 >= 0 )
  {
    v16 = RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1310720, 24 * v9[2]);
    v81 = v16;
    if ( !v16 )
    {
      v15 = v80;
      v11 = -1073741801;
      goto LABEL_12;
    }
    v86 = 0;
    v89 = 0;
    v19 = v9 + 4;
    Src = v9 + 4;
    LOWORD(v20) = v9[2];
    if ( (_WORD)v20 )
    {
      v96 = (int *)(v16 + 4);
      while ( 1 )
      {
        v21 = *(_BYTE *)v19;
        if ( *(_BYTE *)v19 > 8u || v21 == 4 )
          break;
        v98 = *((_DWORD *)v19 + 1);
        RtlMapGenericMask(&v98, a7);
        if ( v21 < 2u || v21 == 5 || v21 == 6 )
          v22 = a7[3];
        else
          v22 = a7[3] | 0x1000000;
        v23 = v98 & v22;
        v24 = *((_BYTE *)v19 + 1) & 3 | ~*((_BYTE *)v19 + 1) & 8;
        if ( (*((_BYTE *)v19 + 1) & 2) != 0 )
        {
          v25 = v23;
          v97 = (_DWORD *)v23;
        }
        else
        {
          v25 = 0;
          v97 = 0;
        }
        v96[2] = (int)v97;
        v26 = v96;
        *(v96 - 1) = v25;
        v9 = v93;
        v27 = (v24 & 1) != 0 ? v23 : 0;
        *v26 = v27;
        v26[3] = v27;
        v28 = (v24 & 8) != 0 ? v23 : 0;
        v29 = (_DWORD *)((char *)v86 + 1);
        v26[1] = v28;
        v26[4] = v28;
        v20 = v9[2];
        v19 = (unsigned __int16 *)((char *)v19 + v19[1]);
        v96 = v26 + 6;
        v10 = v82;
        v86 = v29;
        if ( (int)v29 >= v20 )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      v89 = 0;
      v30 = v20;
      v31 = v80 + 8;
      v97 = (_DWORD *)(v80 + 8);
      if ( !*(_WORD *)(v80 + 4) )
      {
LABEL_52:
        v94 = 0;
        v45 = 0;
        v95 = 0;
        v98 = 0;
        v46 = (unsigned __int8 *)(v9 + 4);
        v97 = 0;
        v77 = v30;
        if ( v30 )
        {
          v47 = (_DWORD *)(v81 + 16);
          do
          {
            v48 = RtlBaseAceType[*v46];
            if ( *v47 | v47[1] | *(v47 - 1) )
            {
              v50 = *((unsigned __int16 *)v46 + 1);
              v98 += v50;
              v91 = v48;
              if ( !v48 && v95 )
                goto LABEL_8;
              v49 = v50;
              if ( v91 == 1 )
              {
                if ( v94 )
                  goto LABEL_8;
              }
              v45 = (int)v97;
            }
            else
            {
              if ( !v48 )
                v94 = 1;
              if ( v48 == 1 )
                v95 = 1;
              v49 = *((_WORD *)v46 + 1);
            }
            ++v45;
            v47 += 6;
            v97 = (_DWORD *)v45;
            v46 += v49;
          }
          while ( v45 < v77 );
        }
        v11 = RtlpInheritAcl(
                v78,
                0,
                a4,
                1,
                0,
                (int)v79,
                (int)Buf2,
                (int)v79,
                (int)Buf2,
                (int)a7,
                2,
                v84 != 0 ? (unsigned int)&a3 : 0,
                v84 != 0,
                &v87,
                &v90,
                &v71);
        if ( v11 < 0 )
          goto LABEL_94;
        v51 = v87;
        v52 = RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1310720, v98 + *(unsigned __int16 *)(v87 + 2));
        *v88 = v52;
        if ( !v52 )
          goto LABEL_92;
        v53 = *(_BYTE *)v51;
        if ( *(_BYTE *)v51 <= *(_BYTE *)v9 )
          v53 = *(_BYTE *)v9;
        if ( RtlCreateAcl(v52, v98 + *(unsigned __int16 *)(v51 + 2), v53) < 0 )
          goto LABEL_8;
        v54 = 0;
        v79 = 0;
        v55 = (_BYTE *)(*v88 + 8);
        v98 = (int)v55;
        if ( v9[2] )
        {
          v56 = v55;
          v57 = (_DWORD *)(v81 + 16);
          v58 = v9 + 4;
          v97 = (_DWORD *)(v81 + 16);
          do
          {
            v59 = *v57 | v57[1] | *(v57 - 1);
            if ( v59 )
            {
              v60 = Src;
              memcpy(v56, Src, *((unsigned __int16 *)Src + 1));
              v56[1] &= ~0x10u;
              v61 = v56;
              v56 += *((unsigned __int16 *)v60 + 1);
              v78 = v61;
              v98 = (int)v56;
              ++*(_WORD *)(*v88 + 4);
              v61[1] = v59 & v60[1];
              v62 = v60[1];
              v63 = 0x80000000;
              v64 = ~v62 & v59;
              if ( v64 )
              {
                v65 = Src;
                do
                {
                  if ( v63 < 0x10000000 )
                    break;
                  if ( (v63 & v65[1]) != 0 )
                  {
                    v89 = v63;
                    RtlMapGenericMask(&v89, a7);
                    v66 = v89;
                    v61 = v78;
                    if ( (v89 & v64) != 0 )
                    {
                      *((_DWORD *)v78 + 1) |= v63;
                      v64 &= ~v66;
                    }
                  }
                  v63 >>= 1;
                }
                while ( v64 );
                v56 = (_BYTE *)v98;
              }
              v61[1] |= v64;
              v57 = v97;
              v9 = v93;
              v54 = (char *)v79;
              v58 = (unsigned __int16 *)Src;
            }
            ++v54;
            v97 = v57 + 6;
            v58 = (unsigned __int16 *)((char *)v58 + v58[1]);
            v79 = v54;
            v67 = (int)v54 < v9[2];
            Src = v58;
            v57 += 6;
          }
          while ( v67 );
          v10 = v82;
          v55 = (_BYTE *)v98;
          v51 = v87;
        }
        v68 = v87;
        memcpy(v55, (const void *)(v87 + 8), *(unsigned __int16 *)(v51 + 2) - 8);
        *(_WORD *)(*v88 + 4) += *(_WORD *)(v68 + 4);
LABEL_87:
        v9 = v93;
        goto LABEL_88;
      }
      while ( 1 )
      {
        v32 = *(_BYTE *)v31;
        if ( *(_BYTE *)v31 > 8u || v32 == 4 )
          break;
        v96 = *(int **)(v31 + 4);
        RtlMapGenericMask((int *)&v96, a7);
        if ( v32 < 2u || v32 == 5 || v32 == 6 )
          v33 = a7[3];
        else
          v33 = a7[3] | 0x1000000;
        v34 = (unsigned int)v96 & v33;
        if ( v34 && (v35 = *(_BYTE *)(v31 + 1) & 3 | ~*(_BYTE *)(v31 + 1) & 8) != 0 )
        {
          v76 = (*(_BYTE *)(v31 + 1) & 2) != 0 ? v34 : 0;
          v98 = v76;
          v9 = v93;
          v36 = (v35 & 1) != 0 ? v34 : 0;
          v77 = v36;
          v96 = (int *)v36;
          v75 = 0;
          v37 = (v35 & 8) != 0 ? v34 : 0;
          v38 = (char *)Src;
          v39 = v37;
          v40 = v93[2] != 0;
          v10 = v82;
          v72 = v37;
          v74 = (char *)Src;
          if ( v40 )
          {
            v96 = (int *)v36;
            v98 = v76;
            v41 = v97;
            v86 = (_DWORD *)(v81 + 20);
            do
            {
              v42 = RtlpCompareAces(v41, v38, v79, Buf2);
              v43 = v86;
              if ( v42 )
              {
                v39 &= ~*(v86 - 3);
                v98 &= ~*(v86 - 5);
                v96 = (int *)(~*(v86 - 4) & (unsigned int)v96);
                *v86 &= ~v72;
                *(v43 - 2) &= ~v76;
                *(v43 - 1) &= ~v77;
              }
              v86 = v43 + 6;
              ++v75;
              v38 = &v74[*((unsigned __int16 *)v74 + 1)];
              v44 = v9[2];
              v74 = v38;
            }
            while ( v75 < v44 );
            v10 = v82;
          }
          if ( v98 | (unsigned int)v96 | v39 )
            goto LABEL_8;
          v31 = (int)v97;
        }
        else
        {
          v9 = v93;
        }
        v31 += *(unsigned __int16 *)(v31 + 2);
        ++v89;
        v97 = (_DWORD *)v31;
        if ( v89 >= *(unsigned __int16 *)(v80 + 4) )
        {
          v30 = v9[2];
          goto LABEL_52;
        }
      }
    }
    *v10 |= 0x1000u;
    goto LABEL_87;
  }
LABEL_12:
  v17 = (int)ProcessHeap;
LABEL_13:
  if ( v15 )
    RtlFreeHeap(v17, 0, v15);
  if ( v87 )
    RtlFreeHeap(v17, 0, v87);
  return v11;
}
