/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x1800E7924
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E8148 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlMapGenericMask @ 0x180037EA0 (RtlMapGenericMask.c)
 *     RtlpCompareAces @ 0x180038208 (RtlpCompareAces.c)
 *     RtlpInheritAcl @ 0x180039EA0 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x180040070 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 *a8,
        _DWORD *a9)
{
  _DWORD *v10; // rsi
  __int64 *v11; // r13
  _DWORD *v12; // rdi
  __int64 v13; // r15
  void *ProcessHeap; // r14
  int v15; // ebx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int16 *v20; // r13
  unsigned __int16 *v21; // rbx
  int *v22; // rsi
  int v23; // edx
  int v24; // edx
  char v25; // r8
  int v26; // ecx
  int v27; // r9d
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rbx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  char v34; // dl
  unsigned __int16 *v35; // r15
  int v36; // r8d
  int v37; // eax
  int v38; // r9d
  int v39; // edx
  int v40; // ecx
  int v41; // esi
  int v42; // r13d
  _DWORD *v43; // r14
  int v44; // edi
  int v45; // eax
  __int64 v46; // rbx
  char v47; // r9
  char v48; // r10
  int v49; // esi
  unsigned __int8 *v50; // rdx
  __int64 v51; // r11
  _DWORD *v52; // r8
  __int64 v53; // rax
  int v54; // ecx
  char v55; // al
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 *v58; // r14
  unsigned __int8 v60; // cl
  _BYTE *v61; // r14
  int v62; // ecx
  __int64 *v63; // rdi
  _DWORD *v64; // r15
  int v65; // ebx
  _BYTE *v66; // r13
  unsigned __int16 *v67; // rcx
  unsigned int v68; // esi
  int v69; // ebx
  _DWORD *v70; // rdi
  int v71; // eax
  int v72; // eax
  __int64 v73; // rsi
  void *v74; // rax
  int v76; // [rsp+94h] [rbp-7Ch] BYREF
  _BYTE v77[4]; // [rsp+98h] [rbp-78h] BYREF
  int v78; // [rsp+9Ch] [rbp-74h] BYREF
  int v79; // [rsp+A0h] [rbp-70h] BYREF
  __int16 v80; // [rsp+A4h] [rbp-6Ch]
  int v81; // [rsp+A8h] [rbp-68h]
  unsigned int v82; // [rsp+ACh] [rbp-64h] BYREF
  __int64 *v83; // [rsp+B0h] [rbp-60h]
  __int64 v84; // [rsp+B8h] [rbp-58h] BYREF
  _DWORD *v85; // [rsp+C0h] [rbp-50h]
  void *v86; // [rsp+C8h] [rbp-48h]
  unsigned __int8 *v87; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int16 *v88; // [rsp+D8h] [rbp-38h]
  __int64 Heap; // [rsp+E0h] [rbp-30h]
  __int64 v90; // [rsp+E8h] [rbp-28h] BYREF
  int v91; // [rsp+F0h] [rbp-20h]
  int v92; // [rsp+F4h] [rbp-1Ch]
  int v93; // [rsp+F8h] [rbp-18h] BYREF
  _DWORD *v94; // [rsp+100h] [rbp-10h]
  __int64 v95; // [rsp+108h] [rbp-8h]
  __int64 v96; // [rsp+110h] [rbp+0h]
  __int64 v97; // [rsp+118h] [rbp+8h]
  char v98[8]; // [rsp+120h] [rbp+10h] BYREF
  int v99; // [rsp+128h] [rbp+18h]
  char v100[8]; // [rsp+150h] [rbp+40h] BYREF
  int v101; // [rsp+158h] [rbp+48h]

  v10 = a7;
  v11 = a8;
  v12 = a9;
  v96 = a5;
  v90 = a3;
  v95 = a6;
  v13 = 0LL;
  v84 = 0LL;
  v87 = 0LL;
  v79 = 0;
  v97 = a1;
  v85 = a7;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v86 = ProcessHeap;
  v83 = a8;
  v94 = a9;
  v80 = 768;
  v15 = RtlInitializeSid((__int64)v100, (__int64)&v79, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v101 = 0;
  v15 = RtlInitializeSid((__int64)v98, (__int64)&v79, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v16 = v97;
  *a9 = 1024;
  v99 = 1;
  *a8 = 0LL;
  if ( v16 && !RtlValidAcl(v16) || !RtlValidAcl((__int64)a2) )
    return (unsigned int)-1073741705;
  v17 = RtlpInheritAcl(
          v16,
          0,
          0,
          a4,
          1,
          0,
          (__int64)v100,
          (__int64)v98,
          (__int64)v100,
          (__int64)v98,
          (__int64)a7,
          2,
          (unsigned __int64)&v90 & -(__int64)(v90 != 0),
          v90 != 0,
          &v84,
          v77,
          &v93);
  v18 = v84;
  v15 = v17;
  if ( v17 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_91;
  }
  if ( v17 >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, 24LL * a2[2]);
    v13 = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
LABEL_65:
      v18 = v84;
      goto LABEL_66;
    }
    LOWORD(v19) = a2[2];
    v76 = 0;
    v20 = a2 + 4;
    v88 = a2 + 4;
    v21 = a2 + 4;
    if ( (_WORD)v19 )
    {
      v22 = (int *)(Heap + 4);
      while ( *(_BYTE *)v21 <= 8u && *(_BYTE *)v21 != 4 )
      {
        v78 = *((_DWORD *)v21 + 1);
        RtlMapGenericMask(&v78, v85);
        if ( (unsigned __int8)(*(_BYTE *)v21 - 2) <= 2u || *(_BYTE *)v21 >= 7u )
          v23 = v85[3] | 0x1000000;
        else
          v23 = v85[3];
        v24 = v78 & v23;
        v25 = *((_BYTE *)v21 + 1) & 3 | ~*((_BYTE *)v21 + 1) & 8;
        if ( (*((_BYTE *)v21 + 1) & 2) != 0 )
        {
          v26 = v24;
          v27 = v24;
        }
        else
        {
          v27 = 0;
          v26 = 0;
        }
        v22[2] = v27;
        *(v22 - 1) = v26;
        v28 = (v25 & 1) != 0 ? v24 : 0;
        *v22 = v28;
        v22[3] = v28;
        v29 = (v25 & 8) != 0 ? v24 : 0;
        v22[1] = v29;
        v22[4] = v29;
        v22 += 6;
        v21 = (unsigned __int16 *)((char *)v21 + v21[1]);
        v19 = a2[2];
        if ( ++v76 >= v19 )
        {
          v10 = v85;
          goto LABEL_25;
        }
      }
LABEL_31:
      *v12 |= 0x1000u;
      v11 = v83;
    }
    else
    {
LABEL_25:
      v82 = 0;
      v30 = v84 + 8;
      if ( *(_WORD *)(v84 + 4) )
      {
        while ( *(_BYTE *)v30 <= 8u && *(_BYTE *)v30 != 4 )
        {
          v76 = *(_DWORD *)(v30 + 4);
          RtlMapGenericMask(&v76, v10);
          if ( (unsigned __int8)(*(_BYTE *)v30 - 2) <= 2u || *(_BYTE *)v30 >= 7u )
            v31 = v10[3] | 0x1000000;
          else
            v31 = v10[3];
          v32 = v76 & v31;
          if ( v32 )
          {
            v33 = *(_BYTE *)(v30 + 1) & 3;
            v34 = v33 | ~*(_BYTE *)(v30 + 1) & 8;
            if ( v33 | ~*(_BYTE *)(v30 + 1) & 8 )
            {
              v76 = 0;
              v35 = v20;
              v36 = (v34 & 2) != 0 ? v32 : 0;
              v92 = v36;
              v37 = v36;
              v38 = (v34 & 1) != 0 ? v32 : 0;
              v79 = v38;
              v39 = (v34 & 8) != 0 ? v32 : 0;
              v40 = v38;
              v41 = v39;
              v91 = v39;
              if ( a2[2] )
              {
                v42 = v36;
                v43 = (_DWORD *)(Heap + 20);
                v44 = v38;
                do
                {
                  if ( RtlpCompareAces((_BYTE *)v30, (char *)v35) )
                  {
                    v41 &= ~*(v43 - 3);
                    v42 &= ~*(v43 - 5);
                    v44 &= ~*(v43 - 4);
                    *v43 &= ~v91;
                    *(v43 - 2) &= ~v92;
                    *(v43 - 1) &= ~v79;
                  }
                  v43 += 6;
                  v35 = (unsigned __int16 *)((char *)v35 + v35[1]);
                  v45 = a2[2];
                  ++v76;
                }
                while ( v76 < v45 );
                v81 = v44;
                v40 = v44;
                v12 = v94;
                v78 = v42;
                v20 = a2 + 4;
                v37 = v78;
              }
              if ( v37 | v40 | v41 )
                break;
              v10 = v85;
            }
          }
          v30 += *(unsigned __int16 *)(v30 + 2);
          if ( (int)++v82 >= *(unsigned __int16 *)(v84 + 4) )
          {
            LOWORD(v19) = a2[2];
            ProcessHeap = v86;
            v13 = Heap;
            goto LABEL_45;
          }
        }
        *v12 |= 0x1000u;
        v11 = v83;
      }
      else
      {
LABEL_45:
        v46 = (unsigned __int16)v19;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        v50 = (unsigned __int8 *)v20;
        if ( (_WORD)v19 )
        {
          v51 = 0LL;
          v52 = (_DWORD *)(v13 + 16);
          do
          {
            v53 = *v50;
            if ( *v52 | v52[1] | *(v52 - 1) )
            {
              v54 = *((unsigned __int16 *)v50 + 1);
              v55 = RtlBaseAceType[v53];
              v49 += v54;
              ProcessHeap = v86;
              if ( !v55 && v48 || v55 == 1 && v47 )
                goto LABEL_31;
            }
            else
            {
              if ( !RtlBaseAceType[v53] )
                v47 = 1;
              v12 = v94;
              if ( RtlBaseAceType[v53] == 1 )
                v48 = 1;
              LOWORD(v54) = *((_WORD *)v50 + 1);
            }
            ++v51;
            v50 += (unsigned __int16)v54;
            v52 += 6;
          }
          while ( v51 < v46 );
        }
        v15 = RtlpInheritAcl(
                v97,
                0,
                0,
                a4,
                1,
                0,
                v96,
                v95,
                v96,
                v95,
                (__int64)v85,
                2,
                (unsigned __int64)&v90 & -(__int64)(v90 != 0),
                v90 != 0,
                (__int64 *)&v87,
                v77,
                &v93);
        if ( v15 < 0 )
          goto LABEL_63;
        v56 = (__int64)v87;
        v57 = RtlAllocateHeap(
                (__int64)ProcessHeap,
                NtdllBaseTag + 1310720,
                v49 + (unsigned int)*((unsigned __int16 *)v87 + 1));
        v58 = v83;
        *v83 = v57;
        if ( !v57 )
        {
          v15 = -1073741801;
          goto LABEL_62;
        }
        v60 = *v87;
        if ( *v87 <= *(_BYTE *)a2 )
          v60 = *(_BYTE *)a2;
        if ( (int)RtlCreateAcl(v57, v49 + (unsigned int)*(unsigned __int16 *)(v56 + 2), v60) < 0 )
        {
          *v12 |= 0x1000u;
          v11 = v58;
          goto LABEL_91;
        }
        v61 = (_BYTE *)(*v58 + 8);
        v81 = 0;
        v62 = 0;
        if ( a2[2] )
        {
          v63 = v83;
          v64 = (_DWORD *)(v13 + 16);
          do
          {
            v65 = *v64 | v64[1] | *(v64 - 1);
            if ( v65 )
            {
              memmove(v61, v20, v20[1]);
              v61[1] &= ~0x10u;
              v66 = v61;
              v67 = v88;
              v68 = 0x80000000;
              v61 += v88[1];
              ++*(_WORD *)(*v63 + 4);
              *((_DWORD *)v66 + 1) = v65 & *((_DWORD *)v67 + 1);
              v69 = ~*((_DWORD *)v67 + 1) & v65;
              if ( v69 )
              {
                v70 = v85;
                do
                {
                  if ( v68 < 0x10000000 )
                    break;
                  if ( (v68 & *((_DWORD *)v67 + 1)) != 0 )
                  {
                    v82 = v68;
                    RtlMapGenericMask((int *)&v82, v70);
                    v71 = v82;
                    v67 = v88;
                    if ( (v82 & v69) != 0 )
                    {
                      *((_DWORD *)v66 + 1) |= v68;
                      v69 &= ~v71;
                    }
                  }
                  v68 >>= 1;
                }
                while ( v69 );
                v63 = v83;
              }
              *((_DWORD *)v66 + 1) |= v69;
              v20 = v88;
              v62 = v81;
            }
            ++v62;
            v20 = (unsigned __int16 *)((char *)v20 + v20[1]);
            v81 = v62;
            v72 = a2[2];
            v64 += 6;
            v88 = v20;
          }
          while ( v62 < v72 );
          v12 = v94;
          v56 = (__int64)v87;
        }
        v73 = (__int64)v87;
        memmove(v61, v87 + 8, (unsigned int)*(unsigned __int16 *)(v56 + 2) - 8);
        v11 = v83;
        *(_WORD *)(*v83 + 4) += *(_WORD *)(v73 + 4);
      }
      v13 = Heap;
    }
LABEL_91:
    v15 = 0;
    if ( (*v12 & 0x1000) != 0 )
    {
      ProcessHeap = v86;
      if ( *v11 )
      {
        RtlFreeHeap((__int64)v86, 0, *v11);
        *v11 = 0LL;
      }
      v74 = (void *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, a2[1]);
      *v11 = (__int64)v74;
      if ( v74 )
        memmove(v74, a2, a2[1]);
      else
        v15 = -1073741801;
      goto LABEL_63;
    }
LABEL_62:
    ProcessHeap = v86;
LABEL_63:
    if ( v13 )
      RtlFreeHeap((__int64)ProcessHeap, 0, v13);
    goto LABEL_65;
  }
LABEL_66:
  if ( v18 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v18);
  if ( v87 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v87);
  return (unsigned int)v15;
}
