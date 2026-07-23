/*
 * XREFs of IoAllowExecution @ 0x14027177C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopGetDevicePDO @ 0x1402717B8 (IopGetDevicePDO.c)
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
