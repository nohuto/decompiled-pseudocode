/*
 * XREFs of PfpPrefetchPrivatePages @ 0x1406BE720
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140674268 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x140272EDC (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140272F20 (MmQueryMemoryListInformation.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14067856C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x140678688 (PfpGetPageListCount.c)
 *     PfpSourceBuildVaArray @ 0x1406BE494 (PfpSourceBuildVaArray.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406BE55C (PfpSourceGetPrefetchSupport.c)
 *     MmPrefetchVirtualMemory @ 0x1406BEF48 (MmPrefetchVirtualMemory.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // r15
  int v3; // r13d
  __int64 v4; // rsi
  int *v5; // rdi
  __int64 v6; // r9
  HANDLE v7; // rdi
  __int64 *v8; // r14
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  __int64 result; // rax
  unsigned int v13; // [rsp+30h] [rbp-38h]
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  PVOID P[2]; // [rsp+50h] [rbp-18h] BYREF
  int v18; // [rsp+B8h] [rbp+50h]
  __int64 v19; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = a1;
  LODWORD(v19) = 0;
  v3 = 0;
  *(_OWORD *)P = 0LL;
  v13 = *(unsigned __int16 *)(*a1 + 30);
  v15 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v4 = 0LL;
  v18 = 0;
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
    v5 = (int *)(*(_QWORD *)(v1 + 56) + 40 * v4);
    if ( (int)PfpSourceBuildVaArray((__int64)v5, (__int64)P) < 0
      || (int)PfpSourceGetPrefetchSupport(v5, (__int64)Handle) < 0 )
    {
      goto LABEL_25;
    }
    v7 = Handle[1];
    if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
    {
      *(_DWORD *)(v1 + 104) += LODWORD(P[0]);
      MmPrefetchVirtualMemory(v7);
LABEL_15:
      ++*(_DWORD *)(v1 + 92);
      goto LABEL_16;
    }
    v8 = v2 + 6;
    v9 = (unsigned int)P[0];
    Handle[0] = P[1];
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)v2 + 3, 0xB0u, v6, &v19);
    if ( !v9 )
      goto LABEL_15;
    while ( !PfpCheckPrefetchAbort(v2)
         && (unsigned __int64)(*v8 + v8[1] + PfpGetPageListCount((__int64)(v8 + 5), 0, v13)) >= 0x80 )
    {
      v10 = v9;
      if ( v9 > 0x10 )
        v10 = 16;
      if ( (int)MmPrefetchVirtualMemory(v7) >= 0 )
        *(_DWORD *)(v1 + 104) += v10;
      PfpUpdateRepurposedByPrefetch(v8, v10);
      Handle[0] = (char *)Handle[0] + 16 * v10;
      v9 -= v10;
      v2 = a1;
      if ( !v9 )
      {
        LODWORD(v4) = v18;
        goto LABEL_15;
      }
    }
    LODWORD(v4) = v18;
    v3 = 1;
LABEL_16:
    if ( v7 )
      NtClose(v7);
    if ( v3 )
      break;
    v4 = (unsigned int)(v4 + 1);
    v18 = v4;
    if ( (unsigned int)v4 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_20;
  }
  v11 = -1073741248;
LABEL_21:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  result = v11;
  *(_DWORD *)(*v2 + 120) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v15;
  return result;
}
