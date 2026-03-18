/*
 * XREFs of KeQueryTimeIncrement @ 0x140280AA0
 * Callers:
 *     EtwpSendDataBlock @ 0x140637004 (EtwpSendDataBlock.c)
 *     SPCallServerHandleQueryPolicy @ 0x14066E740 (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14066F6A0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PfTInitialize @ 0x1407AC9FC (PfTInitialize.c)
 *     sub_14094A080 @ 0x14094A080 (sub_14094A080.c)
 *     sub_14095E9EC @ 0x14095E9EC (sub_14095E9EC.c)
 *     sub_140A59654 @ 0x140A59654 (sub_140A59654.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
