/*
 * XREFs of IoAllowExecution @ 0x14028356C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetDevicePDO @ 0x1402835A8 (IopGetDevicePDO.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

bool __fastcall IoAllowExecution(__int64 a1)
{
  __int64 DevicePDO; // rax
  int v2; // ebx

  DevicePDO = IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  if ( !DevicePDO )
    return 1;
  v2 = *(_DWORD *)(DevicePDO + 48);
  HalPutDmaAdapter((PADAPTER_OBJECT)DevicePDO);
  return (v2 & 0x800000) == 0;
}
