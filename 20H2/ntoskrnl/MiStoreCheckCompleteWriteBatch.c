/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x1403304A0
 * Callers:
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x1403BE5C0 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14032D340 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1160) )
  {
    if ( !*(_DWORD *)(a1 + 1180) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_140D23F40, 0);
  }
}
