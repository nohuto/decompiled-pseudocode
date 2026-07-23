/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x140678220
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140674268 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x140272EDC (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140272F20 (MmQueryMemoryListInformation.c)
 *     PfpReadSupportInitialize @ 0x1402732D8 (PfpReadSupportInitialize.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PfpFileBuildReadSupport @ 0x140676ED0 (PfpFileBuildReadSupport.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14067856C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x140678688 (PfpGetPageListCount.c)
 *     PfpReadSupportCleanup @ 0x1406786A4 (PfpReadSupportCleanup.c)
 *     MmPrefetchPagesEx @ 0x140685FC4 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int *v7; // r15
  int v8; // eax
  char v9; // r12
  int v10; // edx
  int v11; // ecx
  bool v12; // zf
  __int64 result; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // r13d
  unsigned int v17; // r10d
  unsigned int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // [rsp+30h] [rbp-59h]
  unsigned int v24; // [rsp+34h] [rbp-55h]
  __int64 v25; // [rsp+38h] [rbp-51h] BYREF
  __int64 v26; // [rsp+40h] [rbp-49h]
  __int64 v27; // [rsp+48h] [rbp-41h]
  __int64 v28; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h]
  __int128 v31; // [rsp+68h] [rbp-21h] BYREF
  __int128 v32; // [rsp+78h] [rbp-11h]
  __int128 v33; // [rsp+88h] [rbp-1h]
  __int64 v34; // [rsp+98h] [rbp+Fh]
  char v35; // [rsp+F0h] [rbp+67h]
  int v36; // [rsp+F8h] [rbp+6Fh]
  unsigned int v37; // [rsp+100h] [rbp+77h]
  __int16 v38; // [rsp+108h] [rbp+7Fh]

  v1 = *a1;
  v34 = 0LL;
  v3 = 0;
  v31 = 0LL;
  v4 = 0;
  v32 = 0LL;
  LODWORD(v25) = 0;
  v33 = 0LL;
  v35 = 0;
  v37 = 0;
  v38 = *(_WORD *)(*a1 + 30LL);
  v30 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  while ( v4 < *(_DWORD *)(v1 + 8) )
  {
    if ( (*(_QWORD *)(((unsigned __int64)v4 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      goto LABEL_14;
    v5 = *(_QWORD *)(v1 + 32);
    v28 = 5LL * v4;
    v6 = 0;
    v24 = 0;
    v27 = v5;
    if ( (*(_DWORD *)(v5 + 40LL * v4 + 12) & 0xFFFFFFFE) == 0 )
      goto LABEL_14;
    do
    {
      v7 = (int *)(*(_QWORD *)(v5 + 8 * v28 + 16) + 48LL * v6);
      v8 = *v7;
      if ( (*v7 & 2) != 0 || !v7[4] )
        goto LABEL_13;
      v9 = 0;
      while ( !v9 )
      {
        if ( (v8 & 1) == 0 )
          goto LABEL_17;
LABEL_9:
        LOBYTE(v10) = v8;
LABEL_10:
        ++v9;
        LOBYTE(v11) = v10;
        if ( (unsigned __int8)v9 > 1u )
          goto LABEL_11;
      }
      if ( (v8 & 1) == 0 )
        goto LABEL_9;
LABEL_17:
      PfpReadSupportInitialize((__int64)&v31);
      if ( (int)PfpFileBuildReadSupport(a1, v7, v4, v9, (__int64)&v31) >= 0 )
      {
        v15 = v31;
        v26 = v31;
        v16 = 0;
        v29 = v31;
        *(_QWORD *)v31 = v32;
        v23 = *(_DWORD *)(v15 + 8);
        v36 = 0;
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v14, &v25);
        if ( v23 )
        {
          while ( !PfpCheckPrefetchAbort(a1)
               && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) >= 0x80 )
          {
            if ( v16 + 16 > v17 )
              v18 = v17 - v16;
            else
              v18 = 16;
            v19 = v26;
            *(_DWORD *)(v26 + 8) = v18;
            v20 = (_QWORD *)(v19 + 16);
            memmove((void *)(v19 + 16), (const void *)(v19 + 16 + 8LL * v16), 8LL * v18);
            *v20 |= (8 * (v38 & 7u)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            LODWORD(v20) = MmPrefetchPagesEx(1LL, &v29, 0LL);
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v26 + 8));
            v21 = v36;
            if ( (int)v20 >= 0 )
            {
              v22 = *(_DWORD *)(v26 + 8);
              v21 = v22 + v36;
              v16 += v22;
              v36 += v22;
              if ( v16 < v23 )
                continue;
            }
            v4 = v37;
            goto LABEL_26;
          }
          v4 = v37;
          v21 = v36;
          v35 = 1;
        }
        else
        {
          v21 = 0;
        }
LABEL_26:
        if ( v9 )
          *(_DWORD *)(v1 + 100) += v21;
        else
          *(_DWORD *)(v1 + 96) += v21;
      }
      PfpReadSupportCleanup(a1[5], &v31);
      if ( v35 || PfpCheckPrefetchAbort(a1) )
      {
        v3 = -1073741248;
        goto LABEL_15;
      }
      v8 = *v7;
      v10 = *v7;
      v11 = *v7;
      if ( (*v7 & 8) == 0 )
        goto LABEL_10;
LABEL_11:
      v12 = (v11 & 8) == 0;
      v5 = v27;
      if ( v12 )
        ++*(_DWORD *)(v1 + 84);
LABEL_13:
      v6 = v24 + 1;
      v24 = v6;
    }
    while ( v6 < *(_DWORD *)(v5 + 8 * v28 + 12) >> 1 );
LABEL_14:
    v37 = ++v4;
  }
LABEL_15:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v30;
  return result;
}
