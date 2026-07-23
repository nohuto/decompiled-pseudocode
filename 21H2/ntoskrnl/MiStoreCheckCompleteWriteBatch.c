/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x140250970
 * Callers:
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x1403BF240 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14024D350 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1160) )
  {
    if ( !*(_DWORD *)(a1 + 1180) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_140D23F40, 0);
  }
}
