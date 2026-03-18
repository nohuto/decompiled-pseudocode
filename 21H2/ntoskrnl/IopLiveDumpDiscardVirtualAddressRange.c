/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x14093C268
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14093B1CC (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14093B5F8 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14093B898 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x14093BF5C (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
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
