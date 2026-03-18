/*
 * XREFs of MiParseImageSectionHeaders @ 0x14060B1B0
 * Callers:
 *     MiBuildImageControlArea @ 0x1406F14F0 (MiBuildImageControlArea.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMakeSubsectionPte @ 0x140263B4C (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x1402B6020 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r10
  __int64 v7; // r14
  int v8; // ebp
  int v9; // r11d
  __int64 *v10; // rbx
  _QWORD *v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int *v17; // r12
  unsigned int v18; // r8d
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // r14
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // r11d
  unsigned int v25; // r10d
  int v26; // r8d
  int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 SubsectionPte; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // dl
  __int64 DemandZeroPte; // rsi
  unsigned int v38; // r9d
  char v39; // r8
  char v40; // cl
  unsigned int v41; // r14d
  int v42; // r12d
  BOOL v43; // eax
  __int64 v44; // rdx
  bool v45; // zf
  __int64 v46; // rdx
  unsigned int v47; // ecx
  unsigned __int64 v49; // rbx
  unsigned int *v50; // r8
  unsigned int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // r9d
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int16 v57; // [rsp+20h] [rbp-78h]
  unsigned int v58; // [rsp+24h] [rbp-74h]
  unsigned int v59; // [rsp+28h] [rbp-70h]
  unsigned int v60; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v61; // [rsp+30h] [rbp-68h]
  unsigned int v62; // [rsp+34h] [rbp-64h]
  __int64 v63; // [rsp+38h] [rbp-60h]
  __int64 v64; // [rsp+40h] [rbp-58h]
  unsigned int *v65; // [rsp+48h] [rbp-50h]
  __int64 v66; // [rsp+50h] [rbp-48h]
  int v69; // [rsp+B8h] [rbp+20h]

  v69 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = a1;
  v9 = a4;
  v10 = a2;
  v63 = v6;
  v11 = (_QWORD *)(a2[17] + 8LL * *((unsigned int *)a2 + 43));
  *(_BYTE *)(v6 + 14) = *(_BYTE *)(*a2 + 14) & 0xC1 | 0xE;
  if ( (a1 & 0x200000) != 0 )
  {
    if ( a4 )
    {
      v50 = (unsigned int *)(a3 + 16);
      while ( 1 )
      {
        v51 = *v50;
        v52 = *v50;
        v53 = v50[1];
        if ( *(v50 - 2) )
          v52 = *(v50 - 2);
        if ( v51 + v53 < v53 )
          break;
        if ( v53 != *(v50 - 1) || v52 > v51 )
        {
          dword_140C4CA18 = 17;
          return 3221225595LL;
        }
        v50 += 10;
        if ( !--v9 )
          goto LABEL_64;
      }
      dword_140C4CA18 = 16;
      return 3221225595LL;
    }
    else
    {
LABEL_64:
      v10[15] = *(unsigned int *)(v6 + 8);
      return 0LL;
    }
  }
  else
  {
    v12 = a5;
    v13 = *(_DWORD *)(a5 + 12);
    v14 = *(_QWORD *)(v6 + 32) + (unsigned int)(*((_DWORD *)a2 + 43) << 12);
    v66 = *(_QWORD *)(v6 + 56);
    v15 = *(_DWORD *)(v66 + 56);
    v61 = v13;
    v16 = v15 + 1;
    if ( a4 )
    {
      v17 = (unsigned int *)(a3 + 20);
      v18 = a6;
      v65 = v17;
      while ( 1 )
      {
        v19 = *(v17 - 3);
        v20 = *(v17 - 1);
        if ( !(_DWORD)v19 )
          v19 = v20;
        v60 = v19;
        if ( !v20 && *v17 )
        {
          if ( (v8 & 0x10000) != 0 )
          {
            dword_140C4CA18 = 18;
            return 3221225595LL;
          }
          *v17 = 0;
        }
        if ( *v17 + v20 < *v17 )
          break;
        *(_QWORD *)(v7 + 56) = v10;
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v21 = v7 + 56;
        v64 = v21;
        if ( v14 != *(_QWORD *)v12 + *(v17 - 2) || !(_DWORD)v19 )
        {
          dword_140C4CA18 = 20;
          return 3221225595LL;
        }
        if ( v13 + (_DWORD)v19 - 1 <= (unsigned int)v19 )
        {
          dword_140C4CA18 = 21;
          return 3221225595LL;
        }
        v22 = (((unsigned int)v19 + (unsigned __int64)v13 - 1) >> 12) & (~((unsigned __int64)v13 - 1) >> 12);
        *(_DWORD *)(v21 + 44) = v22;
        if ( v22 > v18 )
        {
          dword_140C4CA18 = 22;
          return 3221225595LL;
        }
        v23 = (((unsigned int)v19 + (unsigned __int64)v13 - 1) >> 12) & (~((unsigned __int64)v13 - 1) >> 12);
        if ( v9 == 1 && v22 != v18 )
        {
          *(_DWORD *)(v21 + 44) = v18;
          v23 = v18;
        }
        *(_DWORD *)(v21 + 32) = 0;
        v24 = *v17 >> 9;
        *(_DWORD *)(v21 + 36) = v24;
        v59 = v18 - v23;
        v25 = -*(_DWORD *)(v12 + 8) & (*(_DWORD *)(v12 + 8) + *v17 + *(v17 - 1) - 1);
        if ( v25 < *v17 )
        {
          dword_140C4CA18 = 23;
          return 3221225595LL;
        }
        *(_QWORD *)(v21 + 8) = v11;
        *(_DWORD *)(v21 + 40) = (v25 >> 9) - v24;
        *(_WORD *)(v21 + 34) = 16 * (v25 & 0x1FF);
        v26 = v17[4];
        v27 = ((unsigned int)v26 >> 29) & 1 | 2;
        if ( (v26 & 0x40000000) == 0 )
          v27 = (v17[4] >> 29) & 1;
        v28 = v27 | 4;
        if ( v26 >= 0 )
          v28 = v27;
        v29 = v28 | 8;
        v30 = v26 & 0x10000000;
        if ( !(_DWORD)v30 )
          v29 = v28;
        v31 = (unsigned int)*((char *)MiImageProtectionArray + v29);
        if ( (*((_BYTE *)MiImageProtectionArray + v29) & 2) != 0 )
          *(_BYTE *)(v66 + 50) = 1;
        *(_WORD *)(v21 + 32) ^= (*(_WORD *)(v21 + 32) ^ (2 * v31)) & 0x3E;
        SubsectionPte = MiMakeSubsectionPte(v21, v31, v30, v19);
        DemandZeroPte = MiMakeDemandZeroPte(v33, v33, v34, v35);
        if ( !*v17 )
          SubsectionPte = DemandZeroPte;
        v39 = 0;
        v58 = *(v17 - 1);
        v40 = 0;
        v62 = v58 + *v17;
        v57 = 0;
        if ( (v36 & 4) != 0 )
        {
          if ( (v36 & 5) == 5 )
          {
            v40 = 1;
            v58 = *(v17 - 1);
            LOBYTE(v57) = 1;
          }
          else
          {
            *(_WORD *)(v21 + 34) |= 2u;
            v39 = 1;
            *((_DWORD *)v10 + 14) |= 0x20000u;
            v58 = *(v17 - 1);
            HIBYTE(v57) = 1;
          }
        }
        v41 = 0;
        v42 = 0;
        if ( *(_DWORD *)(v64 + 44) )
        {
          while ( v41 < v38 )
          {
            if ( v39 == 1 )
              ++*(_QWORD *)(v63 + 16);
            if ( v40 == 1 )
              ++*(_QWORD *)(v63 + 48);
            v43 = MiPteInShadowRange((unsigned __int64)v11);
            if ( v41 >= v58 )
            {
              v46 = DemandZeroPte;
              if ( !v43 )
                goto LABEL_39;
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4DE08) && (DemandZeroPte & 1) != 0 )
                  v46 |= 0x8000000000000000uLL;
                *v11 = v46;
                MiWritePteShadow((__int64)v11, v46, v55);
              }
              else
              {
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (DemandZeroPte & 1) != 0 )
                {
                  v46 |= 0x8000000000000000uLL;
                }
LABEL_39:
                *v11 = v46;
              }
              if ( !v57 )
                ++*(_QWORD *)(v63 + 16);
              goto LABEL_34;
            }
            ++v10[15];
            v44 = SubsectionPte;
            if ( v43 )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4DE08) && (SubsectionPte & 1) != 0 )
                  v44 |= 0x8000000000000000uLL;
                *v11 = v44;
                MiWritePteShadow((__int64)v11, v44, v54);
                goto LABEL_34;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (SubsectionPte & 1) != 0 )
              {
                v44 |= 0x8000000000000000uLL;
              }
            }
            *v11 = v44;
LABEL_34:
            v38 = v60;
            v41 += 4096;
            v40 = v57;
            ++v11;
            v39 = HIBYTE(v57);
            v14 += 4096LL;
            if ( (unsigned int)++v42 >= *(_DWORD *)(v64 + 44) )
            {
              v8 = a1;
              goto LABEL_36;
            }
          }
          v49 = ZeroPte;
          if ( MiPteInShadowRange((unsigned __int64)v11) )
          {
            if ( !(unsigned int)MiPteHasShadow() )
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v49 = ZeroPte | 0x8000000000000000uLL;
              }
              goto LABEL_51;
            }
            if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
              v49 = ZeroPte | 0x8000000000000000uLL;
            *v11 = v49;
            MiWritePteShadow((__int64)v11, v49, v56);
          }
          else
          {
LABEL_51:
            *v11 = v49;
          }
          v10 = a2;
          *(_DWORD *)(v64 + 52) ^= (*(_DWORD *)(v64 + 52) ^ (*(_DWORD *)(v64 + 52) + 1)) & 0x3FFFFFFF;
          goto LABEL_34;
        }
LABEL_36:
        v17 = v65 + 10;
        v12 = a5;
        v45 = v69 == 1;
        v9 = --v69;
        v65 += 10;
        if ( v45 )
        {
          v47 = v59;
          v16 = v62;
          v15 = *(_DWORD *)(v66 + 56);
          goto LABEL_47;
        }
        v7 = v64;
        v18 = v59;
        v13 = v61;
      }
      dword_140C4CA18 = 19;
      return 3221225595LL;
    }
    else
    {
      v47 = a6;
LABEL_47:
      if ( v16 > v15 )
      {
        dword_140C4CA18 = 24;
        return 3221225595LL;
      }
      else if ( v47 >= *(_DWORD *)(v12 + 12) >> 12 )
      {
        dword_140C4CA18 = 25;
        return 3221225595LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
