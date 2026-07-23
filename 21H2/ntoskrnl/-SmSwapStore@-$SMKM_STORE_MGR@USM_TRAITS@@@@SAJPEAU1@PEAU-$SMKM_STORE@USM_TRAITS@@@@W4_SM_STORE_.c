/*
 * XREFs of ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402A1084
 * Callers:
 *     SmSwapStore @ 0x1406BEBEC (SmSwapStore.c)
 * Callees:
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1402A06C8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402A1118 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmSwapStore(int a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax

  if ( (*a2 & 0x40000) == 0 )
    return 3221225659LL;
  if ( a3 > 1
    || (result = SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(a1, (__int64)a2, 1u), (int)result >= 0)
    && (a3 || (result = SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(a1, (__int64)a2, 2u), (int)result >= 0)) )
  {
    result = SMKM_STORE<SM_TRAITS>::SmStSwapStore(a2, a3);
    if ( (int)result >= 0 )
    {
      if ( a3 == 2 )
        SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(a1, (__int64)a2, 3u);
      return 0LL;
    }
  }
  return result;
}
