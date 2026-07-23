/*
 * XREFs of MiCreateNodeLists @ 0x14079D02C
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1408DB6E0 (MiMakePartitionMemoryBlock.c)
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiDescribePageRun @ 0x1403B1088 (MiDescribePageRun.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char *__fastcall MiCreateNodeLists(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // esi
  char *v6; // rbx
  _QWORD *Pool; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  PVOID v14; // rcx
  __int64 v15; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]

  v2 = 0;
  P[1] = P;
  v17 = 0LL;
  P[0] = P;
  v5 = 0;
  v6 = 0LL;
  while ( (unsigned int)MiDescribePageRun(
                          (__int64)P,
                          *(_QWORD *)(a2 + 16LL * v5 + 16),
                          *(_QWORD *)(a2 + 16LL * v5 + 24)) )
  {
    if ( ++v5 == *(_DWORD *)a2 )
    {
      Pool = MiAllocatePool(64, 24 * v17 + 32, 0x6C4D6D4Du);
      if ( Pool )
      {
        v6 = (char *)(Pool + 2);
        Pool[1] = 1LL;
        *Pool = a1;
        *((_DWORD *)Pool + 4) = v17;
        v8 = (__int64)&Pool[2 * *((unsigned int *)Pool + 4) + 4];
        Pool[3] = *(_QWORD *)(a2 + 8);
        while ( 1 )
        {
          v9 = P[0];
          if ( P[0] == P )
            return v6;
          if ( *((PVOID **)P[0] + 1) != P )
            goto LABEL_11;
          v10 = *(_QWORD *)P[0];
          if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
            goto LABEL_11;
          P[0] = *(PVOID *)P[0];
          *(_QWORD *)(v10 + 8) = P;
          v11 = v2;
          v12 = v2++;
          v12 *= 2LL;
          *(_QWORD *)&v6[8 * v12 + 16] = v9[2];
          *(_QWORD *)&v6[8 * v12 + 24] = v9[3];
          *(_DWORD *)(v8 + 8 * v11) = *((_DWORD *)v9 + 8);
          *(_DWORD *)(v8 + 8 * v11 + 4) = *((_DWORD *)v9 + 9);
          ExFreePoolWithTag(v9, 0);
        }
      }
      break;
    }
  }
  while ( 1 )
  {
    v14 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v15 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_11:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v15 + 8) = P;
    ExFreePoolWithTag(v14, 0);
  }
  return v6;
}
