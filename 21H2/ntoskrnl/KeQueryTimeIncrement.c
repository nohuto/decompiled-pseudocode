/*
 * XREFs of KeQueryTimeIncrement @ 0x1402F1D40
 * Callers:
 *     EtwpSendDataBlock @ 0x140790CF8 (EtwpSendDataBlock.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407A11A0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     PfTInitialize @ 0x14084F9EC (PfTInitialize.c)
 *     sub_1409F9AD0 @ 0x1409F9AD0 (sub_1409F9AD0.c)
 *     sub_140A0D5E8 @ 0x140A0D5E8 (sub_140A0D5E8.c)
 *     sub_140B0E114 @ 0x140B0E114 (sub_140B0E114.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
