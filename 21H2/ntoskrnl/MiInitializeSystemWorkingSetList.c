/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x14078697C
 * Callers:
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x1407A0828 (MiInitializeSystemCache.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4F39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4F614 (MiBuildPagedPool.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiTranslateWsType @ 0x140260450 (MiTranslateWsType.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiInitializeWorkingSetList @ 0x1402A3394 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1402A35AC (MiAllowWorkingSetExpansion.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(ULONG_PTR *a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  __int64 *v13; // rbp

  if ( a3 == 1 )
  {
    v13 = (__int64 *)qword_140C4DE10;
LABEL_8:
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    MiInitializeWorkingSetList(a2, (__int64)v13, a3, a4);
    MiAllowWorkingSetExpansion(a2);
    return 1LL;
  }
  v8 = MiTranslateWsType(a3);
  if ( v8 > 2 )
  {
    *(_BYTE *)(v9 + 184) ^= (*(_BYTE *)(v9 + 184) ^ a3) & 7;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 174) = *(_WORD *)a1;
    return 1LL;
  }
  v10 = v8;
  v11 = (-(__int64)(a1[866] < 0x4000) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v12 = 5LL * v8;
  v13 = &MiState[5 * v8 + 862];
  if ( (unsigned int)MiChargeResident(a1, v11, 20LL) )
  {
    if ( a1 != &MiSystemPartition )
    {
      v13 = (__int64 *)&a1[v12 + 928];
      a4 = MiState[40 * v10 + 1275];
    }
    *(_QWORD *)(a2 + 112) = v11;
    goto LABEL_8;
  }
  return 0LL;
}
