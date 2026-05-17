/*
 * XREFs of RtlStackDbStackAdd @ 0x180118678
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x180108610 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x180118DC4 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x180118E48 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x180119004 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x180119828 (RtlpStackDbStackComparitor.c)
 */

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int8 *v3; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  signed __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  _QWORD *v17; // r12
  __int64 v18; // r9
  int v19; // r8d
  unsigned __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rbx
  char *v23; // rax
  _QWORD *v24; // r9
  char *v25; // r8
  char v26; // cl
  unsigned __int64 v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r10
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v36; // [rsp+20h] [rbp-20h]
  void (__fastcall *v37)(__int64, __int64, char *, _QWORD *); // [rsp+28h] [rbp-18h]
  unsigned int v38; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-8h]
  __int64 v40; // [rsp+80h] [rbp+40h]
  __int64 v41; // [rsp+80h] [rbp+40h]
  __int64 v42; // [rsp+80h] [rbp+40h]
  __int64 v43; // [rsp+98h] [rbp+58h]

  v3 = (unsigned __int8 *)a2;
  if ( !a1 || !a3 || !a2 )
    return 0LL;
  v38 = a3;
  v5 = 314159LL;
  v6 = a3;
  v7 = 8LL * a3;
  v39 = a2;
  if ( (unsigned __int64)v7 >= 8 )
  {
    v7 -= 8LL * (unsigned int)v6;
    do
    {
      a2 = v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v5)))));
      v8 = v3[6] + 37 * a2;
      v9 = v3[7];
      v3 += 8;
      v5 = v9 + 37 * v8;
      --v6;
    }
    while ( v6 );
  }
  if ( v7 < 1 || v7 > 7 )
    goto LABEL_23;
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
    goto LABEL_22;
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_21:
    v5 = *v3++ + 37 * v5;
LABEL_22:
    v5 = *v3 + 37 * v5;
    goto LABEL_23;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_20:
    v5 = *v3++ + 37 * v5;
    goto LABEL_21;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_19:
    v5 = *v3++ + 37 * v5;
    goto LABEL_20;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_18:
    v5 = *v3++ + 37 * v5;
    goto LABEL_19;
  }
  v7 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v7 )
  {
LABEL_17:
    v5 = *v3++ + 37 * v5;
    goto LABEL_18;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v5 = *v3++ + 37 * v5;
    goto LABEL_17;
  }
LABEL_23:
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32), a2, v7, v6);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v12 = v11 & v5;
    if ( v10 )
      goto LABEL_27;
    v13 = *(_DWORD *)(a1 + 20) >> 5;
    if ( !v13 )
      break;
    v40 = v11 & v5;
    v10 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v40)
           + 37
           * (BYTE5(v40)
            + 37
            * (BYTE4(v40)
             + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v12 + 11623883)))))))
          + HIBYTE(v40)) & (unsigned int)(v13 - 1));
LABEL_27:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v10 + 8)) )
        goto LABEL_31;
    }
    v10 = 0LL;
LABEL_31:
    if ( !v10 )
      goto LABEL_39;
    if ( (unsigned int)RtlpStackDbStackComparitor(v10, &v38) )
      goto LABEL_35;
  }
  v10 = 0LL;
LABEL_35:
  if ( !v10 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
    v43 = RtlpStackDbEntryCreate(a1, &v38, v5);
    v17 = (_QWORD *)v43;
    if ( v43 )
    {
      RtlAcquireSRWLockExclusive(a1 + 32, v14, v15, v16);
      v10 = 0LL;
      while ( 1 )
      {
        v18 = v5 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
        if ( v10 )
          goto LABEL_44;
        v19 = *(_DWORD *)(a1 + 20) >> 5;
        if ( !v19 )
          break;
        v10 = *(_QWORD *)(a1 + 24)
            + 8LL
            * ((37
              * (BYTE6(v18)
               + 37
               * (BYTE5(v18)
                + 37
                * (BYTE4(v18)
                 + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
              + HIBYTE(v18)) & (unsigned int)(v19 - 1));
LABEL_44:
        while ( 1 )
        {
          v10 = *(_QWORD *)v10;
          if ( (v10 & 1) != 0 )
            break;
          if ( v18 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v10 + 8)) )
            goto LABEL_48;
        }
        v10 = 0LL;
LABEL_48:
        if ( !v10 )
          goto LABEL_55;
        if ( (unsigned int)RtlpStackDbStackComparitor(v10, &v38) )
          goto LABEL_52;
      }
      v10 = 0LL;
LABEL_52:
      if ( v10 )
      {
        if ( !(unsigned int)RtlpStackDbRefCountIncrement(v10 + 16) )
          v10 = 0LL;
        goto LABEL_80;
      }
LABEL_55:
      v20 = a1 + 16;
      v37 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
      v21 = *(_DWORD *)(a1 + 20);
      v22 = 2 * (v21 >> 5);
      v36 = *(_QWORD *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v22 )
      {
        if ( (unsigned int)v22 < 4 )
          v22 = 4LL;
        v23 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v22);
        v24 = 0LL;
        v25 = v23;
        if ( v23 )
        {
          if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
          {
            v26 = -1;
            do
            {
              ++v26;
              LODWORD(v22) = (unsigned int)v22 >> 1;
            }
            while ( (_DWORD)v22 );
            v22 = (unsigned int)(1 << v26);
          }
          if ( (unsigned int)v22 > 0x4000000 )
            v22 = 0x4000000LL;
          v27 = (unsigned int)v22;
          if ( v23 > &v23[8 * v22] )
            v27 = 0LL;
          if ( v27 )
            memset64(v23, v20 | 1, v27);
          v28 = 0;
          v29 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v30 = *(_QWORD *)(a1 + 24);
              while ( 1 )
              {
                v24 = *(_QWORD **)(v30 + 8LL * v28);
                if ( ((unsigned __int8)v24 & 1) != 0 )
                  break;
                *(_QWORD *)(v30 + 8LL * v28) = *v24;
                v41 = v29 & v24[1];
                v31 = (37
                     * (BYTE6(v41)
                      + 37
                      * (BYTE5(v41)
                       + 37
                       * (BYTE4(v41)
                        + 37
                        * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                     + HIBYTE(v41)) & (unsigned int)(v22 - 1);
                *v24 = *(_QWORD *)&v23[8 * v31];
                *(_QWORD *)&v23[8 * v31] = v24;
              }
              ++v28;
            }
            while ( v28 < *(_DWORD *)(a1 + 20) >> 5 );
            v17 = (_QWORD *)v43;
          }
          v32 = *(_QWORD *)(a1 + 24);
          v21 = (32 * v22) | *(_DWORD *)(a1 + 20) & 0x1F;
          *(_QWORD *)(a1 + 24) = v25;
          *(_DWORD *)(a1 + 20) = v21;
          if ( v32 )
          {
            v37(v32, v36, v25, v24);
            v21 = *(_DWORD *)(a1 + 20);
          }
        }
        else
        {
          v21 = *(_DWORD *)(a1 + 20);
          if ( v21 < 0x20 )
          {
            v10 = 0LL;
LABEL_80:
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
            RtlpStackDbEntryCleanup(a1, v43);
            return (_QWORD *)v10;
          }
        }
      }
      v42 = v17[1] & (-1LL << (v21 & 0x1F));
      v33 = *(_QWORD *)(a1 + 24);
      v34 = (37
           * (BYTE6(v42)
            + 37
            * (BYTE5(v42)
             + 37
             * (BYTE4(v42)
              + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
           + HIBYTE(v42)) & ((v21 >> 5) - 1);
      *v17 = *(_QWORD *)(v33 + 8 * v34);
      *(_QWORD *)(v33 + 8 * v34) = v17;
      ++*(_DWORD *)v20;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
      return v17;
    }
    return 0LL;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v10 + 16) )
    v10 = 0LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  return (_QWORD *)v10;
}
