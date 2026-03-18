/*
 * XREFs of MiGetLargePagesForSystemMapping @ 0x1408C5444
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiObtainSystemCharges @ 0x1402E2E8C (MiObtainSystemCharges.c)
 *     MiReturnSystemCharges @ 0x1403456C8 (MiReturnSystemCharges.c)
 *     MiThreadIdealNode @ 0x1405426FC (MiThreadIdealNode.c)
 *     MiAllocateLargeZeroPages @ 0x1405585BC (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiGetLargePagesForSystemMapping(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 PteAddress; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  int v9; // r9d
  __int64 v10; // rbp
  int v11; // r12d
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r8
  bool v16; // cf
  unsigned int v17; // r9d
  unsigned int v18; // r15d
  unsigned int *v19; // r14
  unsigned int *v20; // r13

  MiGetPteAddress(a2);
  PteAddress = MiGetPteAddress(v3);
  v7 = v6 & (PteAddress + 8);
  if ( v5 >= v7 )
    return 1LL;
  v9 = *(_DWORD *)(a1 + 64);
  v10 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  v12 = (__int64)(v7 - v5) >> 3;
  if ( (v9 & 8) == 0 && *(_QWORD *)(v10 + 7592) )
  {
    result = MiObtainSystemCharges(*(_QWORD *)(a1 + 32), v12, *(_DWORD *)(a1 + 56));
    if ( !(_DWORD)result )
      return result;
    *(_QWORD *)(a1 + 40) += v12;
    v11 = 1;
    v9 = *(_DWORD *)(a1 + 64);
  }
  v13 = *(_DWORD *)(a1 + 60);
  if ( v13 )
    v14 = v13 - 1;
  else
    v14 = MiThreadIdealNode();
  v15 = (unsigned __int16)KeNumberNodes;
  v16 = (v9 & 0x400) != 0;
  v17 = v14;
  if ( v16 )
    v15 = 1LL;
  v18 = 0;
  v19 = (unsigned int *)(qword_140C4DC98 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
  v20 = &v19[v15];
  while ( 1 )
  {
    v12 -= MiAllocateLargeZeroPages(v10, v12, 512LL, v17, 4u, a1, 1);
    if ( !v12 )
      break;
    if ( ++v19 == v20 )
      goto LABEL_17;
    v17 = *v19;
  }
  v18 = 1;
LABEL_17:
  if ( v11 )
  {
    if ( v12 )
    {
      MiReturnCommit(v10, v12);
      MiReturnSystemCharges(v10, v12, *(_DWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 40) -= v12;
    }
  }
  return v18;
}
