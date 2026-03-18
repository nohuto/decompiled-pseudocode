/*
 * XREFs of SmKmStoreReferenceEx @ 0x140256DEC
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402553C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140256D0C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140358900 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140359124 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140597920 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmProcessCompressionInfoRequest @ 0x140659CB0 (SmProcessCompressionInfoRequest.c)
 *     SmEtwEnableCallback @ 0x1407B7F50 (SmEtwEnableCallback.c)
 *     SmKmEtwLogStoreRundown @ 0x1407B7FA8 (SmKmEtwLogStoreRundown.c)
 * Callees:
 *     SmKmStoreReference @ 0x140256CA8 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140256E28 (SmKmStoreRefFromStoreIndex.c)
 */

unsigned __int64 __fastcall SmKmStoreReferenceEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // r9d

  if ( (unsigned int)a2 < 0x400 && (v2 = SmKmStoreRefFromStoreIndex(a1, a2)) != 0 )
    return SmKmStoreReference(v3, v4 | ((*(unsigned __int16 *)(v2 + 32) & 0x3Fu) << 10));
  else
    return 0LL;
}
