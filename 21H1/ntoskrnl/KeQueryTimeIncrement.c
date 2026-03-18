/*
 * XREFs of KeQueryTimeIncrement @ 0x1402443A0
 * Callers:
 *     SPCallServerHandleQueryPolicy @ 0x1405F66A0 (SPCallServerHandleQueryPolicy.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405F7600 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpSendDataBlock @ 0x14067F880 (EtwpSendDataBlock.c)
 *     PfTInitialize @ 0x1407A989C (PfTInitialize.c)
 *     sub_140948CE0 @ 0x140948CE0 (sub_140948CE0.c)
 *     sub_14095D64C @ 0x14095D64C (sub_14095D64C.c)
 *     sub_140A538E8 @ 0x140A538E8 (sub_140A538E8.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
