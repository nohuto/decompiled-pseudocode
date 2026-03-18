/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x140328760
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x140798920 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x1407ACA8C (EtwpFreeKeyNameList.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x1409E3668 (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x14023F370 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
