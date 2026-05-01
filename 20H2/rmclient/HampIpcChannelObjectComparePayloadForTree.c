/*
 * XREFs of HampIpcChannelObjectComparePayloadForTree @ 0x180008390
 * Callers:
 *     HamCompleteExtendedExecution @ 0x180004150 (HamCompleteExtendedExecution.c)
 *     RmpClientReleaseResourceSet @ 0x180004990 (RmpClientReleaseResourceSet.c)
 *     RmpClientUnregisterActivityHostCallbacks @ 0x180004B90 (RmpClientUnregisterActivityHostCallbacks.c)
 *     HamCloseActivity @ 0x180006430 (HamCloseActivity.c)
 *     HampIpcChannelWnfCallback @ 0x180008060 (HampIpcChannelWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampIpcChannelObjectComparePayloadForTree(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 40) + 72LL))();
}
