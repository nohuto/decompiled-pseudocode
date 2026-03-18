/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x14035F730
 * Callers:
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x1403BC140 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14035C97C (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1160) )
  {
    if ( !*(_DWORD *)(a1 + 1180) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_140D23F40, 0);
  }
}
