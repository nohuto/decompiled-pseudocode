/*
 * XREFs of PfpPrefetchPrivatePages @ 0x1405D3E50
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1405D2440 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1402BCD5C (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x1402BCDA0 (MmQueryMemoryListInformation.c)
 *     PfpSourceGetPrefetchSupport @ 0x1405D4148 (PfpSourceGetPrefetchSupport.c)
 *     PfpSourceBuildVaArray @ 0x1405D4300 (PfpSourceBuildVaArray.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406400AC (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1406401C8 (PfpGetPageListCount.c)
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r15
  int v3; // r13d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r9
  HANDLE v7; // rdi
  _QWORD *v8; // r14
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  __int64 result; // rax
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  PVOID P[2]; // [rsp+50h] [rbp-18h] BYREF
  int v17; // [rsp+B8h] [rbp+50h]
  __int64 v18; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = a1;
  LODWORD(v18) = 0;
  v3 = 0;
  *(_OWORD *)P = 0LL;
  v14 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v4 = 0LL;
  v17 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_20:
    v11 = 0;
    goto LABEL_21;
  }
  while ( 1 )
  {
    *(_OWORD *)Handle = 0LL;
    if ( PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
LABEL_25:
      v7 = Handle[1];
      goto LABEL_16;
    }
    v5 = *(_QWORD *)(v1 + 56) + 40 * v4;
    if ( (int)PfpSourceBuildVaArray(v5, P) < 0 || (int)PfpSourceGetPrefetchSupport(v5, Handle) < 0 )
      goto LABEL_25;
    v7 = Handle[1];
    if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
    {
      *(_DWORD *)(v1 + 104) += LODWORD(P[0]);
      MmPrefetchVirtualMemory((ULONG_PTR)v7);
LABEL_15:
      ++*(_DWORD *)(v1 + 92);
      goto LABEL_16;
    }
    v8 = v2 + 6;
    v9 = (unsigned int)P[0];
    Handle[0] = P[1];
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)v2 + 3, 0xB0u, v6, &v18);
    if ( !v9 )
      goto LABEL_15;
    while ( !PfpCheckPrefetchAbort(v2) && (unsigned __int64)(*v8 + v8[1] + PfpGetPageListCount(v8 + 5, 0LL)) >= 0x80 )
    {
      v10 = v9;
      if ( v9 > 0x10 )
        v10 = 16;
      if ( (int)MmPrefetchVirtualMemory((ULONG_PTR)v7) >= 0 )
        *(_DWORD *)(v1 + 104) += v10;
      PfpUpdateRepurposedByPrefetch(v8, v10);
      Handle[0] = (char *)Handle[0] + 16 * v10;
      v9 -= v10;
      v2 = a1;
      if ( !v9 )
      {
        LODWORD(v4) = v17;
        goto LABEL_15;
      }
    }
    LODWORD(v4) = v17;
    v3 = 1;
LABEL_16:
    if ( v7 )
      NtClose(v7);
    if ( v3 )
      break;
    v4 = (unsigned int)(v4 + 1);
    v17 = v4;
    if ( (unsigned int)v4 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_20;
  }
  v11 = -1073741248;
LABEL_21:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  result = v11;
  *(_DWORD *)(*v2 + 120LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v14;
  return result;
}
