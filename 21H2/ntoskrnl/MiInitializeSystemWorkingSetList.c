/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x1407867BC
 * Callers:
 *     MiSessionCreate @ 0x14078620C (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x1407A0628 (MiInitializeSystemCache.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4E39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4E614 (MiBuildPagedPool.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiTranslateWsType @ 0x1402724B0 (MiTranslateWsType.c)
 *     MiInitializeWorkingSetList @ 0x14035E464 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x14035E67C (MiAllowWorkingSetExpansion.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(ULONG_PTR *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  __int64 v13; // r13
  __int64 *v14; // rbp

  if ( a3 == 1 )
  {
    v14 = (__int64 *)qword_140C4DDD0;
LABEL_8:
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    MiInitializeWorkingSetList(a2, (__int64)v14, a3, a4);
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
  v11 = v8;
  v12 = (-(__int64)(a1[866] < 0x4000) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v13 = 5LL * v8;
  v14 = &MiState[5 * v8 + 862];
  if ( (unsigned int)MiChargeResident(a1, v12, 20LL, v10) )
  {
    if ( a1 != &MiSystemPartition )
    {
      v14 = (__int64 *)&a1[v13 + 928];
      a4 = (_DWORD *)MiState[40 * v11 + 1275];
    }
    *(_QWORD *)(a2 + 112) = v12;
    goto LABEL_8;
  }
  return 0LL;
}
