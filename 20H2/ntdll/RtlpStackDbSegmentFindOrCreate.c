/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x1801195B4
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x180119358 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpStackDbRefCountIncrement @ 0x180119514 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbSegmentComparitor @ 0x180119578 (RtlpStackDbSegmentComparitor.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  unsigned int *v3; // r15
  unsigned __int8 *v4; // r8
  signed __int64 v5; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // r9
  int v19; // r8d
  unsigned int v20; // ebx
  void (__fastcall *v21)(_QWORD, _QWORD); // r15
  __int64 v22; // r13
  unsigned int v23; // ecx
  __int64 v24; // rbx
  char *v25; // rax
  char i; // cl
  unsigned __int64 v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r10
  __int64 v30; // r15
  _QWORD *v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // edi
  char v35; // cl
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v39; // [rsp+60h] [rbp+40h]
  __int64 v40; // [rsp+60h] [rbp+40h]
  __int64 v41; // [rsp+60h] [rbp+40h]
  void (__fastcall *v42)(_QWORD, _QWORD); // [rsp+68h] [rbp+48h]

  v2 = *(unsigned int *)a2;
  v3 = (unsigned int *)a2;
  v4 = *(unsigned __int8 **)(a2 + 8);
  v5 = 8 * v2;
  v7 = 314159LL;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v5 -= 8LL * (unsigned int)v2;
    do
    {
      a2 = v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v7)))));
      v8 = v4[6] + 37 * a2;
      v9 = v4[7];
      v4 += 8;
      v7 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  if ( v5 >= 1 && v5 <= 7 )
  {
    v5 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        v5 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v5 )
        {
          v5 = (unsigned int)(v5 - 1);
          if ( (_DWORD)v5 )
          {
            v5 = (unsigned int)(v5 - 1);
            if ( (_DWORD)v5 )
            {
              v5 = (unsigned int)(v5 - 1);
              if ( (_DWORD)v5 )
              {
                if ( (_DWORD)v5 != 1 )
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
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 40), a2, (unsigned __int64)v4, v5);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    v12 = v11 & v7;
    if ( v10 )
      goto LABEL_24;
    v13 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v13 )
      break;
    v39 = v11 & v7;
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v39)
           + 37
           * (BYTE5(v39)
            + 37
            * (BYTE4(v39)
             + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v12 + 11623883)))))))
          + HIBYTE(v39)) & (unsigned int)(v13 - 1));
LABEL_24:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v10 + 8)) )
        goto LABEL_28;
    }
    v10 = 0LL;
LABEL_28:
    if ( !v10 )
      goto LABEL_36;
    if ( RtlpStackDbSegmentComparitor(v10, v3) )
      goto LABEL_32;
  }
  v10 = 0LL;
LABEL_32:
  if ( v10 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v10 + 16)) )
      v10 = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
    return v10;
  }
LABEL_36:
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 40));
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * *v3 + 24, *(_QWORD *)(a1 + 64));
  if ( !v14 )
    return 0LL;
  *(_OWORD *)v14 = 0LL;
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_DWORD *)(v14 + 16) &= 0xFF000001;
  *(_DWORD *)(v14 + 16) |= 1u;
  *(_BYTE *)(v14 + 19) = *(_BYTE *)v3;
  *(_QWORD *)(v14 + 8) = v7;
  memmove((void *)(v14 + 24), *((const void **)v3 + 1), 8LL * *v3);
  RtlAcquireSRWLockExclusive(a1 + 40, v15, v16, v17);
  v10 = 0LL;
  while ( 1 )
  {
    v18 = v7 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
    if ( v10 )
      goto LABEL_42;
    v19 = *(_DWORD *)(a1 + 4) >> 5;
    if ( !v19 )
      break;
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v18)
           + 37
           * (BYTE5(v18)
            + 37
            * (BYTE4(v18)
             + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v18)) & (unsigned int)(v19 - 1));
LABEL_42:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v18 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v10 + 8)) )
        goto LABEL_46;
    }
    v10 = 0LL;
LABEL_46:
    if ( !v10 )
      goto LABEL_53;
    if ( RtlpStackDbSegmentComparitor(v10, v3) )
      goto LABEL_50;
  }
  v10 = 0LL;
LABEL_50:
  if ( v10 )
  {
    if ( !(unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int32 *)(v10 + 16)) )
      v10 = 0LL;
    goto LABEL_76;
  }
LABEL_53:
  v20 = *(_DWORD *)(a1 + 4);
  v21 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 56);
  v22 = *(_QWORD *)(a1 + 64);
  v23 = 2 * (v20 >> 5);
  v42 = v21;
  if ( *(_DWORD *)a1 < v23 )
    goto LABEL_75;
  v24 = v23;
  if ( v23 < 4 )
    v24 = 4LL;
  v25 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v24, v22);
  if ( v25 )
  {
    if ( (((_DWORD)v24 - 1) & (unsigned int)v24) != 0 )
    {
      for ( i = -1; (_DWORD)v24; LODWORD(v24) = (unsigned int)v24 >> 1 )
        ++i;
      v24 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v24 > 0x4000000 )
      v24 = 0x4000000LL;
    v27 = (unsigned int)v24;
    if ( v25 > &v25[8 * v24] )
      v27 = 0LL;
    if ( v27 )
      memset64(v25, a1 | 1, v27);
    v28 = 0;
    v29 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v30 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v31 = *(_QWORD **)(v30 + 8LL * v28);
          if ( ((unsigned __int8)v31 & 1) != 0 )
            break;
          *(_QWORD *)(v30 + 8LL * v28) = *v31;
          v40 = v29 & v31[1];
          v32 = (37
               * (BYTE6(v40)
                + 37
                * (BYTE5(v40)
                 + 37
                 * (BYTE4(v40)
                  + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
               + HIBYTE(v40)) & (unsigned int)(v24 - 1);
          *v31 = *(_QWORD *)&v25[8 * v32];
          *(_QWORD *)&v25[8 * v32] = v31;
        }
        ++v28;
      }
      while ( v28 < *(_DWORD *)(a1 + 4) >> 5 );
      v21 = v42;
    }
    v33 = *(_QWORD *)(a1 + 8);
    v20 = *(_DWORD *)(a1 + 4) & 0x1F | (32 * v24);
    *(_QWORD *)(a1 + 8) = v25;
    *(_DWORD *)(a1 + 4) = v20;
    if ( v33 )
    {
      v21(v33, v22);
      v20 = *(_DWORD *)(a1 + 4);
    }
    goto LABEL_75;
  }
  v20 = *(_DWORD *)(a1 + 4);
  if ( v20 >= 0x20 )
  {
LABEL_75:
    v34 = v20 >> 5;
    v35 = v20 & 0x1F;
    v10 = v14;
    v41 = *(_QWORD *)(v14 + 8) & (-1LL << v35);
    v36 = *(_QWORD *)(a1 + 8);
    v37 = (37
         * (BYTE6(v41)
          + 37
          * (BYTE5(v41)
           + 37
           * (BYTE4(v41)
            + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
         + HIBYTE(v41)) & (v34 - 1);
    *(_QWORD *)v14 = *(_QWORD *)(v36 + 8 * v37);
    *(_QWORD *)(v36 + 8 * v37) = v14;
    v14 = 0LL;
    ++*(_DWORD *)a1;
    goto LABEL_76;
  }
  v10 = 0LL;
LABEL_76:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
  if ( v14 )
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v14, *(_QWORD *)(a1 + 64));
  return v10;
}
