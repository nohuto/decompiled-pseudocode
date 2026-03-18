/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x140321D80
 * Callers:
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14031EE6C (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1160) )
  {
    if ( !*(_DWORD *)(a1 + 1180) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&ListHead, 0);
  }
}
