/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x140358100
 * Callers:
 *     EtwpFreeKeyNameList @ 0x14079D75C (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x1407A46B4 (PiDmObjectManagerPopulate.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F32A0 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x1409DD648 (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x140202190 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
