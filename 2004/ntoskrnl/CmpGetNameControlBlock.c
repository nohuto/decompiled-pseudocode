/*
 * XREFs of CmpGetNameControlBlock @ 0x1405E7DD0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405E7810 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 * Callees:
 *     NLS_UPCASE @ 0x140203390 (NLS_UPCASE.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpUnlockNameHashEntry @ 0x1405E8020 (CmpUnlockNameHashEntry.c)
 *     CmpLockNameHashEntryExclusive @ 0x1405E812C (CmpLockNameHashEntryExclusive.c)
 *     CmpHashUnicodeComponent @ 0x140641348 (CmpHashUnicodeComponent.c)
 *     CmpCompareCompressedName @ 0x1406DB400 (CmpCompareCompressedName.c)
 */

char *__fastcall CmpGetNameControlBlock(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // r11d
  char v5; // r15
  unsigned __int16 v6; // r14
  unsigned __int16 *v7; // r9
  __int64 v8; // r10
  unsigned __int16 v9; // ax
  struct _LOOKASIDE_LIST_EX *v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbp
  char *v13; // rsi
  bool v14; // cl
  unsigned int v15; // eax
  int v16; // r14d
  int v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // r14d
  char *TransientPoolWithTag; // rax
  int v21; // eax
  _BYTE *v22; // r9
  __int64 v23; // r10
  unsigned __int16 v24; // ax
  _QWORD *v25; // rcx
  int v26; // eax
  unsigned int v28; // r15d
  int v29; // r11d
  __int64 v30; // r10
  unsigned int Alignment_low; // eax
  int v32; // ecx
  unsigned int v33; // ebp
  __int64 v34; // r9
  unsigned __int16 v35; // ax
  __int64 v36; // [rsp+20h] [rbp-38h]
  __int64 v37; // [rsp+28h] [rbp-30h]
  __int64 v38; // [rsp+30h] [rbp-28h]
  char v39; // [rsp+60h] [rbp+8h]
  unsigned __int16 v40; // [rsp+68h] [rbp+10h]
  bool v41; // [rsp+70h] [rbp+18h]

  v41 = 0;
  if ( a2 )
    v3 = *a2;
  else
    v3 = CmpHashUnicodeComponent(a1);
  v4 = *a1;
  v5 = 1;
  v39 = 1;
  v6 = (unsigned __int16)v4 >> 1;
  v40 = (unsigned __int16)v4 >> 1;
  if ( v4 >> 1 )
  {
    v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v8 = v4 >> 1;
    do
    {
      v9 = *v7;
      if ( *v7 >= 0x61u )
      {
        if ( v9 > 0x7Au )
          v9 = NLS_UPCASE(v9);
        else
          v9 -= 32;
      }
      if ( v9 > 0xFFu )
      {
        v6 = v4;
        v5 = 0;
      }
      ++v7;
      --v8;
    }
    while ( v8 );
    v40 = v6;
    v39 = v5;
  }
  CmpLockNameHashEntryExclusive(v3);
  v11 = 0LL;
  v12 = *((_QWORD *)CmpNameCacheTable
        + 2
        * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027
                                                                                                * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
        + 1);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = (char *)(v12 - 8);
      if ( v3 == *(_DWORD *)v12 && (v15 = *((unsigned __int16 *)v13 + 12), v6 == (_WORD)v15) )
      {
        v16 = *(_DWORD *)v13;
        v14 = 1;
        if ( (*(_DWORD *)v13 & 1) != 0 )
        {
          v17 = CmpCompareCompressedName(a1, v13 + 26, v40, 2LL, v36, v37, v38);
          v14 = v17 == 0;
          v41 = v17 == 0;
          if ( !v17 )
            goto LABEL_20;
          v6 = v40;
        }
        else
        {
          v10 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)a1 + 1);
          v28 = v15 >> 1;
          v29 = 0;
          if ( !(v15 >> 1) )
          {
LABEL_20:
            if ( (v16 & 0xFFFFFFFE) == 0xFFFFFFFE )
              v13 = 0LL;
            else
              *(_DWORD *)v13 = v16 + 2;
LABEL_22:
            if ( !v14 )
            {
              v5 = v39;
              v6 = v40;
              break;
            }
LABEL_31:
            CmpUnlockNameHashEntry(v3);
            return v13;
          }
          v30 = v13 + 26 - (char *)v10;
          while ( 1 )
          {
            Alignment_low = LOWORD(v10->L.ListHead.Alignment);
            if ( Alignment_low >= 0x61 )
              v32 = Alignment_low <= 0x7A ? Alignment_low - 32 : NLS_UPCASE(Alignment_low);
            else
              v32 = LOWORD(v10->L.ListHead.Alignment);
            if ( v32 != *(unsigned __int16 *)((char *)&v10->L.ListHead.Alignment + v30) )
              break;
            v10 = (struct _LOOKASIDE_LIST_EX *)((char *)v10 + 2);
            if ( ++v29 >= v28 )
            {
              v14 = 1;
              goto LABEL_20;
            }
          }
          v6 = v40;
          v14 = 0;
          v41 = 0;
        }
      }
      else
      {
        v14 = v41;
      }
      v12 = *(_QWORD *)(v12 + 8);
      if ( !v12 )
        goto LABEL_22;
    }
  }
  v18 = v6;
  v19 = v6 + 26;
  TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v19, 0x624E4D43u, v10);
  v13 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v19);
    v21 = *(_DWORD *)v13;
    if ( v5 )
    {
      *(_DWORD *)v13 = v21 | 1;
      if ( v18 )
      {
        v22 = v13 + 26;
        v23 = v18;
        do
        {
          v24 = *(_WORD *)(v11 + *((_QWORD *)a1 + 1));
          if ( v24 >= 0x61u )
          {
            if ( v24 > 0x7Au )
              LOBYTE(v24) = NLS_UPCASE(v24);
            else
              LOBYTE(v24) = v24 - 32;
          }
          *v22 = v24;
          v11 += 2LL;
          ++v22;
          --v23;
        }
        while ( v23 );
      }
    }
    else
    {
      v33 = v18 >> 1;
      *(_DWORD *)v13 = v21 & 0xFFFFFFFE;
      if ( v33 )
      {
        v34 = v33;
        do
        {
          v35 = *(_WORD *)(v11 + *((_QWORD *)a1 + 1));
          if ( v35 >= 0x61u )
          {
            if ( v35 <= 0x7Au )
              v35 -= 32;
            else
              v35 = NLS_UPCASE(v35);
          }
          *(_WORD *)&v13[v11 + 26] = v35;
          v11 += 2LL;
          --v34;
        }
        while ( v34 );
      }
    }
    v25 = CmpNameCacheTable;
    v26 = *(_DWORD *)v13 & 1 | 2;
    *((_DWORD *)v13 + 2) = v3;
    *(_DWORD *)v13 = v26;
    *((_WORD *)v13 + 12) = v40;
    *((_QWORD *)v13 + 2) = v25[2
                             * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
                             + 1];
    v25[2
      * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
      + 1] = v13 + 8;
    goto LABEL_31;
  }
  CmpUnlockNameHashEntry(v3);
  return 0LL;
}
