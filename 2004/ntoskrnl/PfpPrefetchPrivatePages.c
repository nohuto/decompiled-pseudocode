/*
 * XREFs of PfpPrefetchPrivatePages @ 0x1406D0954
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406D0DA8 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x140263D2C (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140263D70 (MmQueryMemoryListInformation.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14060AF5C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14060B078 (PfpGetPageListCount.c)
 *     MmPrefetchVirtualMemory @ 0x1406D03C8 (MmPrefetchVirtualMemory.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406D2590 (PfpSourceGetPrefetchSupport.c)
 *     PfpSourceBuildVaArray @ 0x1406D2750 (PfpSourceBuildVaArray.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // r15
  int v3; // r13d
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r9
  HANDLE v13; // rdi
  __int64 *v14; // r14
  unsigned int v15; // r12d
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  __int64 result; // rax
  unsigned int v19; // eax
  unsigned int v20; // [rsp+30h] [rbp-38h]
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]
  PVOID P[2]; // [rsp+50h] [rbp-18h] BYREF
  int v25; // [rsp+B8h] [rbp+50h]
  int v26; // [rsp+C0h] [rbp+58h]
  __int64 v27; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = a1;
  LODWORD(v27) = 0;
  v3 = 0;
  *(_OWORD *)P = 0LL;
  v20 = *(unsigned __int16 *)(*a1 + 30);
  v4 = *(_DWORD *)(*a1 + 28);
  v22 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  v6 = (8 * (v20 & 7)) | v4 & 7;
  v7 = v6 | 0x100;
  if ( (v5 & 0x10) != 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (v5 & 8) == 0 )
    v8 = v7;
  v9 = v8 | 0x800;
  if ( (v5 & 0x20) == 0 )
    v9 = v8;
  v10 = 0LL;
  v26 = v9;
  v25 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_26:
    v17 = 0;
    goto LABEL_27;
  }
  while ( 1 )
  {
    *(_OWORD *)Handle = 0LL;
    if ( PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
LABEL_31:
      v13 = Handle[1];
      goto LABEL_22;
    }
    v11 = *(_QWORD *)(v1 + 56) + 40 * v10;
    if ( (int)PfpSourceBuildVaArray(v11, P) < 0 || (int)PfpSourceGetPrefetchSupport(v11, Handle) < 0 )
      goto LABEL_31;
    v13 = Handle[1];
    if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
    {
      v19 = (unsigned int)P[0];
      *(_DWORD *)(v1 + 104) += LODWORD(P[0]);
      MmPrefetchVirtualMemory((ULONG_PTR)v13, v19, (unsigned __int64)P[1], v9);
LABEL_21:
      ++*(_DWORD *)(v1 + 92);
      goto LABEL_22;
    }
    v14 = v2 + 6;
    v15 = (unsigned int)P[0];
    Handle[0] = P[1];
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)v2 + 3, 0xB0u, v12, &v27);
    if ( !v15 )
      goto LABEL_21;
    while ( !PfpCheckPrefetchAbort(v2)
         && (unsigned __int64)(*v14 + v14[1] + PfpGetPageListCount((__int64)(v14 + 5), 0, v20)) >= 0x80 )
    {
      v16 = v15;
      if ( v15 > 0x10 )
        v16 = 16;
      if ( MmPrefetchVirtualMemory((ULONG_PTR)v13, v16, (unsigned __int64)Handle[0], v26) >= 0 )
        *(_DWORD *)(v1 + 104) += v16;
      PfpUpdateRepurposedByPrefetch(v14, v16);
      Handle[0] = (char *)Handle[0] + 16 * v16;
      v15 -= v16;
      v2 = a1;
      if ( !v15 )
      {
        LODWORD(v10) = v25;
        goto LABEL_21;
      }
    }
    LODWORD(v10) = v25;
    v3 = 1;
LABEL_22:
    if ( v13 )
      NtClose(v13);
    if ( v3 )
      break;
    v9 = v26;
    v10 = (unsigned int)(v10 + 1);
    v25 = v10;
    if ( (unsigned int)v10 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_26;
  }
  v17 = -1073741248;
LABEL_27:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  result = v17;
  *(_DWORD *)(*v2 + 120) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v22;
  return result;
}
