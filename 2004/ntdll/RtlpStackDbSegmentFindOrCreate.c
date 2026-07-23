/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x1801190A4
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x180118E48 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x180119004 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x180119068 (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r10
  unsigned __int8 *v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // r14
  __int64 v21; // r9
  int v22; // r8d
  unsigned int v23; // ebx
  void (__fastcall *v24)(_QWORD, _QWORD); // r15
  __int64 v25; // r13
  unsigned int v26; // ecx
  __int64 v27; // rbx
  char *v28; // rax
  char i; // cl
  unsigned __int64 v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // r10
  __int64 v33; // r15
  _QWORD *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // edi
  char v38; // cl
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v42; // [rsp+60h] [rbp+40h]
  __int64 v43; // [rsp+60h] [rbp+40h]
  __int64 v44; // [rsp+60h] [rbp+40h]
  void (__fastcall *v45)(_QWORD, _QWORD); // [rsp+68h] [rbp+48h]

  v2 = *a2;
  v4 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v5 = 8 * v2;
  v7 = 314159LL;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v5 -= 8LL * (unsigned int)v2;
    do
    {
      v8 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7))))));
      v9 = v4[7];
      v4 += 8;
      v7 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  if ( v5 >= 1 && v5 <= 7 )
  {
    v10 = v5 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 != 1 )
                  goto LABEL_20;
                v7 = *v4++ + 37 * v7;
              }
              v7 = *v4++ + 37 * v7;
            }
            v7 = *v4++ + 37 * v7;
          }
          v7 = *v4++ + 37 * v7;
        }
        v7 = *v4++ + 37 * v7;
      }
      v7 = *v4++ + 37 * v7;
    }
    v7 = *v4 + 37 * v7;
  }
LABEL_20:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v17 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    v18 = v17 & v7;
    if ( v16 )
      goto LABEL_24;
    v19 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v19 )
      break;
    v42 = v17 & v7;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v42)
           + 37
           * (BYTE5(v42)
            + 37
            * (BYTE4(v42)
             + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v42)) & (unsigned int)(v19 - 1));
LABEL_24:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v16 + 8)) )
        goto LABEL_28;
    }
    v16 = 0LL;
LABEL_28:
    if ( !v16 )
      goto LABEL_36;
    if ( RtlpStackDbSegmentComparitor(v16, a2) )
      goto LABEL_32;
  }
  v16 = 0LL;
LABEL_32:
  if ( v16 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
    return v16;
  }
LABEL_36:
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 40));
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  if ( !v20 )
    return 0LL;
  *(_OWORD *)v20 = 0LL;
  *(_QWORD *)(v20 + 16) = 0LL;
  *(_DWORD *)(v20 + 16) &= 0xFF000001;
  *(_DWORD *)(v20 + 16) |= 1u;
  *(_BYTE *)(v20 + 19) = *(_BYTE *)a2;
  *(_QWORD *)(v20 + 8) = v7;
  memmove((void *)(v20 + 24), *((const void **)a2 + 1), 8LL * *a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v16 = 0LL;
  while ( 1 )
  {
    v21 = v7 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v16 )
      goto LABEL_42;
    v22 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v22 )
      break;
    v16 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v21)
           + 37
           * (BYTE5(v21)
            + 37
            * (BYTE4(v21)
             + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
          + HIBYTE(v21)) & (unsigned int)(v22 - 1));
LABEL_42:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v21 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
        goto LABEL_46;
    }
    v16 = 0LL;
LABEL_46:
    if ( !v16 )
      goto LABEL_53;
    if ( RtlpStackDbSegmentComparitor(v16, a2) )
      goto LABEL_50;
  }
  v16 = 0LL;
LABEL_50:
  if ( v16 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v16 + 16)) )
      v16 = 0LL;
    goto LABEL_76;
  }
LABEL_53:
  v23 = *(_DWORD *)(a1 + 4);
  v24 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 56);
  v25 = *(_QWORD *)(a1 + 64);
  v26 = 2 * (v23 >> 5);
  v45 = v24;
  if ( *(_DWORD *)a1 < v26 )
    goto LABEL_75;
  v27 = v26;
  if ( v26 < 4 )
    v27 = 4LL;
  v28 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v27, v25);
  if ( v28 )
  {
    if ( (((_DWORD)v27 - 1) & (unsigned int)v27) != 0 )
    {
      for ( i = -1; (_DWORD)v27; LODWORD(v27) = (unsigned int)v27 >> 1 )
        ++i;
      v27 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v27 > 0x4000000 )
      v27 = 0x4000000LL;
    v30 = (unsigned int)v27;
    if ( v28 > &v28[8 * v27] )
      v30 = 0LL;
    if ( v30 )
      memset64(v28, a1 | 1, v30);
    v31 = 0;
    v32 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v33 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v34 = *(_QWORD **)(v33 + 8LL * v31);
          if ( ((unsigned __int8)v34 & 1) != 0 )
            break;
          *(_QWORD *)(v33 + 8LL * v31) = *v34;
          v43 = v32 & v34[1];
          v35 = (37
               * (BYTE6(v43)
                + 37
                * (BYTE5(v43)
                 + 37
                 * (BYTE4(v43)
                  + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
               + HIBYTE(v43)) & (unsigned int)(v27 - 1);
          *v34 = *(_QWORD *)&v28[8 * v35];
          *(_QWORD *)&v28[8 * v35] = v34;
        }
        ++v31;
      }
      while ( v31 < *(_DWORD *)(a1 + 4) >> 5 );
      v24 = v45;
    }
    v36 = *(_QWORD *)(a1 + 8);
    v23 = *(_DWORD *)(a1 + 4) & 0x1F | (32 * v27);
    *(_QWORD *)(a1 + 8) = v28;
    *(_DWORD *)(a1 + 4) = v23;
    if ( v36 )
    {
      v24(v36, v25);
      v23 = *(_DWORD *)(a1 + 4);
    }
    goto LABEL_75;
  }
  v23 = *(_DWORD *)(a1 + 4);
  if ( v23 >= 0x20 )
  {
LABEL_75:
    v37 = v23 >> 5;
    v38 = v23 & 0x1F;
    v16 = v20;
    v44 = *(_QWORD *)(v20 + 8) & (-1LL << v38);
    v39 = *(_QWORD *)(a1 + 8);
    v40 = (37
         * (BYTE6(v44)
          + 37
          * (BYTE5(v44)
           + 37
           * (BYTE4(v44)
            + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
         + HIBYTE(v44)) & (v37 - 1);
    *(_QWORD *)v20 = *(_QWORD *)(v39 + 8 * v40);
    *(_QWORD *)(v39 + 8 * v40) = v20;
    v20 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_76;
  }
  v16 = 0LL;
LABEL_76:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  if ( v20 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v20, *(_QWORD *)(a1 + 64));
  return v16;
}
