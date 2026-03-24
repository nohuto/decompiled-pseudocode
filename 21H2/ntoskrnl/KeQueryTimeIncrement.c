/*
 * XREFs of KeQueryTimeIncrement @ 0x14024C490
 * Callers:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405FCB60 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     EtwpSendDataBlock @ 0x1406E4054 (EtwpSendDataBlock.c)
 *     PfTInitialize @ 0x1407BED40 (PfTInitialize.c)
 *     sub_14094D610 @ 0x14094D610 (sub_14094D610.c)
 *     sub_14096203C @ 0x14096203C (sub_14096203C.c)
 *     sub_140A5B300 @ 0x140A5B300 (sub_140A5B300.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
