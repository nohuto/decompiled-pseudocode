/*
 * XREFs of GetControllerMaxTransferSize @ 0x1C0004750
 * Callers:
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001930 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 *     FirmwareDownload @ 0x1C0010390 (FirmwareDownload.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00145EC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C0014A24 (ProtocolCommandToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ecx

  result = (unsigned int)a1[46];
  if ( (unsigned int)result > 0x200000 )
    result = 0x200000LL;
  v2 = a1[8];
  if ( v2 && (unsigned int)result >= v2 )
    result = v2;
  v3 = a1[13];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
