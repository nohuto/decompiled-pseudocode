/*
 * XREFs of PfTCreateTraceDump @ 0x14067B340
 * Callers:
 *     PfTGenerateTrace @ 0x14067B2EC (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfTFreeBufferList @ 0x14067BB44 (PfTFreeBufferList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfTCreateTraceDump(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  int v3; // edi
  int v4; // r15d
  unsigned int i; // edx
  SIZE_T v6; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v8; // r12
  __int64 *v9; // rsi
  __int16 v10; // bx
  unsigned int v11; // r11d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // r8
  unsigned __int16 v15; // ax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // r8
  int v26; // edi
  int v27; // r15d
  unsigned int v28; // ebx
  _OWORD *v29; // rax
  char *v30; // r13
  __int64 *v31; // r14
  unsigned int v32; // ebx
  unsigned __int64 v33; // rdx
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  unsigned __int64 v36; // rax
  _WORD *v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // r14
  unsigned int v40; // edi
  __int64 v41; // rcx
  unsigned __int16 v42; // r9
  unsigned __int16 v43; // r8
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  _OWORD *v46; // r11
  __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  _OWORD *v49; // rdx
  unsigned __int16 v50; // r8
  unsigned __int16 v51; // cx
  unsigned __int64 v52; // r10
  unsigned __int16 v53; // r9
  unsigned __int16 v54; // cx
  int v55; // eax
  unsigned int v57; // eax
  __int16 v58; // bx
  __int64 v59; // r8
  __int64 v60; // r8
  __int16 v61; // r9
  __int64 v62; // r10
  __int64 v63; // rdx
  __int64 v64; // r10
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 v67; // r10
  __int64 v68; // r10
  __int64 v69; // rbx
  _WORD *P; // [rsp+20h] [rbp-108h]
  unsigned __int64 v71; // [rsp+28h] [rbp-100h]
  __int64 *v72; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v73; // [rsp+38h] [rbp-F0h]
  _OWORD *v74; // [rsp+40h] [rbp-E8h]
  _QWORD v75[12]; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 v77; // [rsp+138h] [rbp+10h]
  __int16 v78; // [rsp+140h] [rbp+18h]
  unsigned __int64 v79; // [rsp+148h] [rbp+20h]

  memset(v75, 0, sizeof(v75));
  v1 = qword_140C4FC58;
  v2 = qword_140C4FC60;
  v3 = 0;
  v4 = 0;
  for ( i = 0; (__int64 *)v1 != &qword_140C4FC58; v1 = *(_QWORD *)v1 )
    i += *(_DWORD *)(v1 + 32);
  v6 = 2LL * i;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x74546650u);
  P = PoolWithTag;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    v9 = &qword_140C4FC30;
    v10 = *(_WORD *)(qword_140C4FC60 + 36);
    v78 = v10;
    do
    {
      v9 = (__int64 *)v9[1];
      v11 = 0;
      if ( *((_DWORD *)v9 + 4) )
      {
        while ( 1 )
        {
          v12 = (((unsigned __int64)v9 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * v11;
          v13 = *(_QWORD *)v12;
          if ( ((unsigned __int8)*(_QWORD *)v12 & 3u) < 2 )
            break;
          v57 = ((unsigned int)v13 >> 2) & 0x3FF;
          v3 += v57;
          v11 = v57 + v11 - 1;
          if ( (v13 & 3) == 2 )
          {
            LODWORD(v13) = *(_DWORD *)(v12 + 16);
            v12 += 16LL;
            goto LABEL_8;
          }
LABEL_26:
          if ( ++v11 >= *((_DWORD *)v9 + 4) )
            goto LABEL_27;
        }
        ++v3;
LABEL_8:
        if ( (v13 & 3) != 0 )
        {
          v15 = -1;
          if ( (*(_BYTE *)v12 & 0x18) == 0x10 )
            v14 = *(_WORD *)(v12 + 10);
          else
            v14 = -1;
        }
        else
        {
          v14 = *(_WORD *)(v12 + 10);
          v15 = *(_WORD *)(v12 + 8);
        }
        if ( v15 == 0xFFFF )
        {
          v19 = 0LL;
        }
        else
        {
          v16 = *(unsigned __int16 *)(v2 + 36);
          if ( v15 < (unsigned __int16)v16 || v15 >= (unsigned int)(*(_DWORD *)(v2 + 32) + v16) )
          {
            v66 = v2;
            while ( 1 )
            {
              v66 = *(_QWORD *)(v66 + 8);
              if ( (__int64 *)v66 == &qword_140C4FC58 )
                v66 = qword_140C4FC60;
              if ( v66 == v2 )
                break;
              v67 = *(unsigned __int16 *)(v66 + 36);
              if ( v15 >= (unsigned __int16)v67 && v15 < (unsigned int)(*(_DWORD *)(v66 + 32) + v67) )
              {
                v17 = v66 + 47;
                v18 = v15 - v67;
                v2 = v66;
                goto LABEL_14;
              }
            }
            v19 = 0LL;
          }
          else
          {
            v17 = v2 + 47;
            v18 = v15 - v16;
LABEL_14:
            v19 = (v17 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v18 + 8;
          }
        }
        if ( v14 == 0xFFFF )
        {
          v23 = 0LL;
        }
        else
        {
          v20 = *(unsigned __int16 *)(v2 + 36);
          if ( v14 < (unsigned __int16)v20 || v14 >= (unsigned int)(*(_DWORD *)(v2 + 32) + v20) )
          {
            v68 = v2;
            while ( 1 )
            {
              v68 = *(_QWORD *)(v68 + 8);
              if ( (__int64 *)v68 == &qword_140C4FC58 )
                v68 = qword_140C4FC60;
              if ( v68 == v2 )
                break;
              v69 = *(unsigned __int16 *)(v68 + 36);
              if ( v14 >= (unsigned __int16)v69 && v14 < (unsigned int)(*(_DWORD *)(v68 + 32) + v69) )
              {
                v21 = v68 + 47;
                v22 = v14 - v69;
                v2 = v68;
                v10 = v78;
                goto LABEL_19;
              }
            }
            v10 = v78;
            v23 = 0LL;
          }
          else
          {
            v21 = v2 + 47;
            v22 = v14 - v20;
LABEL_19:
            v23 = (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v22 + 8;
          }
        }
        if ( v19 )
        {
          v24 = v15 - v10;
          if ( v8[v24] != 0xFFFF )
          {
            v8[v24] = -1;
            ++v4;
          }
        }
        if ( v23 )
        {
          v25 = v14 - v10;
          if ( v8[v25] != 0xFFFF )
          {
            v8[v25] = -1;
            ++v4;
          }
        }
        goto LABEL_26;
      }
LABEL_27:
      ;
    }
    while ( v9 != (__int64 *)qword_140C4FC30 );
    if ( v3 )
    {
      v26 = 16 * v3;
      v27 = 32 * v4;
      v28 = v27 + ((v26 + 63) & 0xFFFFFFF8);
      v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x44546650u);
      v74 = v29;
      if ( v29 )
      {
        v30 = (char *)(v29 + 2);
        v29[1] = 0LL;
        v31 = &qword_140C4FC30;
        v29[2] = 0LL;
        *((_QWORD *)v29 + 6) = 0LL;
        *((_DWORD *)v29 + 6) = v28 - 16;
        v32 = 0;
        *((_DWORD *)v29 + 4) = 852013;
        *((_DWORD *)v29 + 5) = 1128485697;
        v33 = (unsigned __int64)v29 + (unsigned int)(v26 + 24) + 32;
        *((_DWORD *)v29 + 7) = 0;
        v34 = 0;
        *((_DWORD *)v29 + 10) = v26 + 24;
        *((_DWORD *)v29 + 8) = 24;
        v71 = (unsigned __int64)v29 + (unsigned int)(v26 + 24 + v27) + 32;
        v75[9] = v71;
        *((_DWORD *)v29 + 12) = v26 + 24 + v27;
        v79 = v33;
        v77 = 0;
        do
        {
          v31 = (__int64 *)v31[1];
          v35 = 0;
          v72 = v31;
          if ( *((_DWORD *)v31 + 4) )
          {
            v36 = ((unsigned __int64)v31 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
            v73 = v36;
            while ( 1 )
            {
              v37 = (_WORD *)(v36 + 16LL * v35);
              v38 = 16LL * v34;
              v39 = (__int64)&v30[v38 + 24];
              if ( ((unsigned __int8)*(_QWORD *)v37 & 3u) >= 2 )
              {
                v40 = ((unsigned int)*(_QWORD *)v37 >> 2) & 0x3FF;
                v35 = v40 + v35 - 1;
              }
              else
              {
                v40 = 1;
              }
              if ( v39 + (unsigned __int64)(16 * v40) > v33 )
                break;
              memmove(&v30[v38 + 24], v37, 16 * v40);
              *((_DWORD *)v30 + 1) += v40;
              v34 += v40;
              if ( (*(_DWORD *)v37 & 3) == 2 )
              {
                v37 += 8;
                v39 = (__int64)&v30[v38 + 40];
              }
              v41 = *(_QWORD *)v37;
              if ( ((unsigned __int8)*(_QWORD *)v37 & 3u) < 2 )
              {
                if ( (v41 & 3) != 0 )
                {
                  v43 = -1;
                  if ( (v41 & 0x18) == 0x10 )
                    v42 = v37[5];
                  else
                    v42 = -1;
                }
                else
                {
                  v42 = v37[5];
                  v43 = v37[4];
                }
                if ( v43 == 0xFFFF )
                {
                  v46 = 0LL;
                }
                else
                {
                  v44 = *(unsigned __int16 *)(v2 + 36);
                  if ( v43 < (unsigned __int16)v44 || v43 >= (unsigned int)(*(_DWORD *)(v2 + 32) + v44) )
                  {
                    v62 = v2;
                    while ( 1 )
                    {
                      v62 = *(_QWORD *)(v62 + 8);
                      if ( (__int64 *)v62 == &qword_140C4FC58 )
                        v62 = qword_140C4FC60;
                      if ( v62 == v2 )
                        break;
                      v63 = *(unsigned __int16 *)(v62 + 36);
                      if ( v43 >= (unsigned __int16)v63 && v43 < (unsigned int)(*(_DWORD *)(v62 + 32) + v63) )
                      {
                        v2 = v62;
                        v45 = ((v62 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v43 - v63);
                        goto LABEL_45;
                      }
                    }
                    v46 = 0LL;
                  }
                  else
                  {
                    v45 = ((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v43 - v44);
LABEL_45:
                    v46 = (_OWORD *)(v45 + 8);
                  }
                }
                if ( v42 == 0xFFFF )
                {
                  v49 = 0LL;
                }
                else
                {
                  v47 = *(unsigned __int16 *)(v2 + 36);
                  if ( v42 < (unsigned __int16)v47 || v42 >= (unsigned int)(*(_DWORD *)(v2 + 32) + v47) )
                  {
                    v64 = v2;
                    while ( 1 )
                    {
                      v64 = *(_QWORD *)(v64 + 8);
                      if ( (__int64 *)v64 == &qword_140C4FC58 )
                        v64 = qword_140C4FC60;
                      if ( v64 == v2 )
                        break;
                      v65 = *(unsigned __int16 *)(v64 + 36);
                      if ( v42 >= (unsigned __int16)v65 && v42 < (unsigned int)(*(_DWORD *)(v64 + 32) + v65) )
                      {
                        v2 = v64;
                        v48 = ((v64 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v42 - v65);
                        goto LABEL_50;
                      }
                    }
                    v49 = 0LL;
                  }
                  else
                  {
                    v48 = ((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * (v42 - v47);
LABEL_50:
                    v49 = (_OWORD *)(v48 + 8);
                  }
                }
                if ( v46 )
                {
                  v50 = v43 - v78;
                  v51 = P[v50];
                  v52 = v79;
                  if ( v51 == 0xFFFF )
                  {
                    v51 = v77;
                    v58 = v77 + 1;
                    P[v50] = v77;
                    v59 = 32LL * v77++;
                    if ( v59 + v79 + 32 > v71 )
                    {
                      v77 = v58 - 1;
                    }
                    else
                    {
                      *(_OWORD *)(v59 + v79) = *v46;
                      *(_OWORD *)(v59 + v79 + 16) = v46[1];
                      ++*((_WORD *)v30 + 6);
                    }
                  }
                  *(_WORD *)(v39 + 8) = v51;
                }
                else
                {
                  v52 = v79;
                }
                if ( v49 )
                {
                  v53 = v42 - v78;
                  v54 = P[v53];
                  if ( v54 == 0xFFFF )
                  {
                    v54 = v77;
                    P[v53] = v77;
                    v60 = 32LL * v77;
                    v61 = ++v77;
                    if ( v52 + v60 + 32 > v71 )
                    {
                      v77 = v61 - 1;
                    }
                    else
                    {
                      *(_OWORD *)(v60 + v52) = *v49;
                      *(_OWORD *)(v60 + v52 + 16) = v49[1];
                      ++*((_WORD *)v30 + 6);
                    }
                  }
                  *(_WORD *)(v39 + 10) = v54;
                }
              }
              v31 = v72;
              ++v35;
              v33 = v79;
              v36 = v73;
              if ( v35 >= *((_DWORD *)v72 + 4) )
                goto LABEL_59;
            }
            v31 = v72;
LABEL_59:
            v32 = 0;
          }
        }
        while ( v31 != (__int64 *)qword_140C4FC30 );
        v8 = P;
        v55 = LODWORD(v75[9]) - *((_DWORD *)v30 + 4) - (_DWORD)v30;
        *((_WORD *)v30 + 7) = HIWORD(v75[10]);
        *((_DWORD *)v30 + 5) = v55;
        *a1 = v74;
      }
      else
      {
        v32 = -1073741670;
      }
    }
    else
    {
      v32 = -2147483622;
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v32 = -1073741670;
  }
  PfTFreeBufferList(&unk_140C4FC18);
  PfTFreeBufferList(&unk_140C4FC40);
  return v32;
}
