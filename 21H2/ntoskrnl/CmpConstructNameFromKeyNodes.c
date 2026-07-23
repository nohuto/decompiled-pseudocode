/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x1406E2970
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6C8C (CmpSetKcbAtLayerHeight.c)
 *     CmpCopyCompressedName @ 0x14065ED94 (CmpCopyCompressedName.c)
 *     CmpKeyFullNameLength @ 0x1406E2BE0 (CmpKeyFullNameLength.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, _QWORD *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  struct _PRIVILEGE_SET *v8; // r13
  unsigned int v9; // eax
  struct _LOOKASIDE_LIST_EX *v10; // r9
  __int64 v11; // rbp
  _WORD *v12; // rax
  _WORD *v13; // r15
  unsigned __int16 v14; // bp
  int *v15; // rax
  unsigned __int16 v16; // dx
  int v17; // ecx
  __int16 v18; // ax
  unsigned __int16 v19; // si
  unsigned __int16 v20; // bp
  __int64 i; // rdi
  const void *v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  _WORD *v26; // r9
  unsigned __int8 *v27; // rax
  __int64 v28; // rdx
  __int16 v29; // cx
  SIZE_T v31; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v33; // r10
  __int16 v34; // dx
  __int64 v35; // r10
  __int16 v36; // dx
  __int64 v37; // rdx
  _WORD *v38; // rcx
  __int128 v39; // [rsp+20h] [rbp-58h] BYREF
  __int128 v40; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v42; // [rsp+88h] [rbp+10h]

  v42 = a2;
  v4 = 0;
  v41 = 0LL;
  v39 = 0LL;
  WORD1(v39) = -1;
  v5 = *(__int16 *)(a1 + 2);
  LODWORD(v41) = -1;
  v40 = 0LL;
  _mm_lfence();
  if ( (int)v5 >= 2 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v5 - 16);
  else
    v6 = *(_QWORD *)(a1 + 8 * v5 + 8);
  v7 = *(__int16 *)(v6 + 66);
  v8 = 0LL;
  if ( v7 >= 2 )
  {
    v31 = 8LL * (unsigned int)(v7 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v31, 0x35364D43u, a4);
    v8 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v8 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v40 + 1);
      v4 = -1073741670;
      goto LABEL_27;
    }
    memset(TransientPoolWithTag, 0, v31);
  }
  LOWORD(v39) = v7;
  *((_QWORD *)&v40 + 1) = v8;
  v9 = CmpKeyFullNameLength(v6);
  v11 = v9;
  if ( v9 > 0xFFFF )
  {
    v4 = -1073741811;
  }
  else
  {
    v12 = CmpAllocateTransientPoolWithTag(PagedPool, v9 + 16LL, 0x624E4D43u, v10);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, v11 + 16);
      *v13 = v11;
      v13[1] = v11;
      *((_QWORD *)v13 + 1) = v13 + 8;
      v14 = (unsigned __int16)v11 >> 1;
      do
      {
        if ( (*(_DWORD *)(v6 + 184) & 0x40000) != 0 && *(_QWORD *)(v6 + 72) )
        {
          v6 = *(_QWORD *)(v6 + 72);
        }
        else
        {
          v15 = *(int **)(v6 + 80);
          v16 = *((_WORD *)v15 + 12);
          v17 = *v15;
          v18 = *(_WORD *)(v6 + 66);
          v19 = v16 >> 1;
          WORD1(v39) = v18;
          if ( (v17 & 1) != 0 )
            v19 = v16;
          v20 = v14 - v19;
          if ( v18 )
          {
            v33 = *(_QWORD *)(v6 + 192);
            v34 = v18;
            if ( v33 )
            {
              do
              {
                CmpSetKcbAtLayerHeight((__int64)&v39, v34, *(_QWORD *)(v33 + 16));
                v33 = *(_QWORD *)(v35 + 24);
                v34 = v36 - 1;
              }
              while ( v33 );
              v18 = *(_WORD *)(v6 + 66);
              v8 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v40 + 1);
            }
          }
          else
          {
            *((_QWORD *)&v39 + 1) = v6;
          }
          for ( i = 0LL; v18 >= 0; --v18 )
          {
            if ( v18 >= 2 )
              i = *((_QWORD *)v8 + v18 - 2);
            else
              i = *((_QWORD *)&v39 + v18 + 1);
            if ( *(_QWORD *)(i + 200) )
              break;
            if ( *(_DWORD *)(i + 40) != -1 )
              break;
          }
          v22 = *(const void **)(i + 200);
          if ( (unsigned __int64)v22 >= 2 )
          {
            memmove((void *)(*((_QWORD *)v13 + 1) + 2LL * v20), v22, 2LL * v19);
          }
          else
          {
            v23 = 2LL * v20;
            if ( v22 == (const void *)1 )
            {
              v37 = *(_QWORD *)(i + 80);
              v38 = (_WORD *)(v23 + *((_QWORD *)v13 + 1));
              if ( (*(_DWORD *)v37 & 1) != 0 )
                CmpCopyCompressedName(v38, 2 * v19, (unsigned __int8 *)(v37 + 26), v19);
              else
                memmove(v38, (const void *)(v37 + 26), 2LL * v19);
            }
            else
            {
              v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(i + 32) + 8LL))(
                      *(_QWORD *)(i + 32),
                      *(unsigned int *)(i + 40),
                      &v41);
              v26 = (_WORD *)(v23 + *((_QWORD *)v13 + 1));
              if ( (*(_BYTE *)(v24 + 2) & 0x20) != 0 )
              {
                if ( v19 )
                {
                  v27 = (unsigned __int8 *)(v24 + 76);
                  v28 = v19;
                  do
                  {
                    v29 = *v27++;
                    *v26++ = v29;
                    --v28;
                  }
                  while ( v28 );
                }
              }
              else
              {
                memmove((void *)(v23 + *((_QWORD *)v13 + 1)), (const void *)(v24 + 76), 2LL * v19);
              }
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64, _WORD *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(i + 32)
                                                                                                  + 16LL))(
                *(_QWORD *)(i + 32),
                &v41,
                v25,
                v26,
                v39,
                *((_QWORD *)&v39 + 1),
                v40);
            }
          }
          v14 = v20 - 1;
          *(_WORD *)(*((_QWORD *)v13 + 1) + 2LL * v14) = 92;
          v6 = *(_QWORD *)(v6 + 72);
        }
      }
      while ( v6 );
      *v42 = v13;
    }
    else
    {
      v4 = -1073741670;
    }
  }
LABEL_27:
  if ( v8 )
    CmSiFreeMemory(v8);
  return v4;
}
