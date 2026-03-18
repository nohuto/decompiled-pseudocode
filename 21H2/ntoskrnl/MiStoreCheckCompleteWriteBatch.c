/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x14025D7D0
 * Callers:
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140258C54 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1176) )
  {
    if ( !*(_DWORD *)(a1 + 1196) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_140D31F80, 0);
  }
}
