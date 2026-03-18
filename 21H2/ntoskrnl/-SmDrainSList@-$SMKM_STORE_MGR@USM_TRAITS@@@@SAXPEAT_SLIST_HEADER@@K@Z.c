/*
 * XREFs of ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140258C54
 * Callers:
 *     MiStoreCheckCompleteWriteBatch @ 0x14025D7D0 (MiStoreCheckCompleteWriteBatch.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402664E8 (MiStoreUpdateMemoryConditions.c)
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405F71B0 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(union _SLIST_HEADER *a1, int a2)
{
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v3; // rcx

  if ( a2 || LOWORD(a1->Alignment) )
  {
    v2 = RtlpInterlockedFlushSList(a1);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
