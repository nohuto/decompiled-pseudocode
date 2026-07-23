/*
 * XREFs of RtlpxVirtualUnwind @ 0x180030EB0
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlpVirtualUnwind @ 0x180051B48 (RtlpVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindPrologue @ 0x1800314A0 (RtlpUnwindPrologue.c)
 *     RtlpSameFunction @ 0x180079F70 (RtlpSameFunction.c)
 *     RtlpPopUserShadowStack @ 0x18007D900 (RtlpPopUserShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x180088578 (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x180103224 (RtlpUnwindEpilogue.c)
 */

__int64 __fastcall RtlpxVirtualUnwind(
        int a1,
        __int64 a2,
        char *a3,
        unsigned int *a4,
        __int64 a5,
        _BYTE *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        __int64 a10)
{
  int v13; // r13d
  __int64 v14; // rdi
  unsigned int v15; // r15d
  int v16; // r8d
  unsigned __int8 *v17; // rax
  _BYTE *v18; // rdx
  int v19; // ebp
  _QWORD *v20; // rdx
  unsigned int v21; // esi
  __int64 v22; // rsi
  __int64 v23; // rcx
  char v24; // cl
  char *v25; // r10
  unsigned int v26; // r13d
  char v27; // al
  char v28; // cl
  char *v29; // r8
  __int64 result; // rax
  __int64 v31; // rcx
  char v32; // r8
  _BYTE *v33; // r9
  int v34; // ecx
  int v35; // eax
  char v36; // al
  __int64 v37; // rcx
  int v38; // eax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r15
  unsigned int v41; // r9d
  __int16 v42; // r8
  unsigned int v43; // r11d
  int v44; // r10d
  int v45; // r8d
  unsigned int v46; // r15d
  unsigned int v47; // r8d
  int v48; // ecx
  char v49; // al
  __int64 v50; // rdx
  char v51; // r8
  _QWORD *v52; // rdx
  __int64 v53; // rax
  _QWORD *v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  _DWORD *v58; // rax
  char v59; // r9
  _QWORD *v60; // r10
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r10
  bool v64; // zf
  unsigned int v65; // r8d
  __int64 v66; // rcx
  bool v67; // cf
  char v68; // al
  __int64 v69; // rcx
  unsigned __int64 v70; // r8
  unsigned int v71; // [rsp+88h] [rbp+10h]
  _DWORD *v72; // [rsp+98h] [rbp+20h] BYREF

  v72 = a4;
  v13 = 0;
  v14 = a2 + a4[2];
  v15 = *(_BYTE *)v14 & 7;
  if ( a6 && !*a6 )
  {
LABEL_43:
    v13 = 1;
    goto LABEL_4;
  }
  if ( v15 < 2 )
  {
    v16 = 0;
    v17 = (unsigned __int8 *)(v14 + 2);
    v18 = (_BYTE *)(a2 + a4[2]);
    if ( !*(_BYTE *)(v14 + 2) )
    {
      while ( (*v18 & 0x20) != 0 )
      {
        v63 = *v17;
        if ( (v63 & 1) != 0 )
          v63 = (unsigned int)(v63 + 1);
        if ( (unsigned int)++v16 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v18 = (_BYTE *)(a2 + *(unsigned int *)&v18[2 * v63 + 12]);
        v17 = v18 + 2;
        if ( v18[2] )
          goto LABEL_4;
      }
      goto LABEL_43;
    }
  }
LABEL_4:
  v19 = a1 & 0x7FFFFFFF;
  v20 = a8;
  v21 = (_DWORD)a3 - *a4 - a2;
  if ( (*(_BYTE *)(v14 + 3) & 0xF) != 0 )
  {
    if ( v21 >= *(unsigned __int8 *)(v14 + 1) || (*(_BYTE *)v14 & 0x20) != 0 )
    {
      v22 = a5;
      v36 = *(_BYTE *)(v14 + 3);
    }
    else
    {
      v65 = 0;
      v71 = 0;
      if ( *(_BYTE *)(v14 + 2) )
      {
        do
        {
          v66 = *(unsigned __int16 *)(v14 + 2LL * v65 + 4);
          if ( (BYTE1(v66) & 0xF) == 3 )
            break;
          v65 = RtlpUnwindOpSlots(v66, v20) + v71;
          v71 = v65;
        }
        while ( v65 < *(unsigned __int8 *)(v14 + 2) );
        v20 = a8;
      }
      v67 = v21 < *(unsigned __int8 *)(v14 + 2LL * v65 + 4);
      v22 = a5;
      if ( v67 )
        goto LABEL_6;
      v36 = *(_BYTE *)(v14 + 3);
    }
    v37 = *(_QWORD *)(v22 + 8LL * (v36 & 0xF) + 120);
    *v20 = v37;
    v23 = v37 - (*(_BYTE *)(v14 + 3) & 0xF0);
    goto LABEL_7;
  }
  v22 = a5;
LABEL_6:
  v23 = *(_QWORD *)(v22 + 152);
LABEL_7:
  *v20 = v23;
  if ( v13 )
    goto LABEL_24;
  if ( v15 >= 2 )
  {
    v41 = *(unsigned __int8 *)(v14 + 2);
    if ( !(_BYTE)v41 )
      goto LABEL_24;
    v42 = *(_WORD *)(v14 + 4);
    if ( (HIBYTE(v42) & 0xF) != 6 )
      goto LABEL_24;
    v43 = (unsigned __int8)v42;
    v44 = (_DWORD)a3 - a2;
    if ( (v42 & 0x1000) == 0 || (v45 = a4[1] - (unsigned __int8)v42, v44 - v45 >= v43) )
    {
      if ( v41 <= 1 )
        goto LABEL_24;
      v46 = 1;
      while ( 1 )
      {
        v47 = *(unsigned __int16 *)(v14 + 2LL * v46 + 4);
        if ( (BYTE1(v47) & 0xF) != 6 )
          goto LABEL_24;
        v48 = (unsigned __int8)v47 + (v47 >> 12 << 8);
        if ( !v48 )
          goto LABEL_24;
        v45 = a4[1] - v48;
        if ( v44 - v45 < v43 )
          break;
        if ( ++v46 >= v41 )
          goto LABEL_24;
      }
    }
    RtlpUnwindEpilogue(a2, (_DWORD)v20, v44 - v45, (_DWORD)a4, v22, a10);
LABEL_71:
    v31 = 0LL;
    if ( a6 )
      *a6 = 0;
LABEL_27:
    if ( a9 )
      *a9 = v31;
    return 0LL;
  }
  v24 = *a3;
  v25 = a3;
  v26 = 0;
  if ( *a3 == 72 )
  {
    v27 = a3[1];
    if ( v27 == -125 && a3[2] == -60 )
    {
      v25 = a3 + 4;
      goto LABEL_13;
    }
    if ( v27 == -127 && a3[2] == -60 )
    {
LABEL_103:
      v25 = a3 + 7;
      goto LABEL_13;
    }
  }
  if ( (v24 & 0xFE) == 0x48 && a3[1] == -115 )
  {
    v26 = a3[2] & 7 | (8 * (v24 & 1));
    if ( v26 )
    {
      if ( v26 == (*(_BYTE *)(v14 + 3) & 0xF) )
      {
        v32 = a3[2] & 0xF8;
        if ( v32 == 96 )
        {
          v25 = a3 + 4;
          goto LABEL_13;
        }
        if ( v32 != -96 )
          goto LABEL_13;
        goto LABEL_103;
      }
    }
  }
  while ( 1 )
  {
LABEL_13:
    v28 = *v25;
    if ( (*v25 & 0xF8) == 0x58 )
    {
      v53 = 1LL;
      goto LABEL_77;
    }
    v29 = v25 + 1;
    if ( (v28 & 0xF0) != 0x40 || (*v29 & 0xF8) != 0x58 )
      break;
    v53 = 2LL;
LABEL_77:
    v25 += v53;
  }
  if ( v28 == -14 )
  {
    v28 = *v29;
    ++v25;
  }
  if ( (unsigned __int8)(v28 + 62) > 1u )
  {
    if ( v28 == -13 )
    {
      v64 = v25[1] == -61;
      goto LABEL_99;
    }
    if ( ((v28 + 23) & 0xFD) != 0 )
    {
      if ( v28 != -1 )
      {
LABEL_22:
        if ( (v28 & 0xF8) == 0x48 && v25[1] == -1 && (v25[2] & 0x38) == 0x20 )
          goto LABEL_63;
LABEL_24:
        result = RtlpUnwindPrologue(a2, (_DWORD)a3, *v20, (_DWORD)a4, v22, (__int64)a6, (__int64)&v72, a10);
        if ( (int)result < 0 )
          return result;
        if ( v19
          && (v33 = (_BYTE *)(a2 + (unsigned int)v72[2]),
              (int)a3 - *v72 - (int)a2 >= (unsigned int)(unsigned __int8)v33[1])
          && ((*v33 >> 3) & (unsigned __int8)v19) != 0 )
        {
          v34 = (unsigned __int8)v33[2];
          v35 = v34 + 1;
          if ( (v34 & 1) == 0 )
            v35 = (unsigned __int8)v33[2];
          *a7 = &v33[2 * (v35 + 2) + 4];
          v31 = a2 + *(unsigned int *)&v33[2 * v35 + 4];
        }
        else
        {
          v31 = 0LL;
        }
        goto LABEL_27;
      }
      v64 = v25[1] == 37;
LABEL_99:
      if ( !v64 )
        goto LABEL_22;
    }
    else
    {
      if ( v28 == -21 )
        v38 = v25[1] + 2;
      else
        v38 = *(_DWORD *)(v25 + 1) + 5;
      v39 = *a4;
      v40 = (unsigned __int64)&v25[v38 - a2];
      if ( v40 < v39 || v40 >= a4[1] )
      {
        v58 = (_DWORD *)RtlpSameFunction(a4, a2, &v25[v38]);
        if ( v58 && v40 != *v58 )
        {
          v20 = a8;
          goto LABEL_24;
        }
      }
      else if ( v40 != v39 || (*(_BYTE *)v14 & 0x20) != 0 )
      {
        goto LABEL_24;
      }
    }
  }
LABEL_63:
  if ( (*a3 & 0xF8) == 0x48 )
  {
    v49 = a3[1];
    switch ( v49 )
    {
      case -125:
        *(_QWORD *)(v22 + 152) += a3[3];
        a3 += 4;
        break;
      case -127:
        *(_QWORD *)(v22 + 152) += (unsigned __int8)a3[3] | (unsigned __int64)(((unsigned __int8)a3[4] | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8);
        goto LABEL_106;
      case -115:
        v68 = a3[2] & 0xF8;
        if ( v68 == 96 )
        {
          v69 = *(_QWORD *)(v22 + 8LL * v26 + 120);
          *(_QWORD *)(v22 + 152) = v69;
          *(_QWORD *)(v22 + 152) = v69 + a3[3];
          a3 += 4;
        }
        else if ( v68 == -96 )
        {
          *(_QWORD *)(v22 + 152) = *(_QWORD *)(v22 + 8LL * v26 + 120)
                                 + ((unsigned __int8)a3[3] | (((unsigned __int8)a3[4] | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
LABEL_106:
          a3 += 7;
        }
        break;
    }
  }
  v50 = a10;
  while ( 2 )
  {
    v51 = *a3;
    if ( (*a3 & 0xF8) == 0x58 )
    {
      v54 = *(_QWORD **)(v22 + 152);
      if ( *(_QWORD *)v50
        && ((unsigned __int64)v54 < **(_QWORD **)v50 || (unsigned __int64)v54 > **(_QWORD **)(v50 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      v55 = v51 & 7;
      *(_QWORD *)(v22 + 8 * v55 + 120) = *v54;
      v56 = *(_QWORD *)(v50 + 16);
      if ( v56 )
        *(_QWORD *)(v56 + 8 * v55 + 128) = v54;
      v57 = 1LL;
      goto LABEL_82;
    }
    if ( (v51 & 0xF0) == 0x40 )
    {
      v59 = a3[1];
      if ( (v59 & 0xF8) == 0x58 )
      {
        v60 = *(_QWORD **)(v22 + 152);
        if ( *(_QWORD *)v50
          && ((unsigned __int64)v60 < **(_QWORD **)v50 || (unsigned __int64)v60 > **(_QWORD **)(v50 + 8) - 8LL) )
        {
          return 3221225512LL;
        }
        v61 = v59 & 7 | (8LL * (v51 & 1));
        *(_QWORD *)(v22 + 8 * v61 + 120) = *v60;
        v62 = *(_QWORD *)(v50 + 16);
        if ( v62 )
          *(_QWORD *)(v62 + 8 * v61 + 128) = v60;
        v57 = 2LL;
LABEL_82:
        *(_QWORD *)(v22 + 152) += 8LL;
        a3 += v57;
        continue;
      }
    }
    break;
  }
  if ( !*(_QWORD *)v50 || (v70 = *(_QWORD *)(v22 + 152), v70 >= **(_QWORD **)v50) && v70 <= **(_QWORD **)(v50 + 8) - 8LL )
  {
    v52 = *(_QWORD **)(v22 + 152);
    *(_QWORD *)(v22 + 248) = *v52;
    *(_QWORD *)(v22 + 152) = v52 + 1;
    RtlpPopUserShadowStack(v22);
    goto LABEL_71;
  }
  return 3221225512LL;
}
