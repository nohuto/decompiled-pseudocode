/*
 * XREFs of SmSwapStore @ 0x1406561BC
 * Callers:
 *     MiInSwapStoreWorker @ 0x1406560F0 (MiInSwapStoreWorker.c)
 *     SmStoreCompressionStop @ 0x1406D11CC (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406D12B0 (SmStoreCompressionStart.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140239CC0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14023DDA0 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402CDBE4 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 */

__int64 __fastcall SmSwapStore(int a1)
{
  __int64 v2; // rax
  _DWORD **v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // r8d
  _KPROCESS *Process; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, &Process, 0, 0);
  if ( !v2 )
    return 3221226021LL;
  v3 = (_DWORD **)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v2 + 16) & 0x3FF);
  v5 = 2;
  if ( a1 != 2 )
    v5 = a1 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(v4, *v3, v5);
}
