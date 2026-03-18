/*
 * XREFs of SmSwapStore @ 0x1406D081C
 * Callers:
 *     MiInSwapStoreWorker @ 0x1406D0750 (MiInSwapStoreWorker.c)
 *     SmStoreCompressionStart @ 0x1406D2974 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1406D2A04 (SmStoreCompressionStop.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402CCAF0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1402D0BD0 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14030FE28 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 */

__int64 __fastcall SmSwapStore(int a1)
{
  __int64 v2; // rax
  _DWORD **v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // r8d
  _KPROCESS *Process; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, (__int64 *)&Process, 0, 0);
  if ( !v2 )
    return 3221226021LL;
  v3 = (_DWORD **)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v2 + 16) & 0x3FF);
  v5 = 2;
  if ( a1 != 2 )
    v5 = a1 != 0;
  return SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(v4, *v3, v5);
}
