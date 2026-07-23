/*
 * XREFs of PfpLogPageAccess @ 0x140679350
 * Callers:
 *     PfpCopyEvent @ 0x140678D70 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140678FB0 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x140679A24 (PfTReplaceCurrentBuffer.c)
 */

unsigned __int64 __fastcall PfpLogPageAccess(__int64 a1, _DWORD *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  __int16 v6; // si
  unsigned __int16 v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  char v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  int v17; // r15d
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  char v20; // r13
  __int64 v21; // r12
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rdx
  int v26; // ebp
  __int64 v27; // rdx
  int v28; // ebx
  __int64 v29; // rcx
  unsigned __int64 result; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  unsigned int v39; // r11d
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r10
  unsigned int v43; // eax
  unsigned int v44; // r11d
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int16 v47; // ax
  unsigned int v48; // r10d
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // ecx
  __int64 v52; // r8
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // [rsp+20h] [rbp-48h]
  __int16 v55; // [rsp+20h] [rbp-48h]
  unsigned int v56; // [rsp+2Ch] [rbp-3Ch]
  __int16 v57; // [rsp+78h] [rbp+10h]
  unsigned int v58; // [rsp+78h] [rbp+10h]

  v5 = 0LL;
  v6 = -1;
  v57 = -1;
  if ( (*a2 & 0x1FF) == 0 )
    goto LABEL_9;
  v10 = 0;
  v11 = *(_QWORD *)(a4 - 8LL * (*a2 & 0x1FF));
  v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
  v13 = 0;
  while ( 1 )
  {
    v14 = qword_140C4FC58;
    v15 = *(unsigned int *)(qword_140C4FC58 + 16);
    v16 = (qword_140C4FC58 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v16 + 40 * v15) != v12 )
    {
      v54 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      v15 = (HIBYTE(v54)
           + 37
           * (BYTE6(v54)
            + 37
            * (BYTE5(v54)
             + 37
             * (BYTE4(v54)
              + 37 * (BYTE3(v54) + 37 * (BYTE2(v54) + 37 * (BYTE1(v54) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (unsigned int)(*(_DWORD *)(qword_140C4FC58 + 32) - 1);
      v38 = *(_QWORD *)(v16 + 40 * v15);
      if ( v38 != v12 )
      {
        if ( v38 )
        {
          v42 = (unsigned int)(v15 + 1);
          v43 = 0;
          v44 = *(_DWORD *)(qword_140C4FC58 + 32);
          v58 = 0;
          while ( (unsigned int)v42 >= v44 )
          {
LABEL_42:
            ++v43;
            v42 = 0LL;
            v58 = v43;
            v44 = (HIBYTE(v54)
                 + 37
                 * (BYTE6(v54)
                  + 37
                  * (BYTE5(v54)
                   + 37
                   * (BYTE4(v54)
                    + 37 * (BYTE3(v54) + 37 * (BYTE2(v54) + 37 * (BYTE1(v54) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (*(_DWORD *)(qword_140C4FC58 + 32) - 1);
            if ( v43 >= 2 )
            {
              v10 = -1;
              goto LABEL_55;
            }
          }
          while ( 1 )
          {
            v45 = *(_QWORD *)(v16 + 40 * v42);
            if ( v45 == v12 )
            {
              *(_DWORD *)(qword_140C4FC58 + 16) = v42;
              LOWORD(v15) = v42;
              goto LABEL_4;
            }
            if ( !v45 )
              break;
            v42 = (unsigned int)(v42 + 1);
            if ( (unsigned int)v42 >= v44 )
            {
              v43 = v58;
              goto LABEL_42;
            }
          }
          *(_DWORD *)(qword_140C4FC58 + 16) = v42;
          v10 = v42;
        }
        else
        {
          *(_DWORD *)(qword_140C4FC58 + 16) = v15;
          v10 = v15;
        }
        goto LABEL_55;
      }
      *(_DWORD *)(qword_140C4FC58 + 16) = v15;
    }
LABEL_4:
    if ( (_WORD)v15 != 0xFFFF )
      goto LABEL_5;
LABEL_55:
    v51 = *(_DWORD *)(v14 + 28);
    if ( v51 < 3 * (*(_DWORD *)(v14 + 32) >> 2) )
      break;
    if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140C4FC40) == -1073741823 )
      return 0LL;
  }
  v13 = 1;
  *(_DWORD *)(v14 + 28) = v51 + 1;
  LOWORD(v15) = v10;
  *(_QWORD *)(v16 + 40LL * v10) = v12;
LABEL_5:
  if ( !v14 )
    return 0LL;
  v57 = v15 + *(_WORD *)(v14 + 36);
  if ( v13 )
  {
    v46 = v16 + 40LL * (unsigned __int16)v15;
    v47 = *(_WORD *)(v46 + 16);
    *(_QWORD *)(v46 + 8) = (16 * v11) | *(_DWORD *)(v46 + 8) & 8 | 4;
    *(_WORD *)(v46 + 16) = v47 & 0xFFF0 | (v11 >> 60);
  }
  v5 = 0LL;
LABEL_9:
  v17 = a5;
  if ( a1 >= 0 )
  {
    if ( !a5 )
    {
      if ( !a1 )
        goto LABEL_18;
      v5 = 1LL;
      v26 = (a1 & 0x7FFFFFFF) - 1;
LABEL_19:
      v27 = qword_140C4FC30;
      v28 = ((*a3 & 3) == 2) + 1;
      if ( (unsigned int)(v28 + *(_DWORD *)(qword_140C4FC30 + 16)) > *(_DWORD *)(qword_140C4FC30 + 20) )
      {
        while ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140C4FC18) != -1073741823 )
        {
          v27 = qword_140C4FC30;
          if ( (unsigned int)(v28 + *(_DWORD *)(qword_140C4FC30 + 16)) <= *(_DWORD *)(qword_140C4FC30 + 20) )
            goto LABEL_20;
        }
        return 0LL;
      }
      else
      {
LABEL_20:
        v29 = *(unsigned int *)(v27 + 16);
        *(_DWORD *)(v27 + 16) = v28 + v29;
        result = 16 * v29 + ((v27 + 31) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (*a3 & 3) == 2 )
        {
          *(_OWORD *)result = *(_OWORD *)a3;
          *(_QWORD *)result = *(_QWORD *)result & 0xFFFFFFFFFFFFF003uLL | 8;
          result += 16LL;
        }
        v31 = *(_QWORD *)result;
        if ( (*a2 & 0x1FF) != 0 )
        {
          v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
          *(_QWORD *)result = v32;
          v33 = ((unsigned __int8)v32 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 4 ^ v32;
          *(_QWORD *)result = v33;
          v34 = ((unsigned __int8)v33 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 8 ^ v33;
          *(_QWORD *)result = v34;
          v35 = v34 & 0xF | (16LL * (unsigned int)(*(_QWORD *)a2 >> 12));
          *(_WORD *)(result + 10) = v6;
          *(_QWORD *)result = v35;
          *(_WORD *)(result + 8) = v57;
        }
        else
        {
          v36 = v31 & 0xFFFFFFFFFFFFFFFCuLL | 1;
          *(_QWORD *)result = v36;
          v37 = (8 * v5) | (((unsigned __int8)v36 ^ (unsigned __int8)((unsigned __int64)(unsigned int)*a2 >> 7)) & 4 ^ v36) & 0xFFFFFFFFFFFFFFE7uLL;
          *(_QWORD *)result = v37;
          *(_QWORD *)result = *(_QWORD *)a2 ^ (*a2 ^ (unsigned int)v37) & 0xFFF;
          if ( v5 == 2 )
            *(_WORD *)(result + 10) = v6;
          else
            *(_DWORD *)(result + 8) = v26;
        }
      }
      return result;
    }
  }
  else if ( !a5 )
  {
    v18 = (*(_QWORD *)(a1 + 1088) ^ *(_QWORD *)(a1 + 1128)) & 0x1FFFFFFFFFFFFFFFLL;
    goto LABEL_12;
  }
  v18 = a1;
LABEL_12:
  v55 = 0;
  v19 = v18 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  v20 = 0;
  v21 = 4 * (v19 & 3) + 16;
  while ( 2 )
  {
    v22 = qword_140C4FC58;
    v23 = *(unsigned int *)(v21 + qword_140C4FC58);
    v24 = (qword_140C4FC58 + 47) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v24 + 40 * v23) == v19 )
    {
LABEL_14:
      if ( (_WORD)v23 != 0xFFFF )
        goto LABEL_15;
      LOWORD(v40) = v55;
    }
    else
    {
      v39 = *(_DWORD *)(qword_140C4FC58 + 32);
      v40 = (HIBYTE(v19)
           + 37
           * (BYTE6(v19)
            + 37
            * (BYTE5(v19)
             + 37
             * (BYTE4(v19)
              + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))) & (v39 - 1);
      v41 = *(_QWORD *)(v24 + 40 * v40);
      if ( v41 == v19 )
      {
        *(_DWORD *)(v21 + qword_140C4FC58) = v40;
        LOWORD(v23) = (HIBYTE(v19)
                     + 37
                     * (BYTE6(v19)
                      + 37
                      * (BYTE5(v19)
                       + 37
                       * (BYTE4(v19)
                        + 37
                        * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 24011)))))))) & (v39 - 1);
        goto LABEL_14;
      }
      if ( v41 )
      {
        v48 = v40 + 1;
        v49 = 0;
        v17 = a5;
        v56 = 0;
        while ( v48 >= v39 )
        {
LABEL_52:
          ++v49;
          v48 = 0;
          v56 = v49;
          v39 = v40;
          if ( v49 >= 2 )
          {
            LOWORD(v40) = -1;
            goto LABEL_65;
          }
        }
        while ( 1 )
        {
          v50 = *(_QWORD *)(v24 + 40LL * v48);
          if ( v50 == v19 )
          {
            *(_DWORD *)(v21 + qword_140C4FC58) = v48;
            LOWORD(v23) = v48;
            goto LABEL_14;
          }
          if ( !v50 )
            break;
          if ( ++v48 >= v39 )
          {
            v49 = v56;
            goto LABEL_52;
          }
        }
        *(_DWORD *)(v21 + qword_140C4FC58) = v48;
        LOWORD(v40) = v48;
      }
      else
      {
        *(_DWORD *)(v21 + qword_140C4FC58) = v40;
      }
LABEL_65:
      v55 = v40;
    }
    LODWORD(v23) = *(_DWORD *)(v22 + 28);
    if ( (unsigned int)v23 >= 3 * (*(_DWORD *)(v22 + 32) >> 2) )
    {
      if ( (unsigned int)PfTReplaceCurrentBuffer(&unk_140C4FC40) == -1073741823 )
        return 0LL;
      continue;
    }
    break;
  }
  v20 = 1;
  *(_DWORD *)(v22 + 28) = v23 + 1;
  *(_QWORD *)(v24 + 40LL * (unsigned __int16)v40) = v19;
  LOWORD(v23) = v40;
LABEL_15:
  if ( v22 )
  {
    v5 = 2LL;
    v6 = v23 + *(_WORD *)(v22 + 36);
    v25 = v24 + 40LL * (unsigned __int16)v23;
    if ( v20 || (*(_BYTE *)(v25 + 8) & 4) != 0 )
    {
      v52 = *(_QWORD *)(v25 + 8);
      if ( v17 )
      {
        *(_QWORD *)(v25 + 8) = v52 & 0xFFFFFFFFFFFFFFF8uLL | 5;
      }
      else
      {
        v53 = v52 & 0xFFFFFFFFFFFFFFF8uLL | 1;
        *(_QWORD *)(v25 + 8) = v53;
        *(_QWORD *)(v25 + 8) = v53 & 7 | (8LL * (*(_QWORD *)(a1 + 1088) ^ *(_QWORD *)(a1 + 1128)));
        *(_DWORD *)(v25 + 28) = *(_DWORD *)(a1 + 1524);
        *(_DWORD *)(v25 + 24) = *(_DWORD *)(a1 + 1088);
        *(_QWORD *)(v25 + 16) = a1;
      }
    }
LABEL_18:
    v26 = 0;
    goto LABEL_19;
  }
  return 0LL;
}
