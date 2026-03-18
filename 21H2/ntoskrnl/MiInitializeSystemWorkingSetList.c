/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x1407F35F8
 * Callers:
 *     MiSessionCreate @ 0x1407F3718 (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x14082BCA0 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140B0675C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140B0681C (MiInitializeNonPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B06A84 (MiInitializeSystemPtes.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiTranslateWsType @ 0x1402691C4 (MiTranslateWsType.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiInitializeWorkingSetList @ 0x1402A0624 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x14036DA68 (MiAllowWorkingSetExpansion.c)
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
    v13 = (__int64 *)(a2 + 320);
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
    *(_BYTE *)(v9 + 184) ^= (a3 ^ *(_BYTE *)(v9 + 184)) & 7;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 174) = *(_WORD *)a1;
    return 1LL;
  }
  v10 = v8;
  v11 = (-(__int64)(a1[2090] < 0x4000) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v12 = 5LL * v8;
  v13 = &MiState[5 * v8 + 1407];
  if ( (unsigned int)MiChargeResident(a1, v11, 20LL) )
  {
    if ( a1 != &MiSystemPartition )
    {
      v13 = (__int64 *)&a1[v12 + 2152];
      a4 = MiState[40 * v10 + 2231];
    }
    *(_QWORD *)(a2 + 112) = v11;
    goto LABEL_8;
  }
  return 0LL;
}
