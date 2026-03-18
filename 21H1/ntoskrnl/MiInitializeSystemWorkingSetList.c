/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x140771FCC
 * Callers:
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x140782A74 (MiInitializeSystemCache.c)
 *     MiInitializeSystemPtes @ 0x140A4112C (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A41304 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4157C (MiBuildPagedPool.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiTranslateWsType @ 0x1402034D4 (MiTranslateWsType.c)
 *     MiInitializeWorkingSetList @ 0x1402C1FF4 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1402C220C (MiAllowWorkingSetExpansion.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
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
    v13 = (__int64 *)qword_140C4DD10;
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
