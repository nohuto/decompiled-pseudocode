/*
 * XREFs of IoAllowExecution @ 0x1402774CC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IopGetDevicePDO @ 0x140277508 (IopGetDevicePDO.c)
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
