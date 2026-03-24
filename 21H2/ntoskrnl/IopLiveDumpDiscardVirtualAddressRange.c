/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x140897F8C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140896BBC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140897254 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x140897674 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x140897C64 (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402A8700 (MmGetPhysicalAddress.c)
 *     RtlClearBitsEx @ 0x1402FE300 (RtlClearBitsEx.c)
 *     MmIsAddressValid @ 0x140536B70 (MmIsAddressValid.c)
 */

void __fastcall IopLiveDumpDiscardVirtualAddressRange(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 i; // rdi
  PHYSICAL_ADDRESS v6; // rax

  if ( a3 )
  {
    v3 = a2;
    if ( a2 )
    {
      for ( i = (a3 >> 12) + ((a3 & 0xFFF) != 0); i; --i )
      {
        if ( MmIsAddressValid(v3) )
        {
          v6.QuadPart = (unsigned __int64)MmGetPhysicalAddress(v3).QuadPart >> 12;
          if ( v6.QuadPart < *(_QWORD *)(a1 + 576) )
            RtlClearBitsEx(a1 + 576, v6.QuadPart, 1uLL);
        }
        v3 += 4096;
      }
    }
  }
}
