/*
 * XREFs of KeQueryTimeIncrement @ 0x1402F0CE0
 * Callers:
 *     EtwpSendDataBlock @ 0x1406BB334 (EtwpSendDataBlock.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1406EC2C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1406ECCA0 @ 0x1406ECCA0 (sub_1406ECCA0.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     sub_14094D7E0 @ 0x14094D7E0 (sub_14094D7E0.c)
 *     sub_14096221C @ 0x14096221C (sub_14096221C.c)
 *     sub_140A5C300 @ 0x140A5C300 (sub_140A5C300.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
