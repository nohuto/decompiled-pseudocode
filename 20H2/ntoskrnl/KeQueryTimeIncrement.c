/*
 * XREFs of KeQueryTimeIncrement @ 0x1402DD740
 * Callers:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140688200 (FsRtlCancellableWaitForMultipleObjects.c)
 *     SPCallServerHandleQueryPolicy @ 0x140688AF0 (SPCallServerHandleQueryPolicy.c)
 *     EtwpSendDataBlock @ 0x14071A53C (EtwpSendDataBlock.c)
 *     PfTInitialize @ 0x1407BA93C (PfTInitialize.c)
 *     sub_14094FE40 @ 0x14094FE40 (sub_14094FE40.c)
 *     sub_1409647BC @ 0x1409647BC (sub_1409647BC.c)
 *     sub_140A59CD4 @ 0x140A59CD4 (sub_140A59CD4.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
