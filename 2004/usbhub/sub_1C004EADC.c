/*
 * XREFs of sub_1C004EADC @ 0x1C004EADC
 * Callers:
 *     sub_1C004F5D0 @ 0x1C004F5D0 (sub_1C004F5D0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0051AFC @ 0x1C0051AFC (sub_1C0051AFC.c)
 */

__int64 __fastcall sub_1C004EADC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _DWORD *v5; // r13
  char *v6; // rdi
  SIZE_T v7; // r14
  SIZE_T v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r12
  _BYTE *v11; // rbx
  __int64 v12; // rax
  __m128 *PoolWithTag; // rax
  __m128 *v14; // r15
  __m128 *v15; // rcx
  unsigned int i; // edx
  __int16 v17; // ax
  __int64 v18; // rbx
  unsigned __int8 *v19; // rsi
  __int64 v20; // rax
  __m128 *v21; // rax
  char *v22; // rcx
  unsigned int j; // edx
  __int16 v24; // ax
  _BYTE *v25; // rsi
  SIZE_T v26; // rbp
  __m128 *v27; // rax
  char *v28; // r15
  char *v29; // rcx
  unsigned int k; // edx
  __int16 v31; // ax
  __int64 v32; // r12
  unsigned __int8 *v33; // rbx
  __int64 v34; // rax
  __m128 *v35; // rax
  __m128 *v36; // r15
  __m128 *v37; // rcx
  unsigned int m; // edx
  __int16 v39; // ax
  unsigned __int8 *v40; // rsi
  SIZE_T v41; // rbp
  __int64 v42; // rax
  __m128 *v43; // rax
  char *v44; // rcx
  unsigned int n; // edx
  __int16 v46; // ax
  _BYTE *v47; // rsi
  SIZE_T v48; // rbp
  __m128 *v49; // rax
  char *v50; // rcx
  unsigned int ii; // edx
  __int16 v52; // ax
  __int64 v53; // r9
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rcx
  unsigned int v57; // r10d
  unsigned int v59; // esi
  __m128 *v60; // rax
  char *v61; // r15
  char *v62; // rcx
  unsigned __int64 v63; // r13
  unsigned int v64; // edi
  __m128 *v65; // rax
  char *v66; // rbp
  char *v67; // rcx
  unsigned int v68; // esi
  __m128 *v69; // rax
  char *v70; // r14
  char *v71; // rdx
  unsigned int v72; // edi
  __m128 *v73; // rax
  char *v74; // r15
  char *v75; // rcx
  unsigned int v76; // ebp
  __m128 *v77; // rax
  char *v78; // r14
  char *v79; // rcx
  int v80; // esi
  __m128 *v81; // rax
  char *v82; // rdi
  char *v83; // rcx
  int v84; // r8d
  unsigned __int64 v85; // [rsp+40h] [rbp-58h]
  unsigned __int64 v86; // [rsp+48h] [rbp-50h]
  unsigned __int8 v90; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  v5 = sub_1C0011220(a2);
  v6 = 0LL;
  LODWORD(v7) = 0;
  v90 = *((_BYTE *)v5 + 2440);
  v86 = *((unsigned __int8 *)v5 + 2439);
  v85 = *((unsigned __int8 *)v5 + 2438);
  sub_1C000FD80(a1, 4096, 1684228420, v85, v86);
  v8 = 26LL;
  if ( (v5[706] & 0x20) != 0 )
  {
    v9 = *((_QWORD *)v5 + 356);
    v10 = -1LL;
    if ( *(_BYTE *)(v9 + 12) && (v11 = (_BYTE *)(v9 + 4), *v11) )
    {
      if ( v11 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v11[v12] );
        v8 = 2 * v12 + 24;
      }
      PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v8, 0x42554855u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_92;
      sub_1C001D340(PoolWithTag, 0, v8);
      v15 = v14;
      *v14 = (__m128)xmmword_1C0064C50;
      v14[1].m128_u64[0] = 0x5F0050004D004FLL;
      for ( v14[1].m128_i16[4] = 110; v15->m128_i16[0] != 110; v15 = (__m128 *)((char *)v15 + 2) )
        ;
      if ( v11 )
      {
        for ( i = 0; i < 8; ++i )
        {
          v17 = (unsigned __int8)*v11;
          if ( !(_BYTE)v17 )
            break;
          v15->m128_i16[0] = v17;
          v15 = (__m128 *)((char *)v15 + 2);
          ++v11;
        }
      }
      LODWORD(v18) = 0;
      v7 = (unsigned __int16)v8 + 28LL;
      v19 = (unsigned __int8 *)(*((_QWORD *)v5 + 356) + 12LL);
      if ( *((_QWORD *)v5 + 356) != -12LL )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( v19[v20] );
        v7 = v7 + 2 * v20 - 2;
      }
      v21 = (__m128 *)ExAllocatePoolWithTag(PoolType, v7, 0x42554855u);
      v6 = (char *)v21;
      if ( v21 )
      {
        sub_1C001D340(v21, 0, v7);
        sub_1C001D080(v6, (char *)v14, (unsigned int)v8);
        v22 = &v6[(unsigned int)v8];
        *(_OWORD *)v22 = xmmword_1C0064C70;
        *((_QWORD *)v22 + 2) = 0x5F0050004D004FLL;
        *((_WORD *)v22 + 12) = 110;
        while ( *(_WORD *)v22 != 110 )
          v22 += 2;
        LODWORD(v18) = 0;
        if ( v19 )
        {
          for ( j = 0; j < 8; ++j )
          {
            v24 = *v19;
            if ( !(_BYTE)v24 )
              break;
            *(_WORD *)v22 = v24;
            v22 += 2;
            ++v19;
          }
        }
      }
      else
      {
        LODWORD(v7) = 0;
      }
      ExFreePoolWithTag(v14, 0);
      if ( !v6 )
        goto LABEL_92;
    }
    else
    {
      LODWORD(v18) = 0;
    }
    v25 = (_BYTE *)(*((_QWORD *)v5 + 356) + 4LL);
    if ( !*v25 )
      goto LABEL_96;
    v26 = (unsigned __int16)v7 + 28LL;
    if ( *((_QWORD *)v5 + 356) != -4LL )
    {
      do
        ++v10;
      while ( v25[v10] );
      v26 = v26 + 2 * v10 - 2;
    }
    v27 = (__m128 *)ExAllocatePoolWithTag(PoolType, v26, 0x42554855u);
    v28 = (char *)v27;
    if ( v27 )
    {
      sub_1C001D340(v27, 0, v26);
      sub_1C001D080(v28, v6, (unsigned int)v7);
      v29 = &v28[(unsigned int)v7];
      LODWORD(v7) = v26;
      *(_OWORD *)v29 = xmmword_1C0064C50;
      *((_QWORD *)v29 + 2) = 0x5F0050004D004FLL;
      *((_WORD *)v29 + 12) = 110;
      while ( *(_WORD *)v29 != 110 )
        v29 += 2;
      LODWORD(v18) = 0;
      if ( v25 )
      {
        for ( k = 0; k < 8; ++k )
        {
          v31 = (unsigned __int8)*v25;
          if ( !(_BYTE)v31 )
            break;
          *(_WORD *)v29 = v31;
          v29 += 2;
          ++v25;
        }
      }
      goto LABEL_89;
    }
    goto LABEL_88;
  }
  v18 = *((_QWORD *)v5 + 316);
  if ( !v18 )
    goto LABEL_97;
  v32 = -1LL;
  if ( *(_BYTE *)(v18 + 26) )
  {
    v7 = 26LL;
    v33 = (unsigned __int8 *)(v18 + 18);
    if ( v33 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( v33[v34] );
      v7 = 2 * v34 + 24;
    }
    v35 = (__m128 *)ExAllocatePoolWithTag(PoolType, v7, 0x42554855u);
    v36 = v35;
    if ( !v35 )
      goto LABEL_92;
    sub_1C001D340(v35, 0, v7);
    v37 = v36;
    *v36 = (__m128)xmmword_1C0064C50;
    v36[1].m128_u64[0] = 0x5F0050004D004FLL;
    for ( v36[1].m128_i16[4] = 110; v37->m128_i16[0] != 110; v37 = (__m128 *)((char *)v37 + 2) )
      ;
    if ( v33 )
    {
      for ( m = 0; m < 8; ++m )
      {
        v39 = *v33;
        if ( !(_BYTE)v39 )
          break;
        v37->m128_i16[0] = v39;
        v37 = (__m128 *)((char *)v37 + 2);
        ++v33;
      }
    }
    LODWORD(v18) = 0;
    v40 = (unsigned __int8 *)(*((_QWORD *)v5 + 316) + 26LL);
    v41 = (unsigned __int16)v7 + 28LL;
    if ( *((_QWORD *)v5 + 316) != -26LL )
    {
      v42 = -1LL;
      do
        ++v42;
      while ( v40[v42] );
      v41 = v41 + 2 * v42 - 2;
    }
    v43 = (__m128 *)ExAllocatePoolWithTag(PoolType, v41, 0x42554855u);
    v6 = (char *)v43;
    if ( v43 )
    {
      sub_1C001D340(v43, 0, v41);
      sub_1C001D080(v6, (char *)v36, (unsigned int)v7);
      v44 = &v6[(unsigned int)v7];
      LODWORD(v7) = v41;
      *(_OWORD *)v44 = xmmword_1C0064C70;
      *((_QWORD *)v44 + 2) = 0x5F0050004D004FLL;
      *((_WORD *)v44 + 12) = 110;
      while ( *(_WORD *)v44 != 110 )
        v44 += 2;
      LODWORD(v18) = 0;
      if ( v40 )
      {
        for ( n = 0; n < 8; ++n )
        {
          v46 = *v40;
          if ( !(_BYTE)v46 )
            break;
          *(_WORD *)v44 = v46;
          v44 += 2;
          ++v40;
        }
      }
    }
    else
    {
      LODWORD(v7) = 0;
    }
    ExFreePoolWithTag(v36, 0);
    if ( !v6 )
      goto LABEL_92;
  }
  else
  {
    LODWORD(v18) = 0;
  }
  v47 = (_BYTE *)(*((_QWORD *)v5 + 316) + 18LL);
  if ( *v47 )
  {
    v48 = (unsigned __int16)v7 + 28LL;
    if ( *((_QWORD *)v5 + 316) != -18LL )
    {
      do
        ++v32;
      while ( v47[v32] );
      v48 = v48 + 2 * v32 - 2;
    }
    v49 = (__m128 *)ExAllocatePoolWithTag(PoolType, v48, 0x42554855u);
    v28 = (char *)v49;
    if ( v49 )
    {
      sub_1C001D340(v49, 0, v48);
      sub_1C001D080(v28, v6, (unsigned int)v7);
      v50 = &v28[(unsigned int)v7];
      LODWORD(v7) = v48;
      *(_OWORD *)v50 = xmmword_1C0064C50;
      *((_QWORD *)v50 + 2) = 0x5F0050004D004FLL;
      *((_WORD *)v50 + 12) = 110;
      while ( *(_WORD *)v50 != 110 )
        v50 += 2;
      LODWORD(v18) = 0;
      if ( v47 )
      {
        for ( ii = 0; ii < 8; ++ii )
        {
          v52 = (unsigned __int8)*v47;
          if ( !(_BYTE)v52 )
            break;
          *(_WORD *)v50 = v52;
          v50 += 2;
          ++v47;
        }
      }
LABEL_89:
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      v6 = v28;
      if ( !v28 )
      {
LABEL_92:
        v53 = a2;
        v54 = 4;
LABEL_93:
        v55 = 1667839265;
LABEL_94:
        v56 = a1;
LABEL_95:
        sub_1C000FD80(v56, v54, v55, v53, -1073741670LL);
        return v57;
      }
      goto LABEL_96;
    }
LABEL_88:
    LODWORD(v7) = 0;
    goto LABEL_89;
  }
LABEL_96:
  v4 = a2;
LABEL_97:
  v59 = (unsigned __int16)v7 + 24;
  v60 = (__m128 *)ExAllocatePoolWithTag(PoolType, (unsigned __int16)v7 + 24LL, 0x42554855u);
  v61 = (char *)v60;
  if ( v60 )
  {
    sub_1C001D340(v60, 0, (unsigned __int16)v7 + 24LL);
    sub_1C001D080(v61, v6, (unsigned int)v7);
    v62 = &v61[(unsigned int)v7];
    *(_OWORD *)v62 = xmmword_1C0064C90;
    *((_QWORD *)v62 + 2) = 0x6E006E005F0073LL;
    while ( *(_WORD *)v62 != 110 )
      v62 += 2;
    v63 = v85;
    *(_WORD *)v62 = (unsigned __int8)a0123456789abcd[v85 >> 4];
    LODWORD(v18) = 0;
    *((_WORD *)v62 + 1) = (unsigned __int8)a0123456789abcd[v85 & 0xF];
  }
  else
  {
    v63 = v85;
    v59 = v18;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( !v61 )
  {
    v53 = v4;
    v54 = 4096;
    goto LABEL_93;
  }
  v64 = (unsigned __int16)v59 + 24;
  v65 = (__m128 *)ExAllocatePoolWithTag(PoolType, (unsigned __int16)v59 + 24LL, 0x42554855u);
  v66 = (char *)v65;
  if ( v65 )
  {
    sub_1C001D340(v65, 0, (unsigned __int16)v59 + 24LL);
    sub_1C001D080(v66, v61, v59);
    v67 = &v66[v59];
    *(_OWORD *)v67 = xmmword_1C0064CB0;
    *((_QWORD *)v67 + 2) = 0x6E006E005F0073LL;
    while ( *(_WORD *)v67 != 110 )
      v67 += 2;
    *(_WORD *)v67 = (unsigned __int8)a0123456789abcd[v86 >> 4];
    LODWORD(v18) = 0;
    *((_WORD *)v67 + 1) = (unsigned __int8)a0123456789abcd[v86 & 0xF];
  }
  else
  {
    v64 = v18;
  }
  ExFreePoolWithTag(v61, 0);
  if ( !v66 )
  {
    v53 = v4;
    v54 = 4096;
    v55 = 1667839009;
    goto LABEL_94;
  }
  v68 = (unsigned __int16)v64 + 18;
  v69 = (__m128 *)ExAllocatePoolWithTag(PoolType, (unsigned __int16)v64 + 18LL, 0x42554855u);
  v70 = (char *)v69;
  if ( v69 )
  {
    sub_1C001D340(v69, 0, (unsigned __int16)v64 + 18LL);
    sub_1C001D080(v70, v66, v64);
    v71 = &v70[v64];
    *(_OWORD *)v71 = xmmword_1C0064CD0;
    while ( *(_WORD *)v71 != 110 )
      v71 += 2;
    LODWORD(v18) = 0;
    *(_WORD *)v71 = (unsigned __int8)a0123456789abcd[(unsigned __int64)v90 >> 4];
    *((_WORD *)v71 + 1) = (unsigned __int8)a0123456789abcd[v90 & 0xF];
  }
  else
  {
    v68 = v18;
  }
  ExFreePoolWithTag(v66, 0);
  if ( !v70 )
  {
    v53 = v4;
    v54 = 4096;
    v55 = 1667838753;
    goto LABEL_94;
  }
  v72 = (unsigned __int16)v68 + 24;
  v73 = (__m128 *)ExAllocatePoolWithTag(PoolType, (unsigned __int16)v68 + 24LL, 0x42554855u);
  v74 = (char *)v73;
  if ( v73 )
  {
    sub_1C001D340(v73, 0, (unsigned __int16)v68 + 24LL);
    sub_1C001D080(v74, v70, v68);
    v75 = &v74[v68];
    *(_OWORD *)v75 = xmmword_1C0064C90;
    *((_QWORD *)v75 + 2) = 0x6E006E005F0073LL;
    while ( *(_WORD *)v75 != 110 )
      v75 += 2;
    *(_WORD *)v75 = (unsigned __int8)a0123456789abcd[v63 >> 4];
    LODWORD(v18) = 0;
    *((_WORD *)v75 + 1) = (unsigned __int8)a0123456789abcd[v63 & 0xF];
  }
  else
  {
    v72 = v18;
  }
  ExFreePoolWithTag(v70, 0);
  if ( !v74 )
  {
    v53 = v4;
    v54 = 4096;
    v55 = 1667838497;
    goto LABEL_94;
  }
  v76 = (unsigned __int16)v72 + 26;
  v77 = (__m128 *)ExAllocatePoolWithTag(PoolType, (unsigned __int16)v72 + 26LL, 0x42554855u);
  v78 = (char *)v77;
  if ( v77 )
  {
    sub_1C001D340(v77, 0, (unsigned __int16)v72 + 26LL);
    sub_1C001D080(v78, v74, v72);
    v79 = &v78[v72];
    *(_OWORD *)v79 = xmmword_1C0064CB0;
    *((_QWORD *)v79 + 2) = 0x6E006E005F0073LL;
    while ( *(_WORD *)v79 != 110 )
      v79 += 2;
    LODWORD(v18) = 0;
    *(_WORD *)v79 = (unsigned __int8)a0123456789abcd[v86 >> 4];
    *((_WORD *)v79 + 1) = (unsigned __int8)a0123456789abcd[v86 & 0xF];
  }
  else
  {
    v76 = v18;
  }
  ExFreePoolWithTag(v74, 0);
  if ( !v78 )
  {
    v53 = v4;
    v54 = 4096;
    v55 = 1667838241;
    goto LABEL_94;
  }
  v80 = (unsigned __int16)v76 + 28;
  v81 = (__m128 *)ExAllocatePoolWithTag(PoolType, (unsigned __int16)v76 + 28LL, 0x42554855u);
  v82 = (char *)v81;
  if ( v81 )
  {
    sub_1C001D340(v81, 0, (unsigned __int16)v76 + 28LL);
    sub_1C001D080(v82, v78, v76);
    v83 = &v82[v76];
    *(_OWORD *)v83 = xmmword_1C0064C90;
    *((_QWORD *)v83 + 2) = 0x6E006E005F0073LL;
    while ( *(_WORD *)v83 != 110 )
      v83 += 2;
    LOWORD(v18) = 0;
    *(_WORD *)v83 = (unsigned __int8)a0123456789abcd[v63 >> 4];
    *((_WORD *)v83 + 1) = (unsigned __int8)a0123456789abcd[v63 & 0xF];
  }
  else
  {
    v80 = v18;
  }
  ExFreePoolWithTag(v78, 0);
  v56 = a1;
  v53 = v4;
  v54 = 4096;
  if ( !v82 )
  {
    v55 = 1667837985;
    goto LABEL_95;
  }
  *(_QWORD *)(a3 + 8) = v82;
  *(_DWORD *)(a3 + 4) = v80;
  sub_1C000FD80(a1, 4096, 1667459428, v4, (__int64)v82);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != (_WORD)v18 )
    sub_1C0051AFC(DeviceObject->DeviceExtension, 0, v84, 19, (__int64)&unk_1C0064FB8, (__int64)v82, v80);
  return 0LL;
}
