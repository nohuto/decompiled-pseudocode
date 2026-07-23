/*
 * XREFs of IoMapTransfer @ 0x140388DC0
 * Callers:
 *     HalpAllocateAdapterCallbackV2 @ 0x1404CCD90 (HalpAllocateAdapterCallbackV2.c)
 * Callees:
 *     IoMapTransferInternal @ 0x140388E3C (IoMapTransferInternal.c)
 *     HalpIommuDomainMapLogicalRange @ 0x1404C9514 (HalpIommuDomainMapLogicalRange.c)
 */

PHYSICAL_ADDRESS __stdcall IoMapTransfer(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        PULONG Length,
        BOOLEAN WriteToDevice)
{
  bool v6; // zf
  PHYSICAL_ADDRESS result; // rax
  int v10; // ebp
  ULONG v11; // eax

  v6 = *(_DWORD *)&DmaAdapter[32].Version == 2;
  *((_BYTE *)&DmaAdapter[32].Size + 2) = 1;
  if ( v6 )
  {
    v11 = *(_DWORD *)(&DmaAdapter[15].Size + 1);
    if ( *Length > v11 )
      *Length = v11;
  }
  result.QuadPart = IoMapTransferInternal(
                      (_DWORD)DmaAdapter,
                      (_DWORD)Mdl,
                      (_DWORD)MapRegisterBase,
                      (_DWORD)CurrentVa,
                      (__int64)Length,
                      WriteToDevice,
                      0);
  v10 = result.LowPart & 0xFFF;
  if ( *(_DWORD *)&DmaAdapter[32].Version == 2 )
  {
    if ( !*((_BYTE *)MapRegisterBase + 64) )
    {
      HalpIommuDomainMapLogicalRange(
        DmaAdapter[31].DmaOperations->FlushAdapterBuffers,
        3,
        result.LowPart,
        v10 + *Length,
        *((_QWORD *)MapRegisterBase + 5));
      *((_QWORD *)MapRegisterBase + 4) += v10 + *Length;
    }
    result = *(PHYSICAL_ADDRESS *)((char *)MapRegisterBase + 40);
    *((_QWORD *)MapRegisterBase + 5) = result.QuadPart + *Length;
  }
  return result;
}
