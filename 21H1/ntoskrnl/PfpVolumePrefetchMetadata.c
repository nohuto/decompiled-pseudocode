/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x1405D2B24
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1405D2440 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1402BCD5C (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x1402BCDA0 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PfpPrefetchDirectoryStream @ 0x1405D2ED0 (PfpPrefetchDirectoryStream.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406400AC (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406401C8 (PfpGetPageListCount.c)
 *     PfpFileSetupObjectAttributes @ 0x140640D18 (PfpFileSetupObjectAttributes.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int *Src; // rsi
  __int64 v6; // rax
  __int64 v7; // r13
  __int16 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  _DWORD *v16; // rbx
  int v17; // ebx
  __int64 result; // rax
  int v19; // r9d
  int v20; // eax
  unsigned __int64 v21; // r14
  unsigned int v22; // r15d
  unsigned int v23; // r8d
  unsigned int v24; // r10d
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rcx
  int v30; // r10d
  int v31; // r10d
  __int64 v32; // r11
  SIZE_T v33; // [rsp+48h] [rbp-71h]
  __int64 v34; // [rsp+60h] [rbp-59h]
  __int64 v35; // [rsp+68h] [rbp-51h]
  int v36; // [rsp+70h] [rbp-49h]
  ULONG_PTR v37[2]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v38; // [rsp+88h] [rbp-31h] BYREF
  _OWORD v39[7]; // [rsp+98h] [rbp-21h] BYREF
  int v41; // [rsp+130h] [rbp+77h] BYREF
  __int64 v42; // [rsp+138h] [rbp+7Fh] BYREF

  v41 = 0;
  LODWORD(v42) = 0;
  *(_OWORD *)v37 = 0LL;
  v35 = a2;
  v38 = 0LL;
  v3 = 0LL;
  v4 = 5LL * a2;
  Src = (unsigned int *)a1[3];
  v6 = *a1;
  memset(v39, 0, 32);
  v7 = *(_QWORD *)(v6 + 32);
  v34 = 0LL;
  v36 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v8 = *(_WORD *)(v6 + 30);
  *Src = 3;
  v9 = *a1;
  v39[2] = 0LL;
  *((_QWORD *)Src + 1) = (8 * (v8 & 7u)) | (unsigned __int64)(*(_DWORD *)(v9 + 28) & 7);
  if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, a2, &v42);
  v10 = 0LL;
  if ( (*(_DWORD *)(v7 + 8 * v4 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      Src[1] = 0;
      if ( (unsigned int)v10 >= *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 )
        break;
      do
      {
        v11 = Src[1];
        v12 = 48 * v10;
        v10 = (unsigned int)(v10 + 1);
        v13 = *(_QWORD *)(v7 + 8 * v4 + 16) + v12;
        v14 = *(_QWORD *)(v13 + 8);
        if ( (*(_BYTE *)v13 & 0x10) != 0 )
          v3 = v13;
        if ( v14 )
        {
          *(_QWORD *)&Src[2 * v11 + 4] = v14;
          LODWORD(v11) = Src[1] + 1;
          Src[1] = v11;
          if ( (unsigned int)v11 >= *((_DWORD *)a1 + 8) )
            break;
        }
      }
      while ( (unsigned int)v10 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
      v34 = v3;
      if ( !(_DWORD)v11 )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) < 0x80 )
      {
LABEL_52:
        v17 = -1073741248;
        goto LABEL_15;
      }
      LODWORD(v33) = 0;
      v17 = IopXxxControlFile(*(_QWORD *)((v32 << 6) + a1[2]), (__int64)v37, 590112, Src, 8 * v31 + 16, 0LL, v33, 0);
      if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
      if ( v17 < 0 )
        goto LABEL_15;
      if ( v17 == 259 )
        KeBugCheckEx(0x191u, 0x15F4uLL, 0LL, 0LL, 0LL);
      v3 = v34;
    }
    while ( (unsigned int)v10 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
    if ( v3 )
    {
      v21 = 0LL;
      v22 = 0;
      ++*(_DWORD *)(*a1 + 88);
      if ( *(_DWORD *)(v3 + 16) )
      {
        do
        {
          Src[1] = 0;
          if ( v22 >= *(_DWORD *)(v3 + 16) )
            break;
          v23 = *((_DWORD *)a1 + 8);
          v24 = 0;
          do
          {
            v25 = *(_QWORD *)(v3 + 24);
            v26 = v21;
            v27 = *(_QWORD *)(v25 + 16LL * v22);
            v28 = v27 + *(unsigned int *)(v25 + 16LL * v22 + 8);
            if ( v27 >= v21 )
              v26 = *(_QWORD *)(v25 + 16LL * v22);
            while ( v26 < v28 )
            {
              v29 = v26 >> 10;
              v26 += 4096LL;
              *(_QWORD *)&Src[2 * Src[1] + 4] = v29;
              v24 = Src[1] + 1;
              Src[1] = v24;
              v23 = *((_DWORD *)a1 + 8);
              if ( v24 >= v23 )
              {
                v21 = v26;
                break;
              }
            }
            if ( v24 >= v23 )
              break;
            ++v22;
          }
          while ( v22 < *(_DWORD *)(v3 + 16) );
          if ( !v24 )
            break;
          if ( PfpCheckPrefetchAbort(a1)
            || (*(_DWORD *)(*a1 + 80) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) < 0x80 )
          {
            goto LABEL_52;
          }
          LODWORD(v33) = 0;
          v17 = IopXxxControlFile(*(_QWORD *)((v35 << 6) + a1[2]), (__int64)v37, 590112, Src, 8 * v30 + 16, 0LL, v33, 0);
          if ( (*(_DWORD *)(*a1 + 80) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
          if ( v17 < 0 )
            goto LABEL_15;
          if ( v17 == 259 )
            KeBugCheckEx(0x191u, 0x1659uLL, 0LL, 0LL, 0LL);
          v3 = v34;
        }
        while ( v22 < *(_DWORD *)(v34 + 16) );
      }
    }
  }
  v15 = 0LL;
  if ( (*(_DWORD *)(v7 + 8 * v4 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v16 = (_DWORD *)(*(_QWORD *)(v7 + 8 * v4 + 16) + 48 * v15);
      if ( (*v16 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((_DWORD)a1, (_DWORD)v16, a2, (unsigned int)&v38, (__int64)v39, (__int64)&v41);
        v20 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v35 << 6),
                (_DWORD)v16,
                v19,
                (__int64)v39,
                v41);
        v17 = v20;
        if ( v20 < 0 )
        {
          if ( v20 == -1073741248 )
            goto LABEL_15;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88);
        }
      }
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(v7 + 8 * v4 + 12) >> 1 );
  }
  v17 = 0;
LABEL_15:
  result = (unsigned int)v17;
  *(_DWORD *)(*a1 + 108) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v36;
  return result;
}
