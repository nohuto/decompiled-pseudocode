/*
 * XREFs of GetFirmwareGranularity @ 0x1C0004784
 * Callers:
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001930 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareDownload @ 0x1C0010398 (FirmwareDownload.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00145EC (NVMeWriteBufferFirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1608) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
