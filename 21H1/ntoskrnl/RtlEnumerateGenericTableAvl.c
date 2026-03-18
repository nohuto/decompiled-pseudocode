/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x14031A5B0
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x14078A310 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x1407A1218 (EtwpFreeKeyNameList.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F1FB0 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x1409DD5E8 (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1402E5A80 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
