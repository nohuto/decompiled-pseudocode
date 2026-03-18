/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x14060AC10
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406D0DA8 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x140263D2C (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140263D70 (MmQueryMemoryListInformation.c)
 *     PfpReadSupportInitialize @ 0x140265AC0 (PfpReadSupportInitialize.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MmPrefetchPagesEx @ 0x140609B58 (MmPrefetchPagesEx.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14060AF5C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14060B078 (PfpGetPageListCount.c)
 *     PfpReadSupportCleanup @ 0x14060B8A4 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14060B900 (PfpFileBuildReadSupport.c)
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
  unsigned __int8 v9; // r12
  int v10; // edx
  int v11; // ecx
  bool v12; // zf
  __int64 result; // rax
  int v14; // r9d
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r13d
  unsigned int v18; // r10d
  unsigned int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // [rsp+30h] [rbp-59h]
  unsigned int v25; // [rsp+34h] [rbp-55h]
  __int64 v26; // [rsp+38h] [rbp-51h] BYREF
  __int64 v27; // [rsp+40h] [rbp-49h]
  __int64 v28; // [rsp+48h] [rbp-41h]
  __int64 v29; // [rsp+50h] [rbp-39h]
  __int64 v30; // [rsp+58h] [rbp-31h] BYREF
  __int64 v31; // [rsp+60h] [rbp-29h]
  __int128 v32; // [rsp+68h] [rbp-21h] BYREF
  __int128 v33; // [rsp+78h] [rbp-11h]
  __int128 v34; // [rsp+88h] [rbp-1h]
  __int64 v35; // [rsp+98h] [rbp+Fh]
  char v36; // [rsp+F0h] [rbp+67h]
  int v37; // [rsp+F8h] [rbp+6Fh]
  int v38; // [rsp+100h] [rbp+77h]
  unsigned int v39; // [rsp+108h] [rbp+7Fh]

  v1 = *a1;
  v35 = 0LL;
  v3 = 0;
  v32 = 0LL;
  v4 = 0;
  v33 = 0LL;
  LODWORD(v26) = 0;
  v34 = 0LL;
  v36 = 0;
  v38 = 0;
  v39 = *(unsigned __int16 *)(*a1 + 30LL);
  v31 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  while ( v4 < *(_DWORD *)(v1 + 8) )
  {
    if ( (*(_QWORD *)(((unsigned __int64)v4 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      goto LABEL_14;
    v5 = *(_QWORD *)(v1 + 32);
    v29 = 5LL * v4;
    v6 = 0;
    v25 = 0;
    v28 = v5;
    if ( (*(_DWORD *)(v5 + 40LL * v4 + 12) & 0xFFFFFFFE) == 0 )
      goto LABEL_14;
    do
    {
      v7 = (int *)(*(_QWORD *)(v5 + 8 * v29 + 16) + 48LL * v6);
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
        if ( v9 > 1u )
          goto LABEL_11;
      }
      if ( (v8 & 1) == 0 )
        goto LABEL_9;
LABEL_17:
      PfpReadSupportInitialize((__int64)&v32);
      LOBYTE(v14) = v9;
      if ( (int)PfpFileBuildReadSupport((_DWORD)a1, (_DWORD)v7, v4, v14, (__int64)&v32) >= 0 )
      {
        v16 = v32;
        v27 = v32;
        v17 = 0;
        v30 = v32;
        *(_QWORD *)v32 = v33;
        v24 = *(_DWORD *)(v16 + 8);
        v37 = 0;
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v15, &v26);
        if ( v24 )
        {
          while ( !PfpCheckPrefetchAbort(a1)
               && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v39)) >= 0x80 )
          {
            if ( v17 + 16 > v18 )
              v19 = v18 - v17;
            else
              v19 = 16;
            v20 = v27;
            *(_DWORD *)(v27 + 8) = v19;
            v21 = (_QWORD *)(v20 + 16);
            memmove((void *)(v20 + 16), (const void *)(v20 + 16 + 8LL * v17), 8LL * v19);
            *v21 |= (8 * (v39 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            LODWORD(v21) = MmPrefetchPagesEx(1u, (__int64)&v30, 0LL);
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v27 + 8));
            v22 = v37;
            if ( (int)v21 >= 0 )
            {
              v23 = *(_DWORD *)(v27 + 8);
              v22 = v23 + v37;
              v17 += v23;
              v37 += v23;
              if ( v17 < v24 )
                continue;
            }
            v4 = v38;
            goto LABEL_26;
          }
          v4 = v38;
          v22 = v37;
          v36 = 1;
        }
        else
        {
          v22 = 0;
        }
LABEL_26:
        if ( v9 )
          *(_DWORD *)(v1 + 100) += v22;
        else
          *(_DWORD *)(v1 + 96) += v22;
      }
      PfpReadSupportCleanup(a1[5], &v32);
      if ( v36 || PfpCheckPrefetchAbort(a1) )
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
      v5 = v28;
      if ( v12 )
        ++*(_DWORD *)(v1 + 84);
LABEL_13:
      v6 = v25 + 1;
      v25 = v6;
    }
    while ( v6 < *(_DWORD *)(v5 + 8 * v29 + 12) >> 1 );
LABEL_14:
    v38 = ++v4;
  }
LABEL_15:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v31;
  return result;
}
