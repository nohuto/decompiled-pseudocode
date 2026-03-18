/*
 * XREFs of PnpiUpdateResourceList @ 0x1C0098B40
 * Callers:
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C0096D6C (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C0097330 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00974BC (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C009753C (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C00980F0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009888C (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C0098AA8 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C0098BB4 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2EAC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C00B32F4 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00B33C0 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B3428 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C00B348C (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B3510 (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     PnpiGrowResourceDescriptor @ 0x1C0098224 (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // zf
  _OWORD *v8; // rdx
  __int64 result; // rax

  v2 = 0;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, (__int64)a2, 0LL), v2 = result, (int)result >= 0) )
  {
    v5 = *(_QWORD *)a1 + 8LL;
    v6 = 32LL * *(unsigned int *)(*(_QWORD *)a1 + 4LL);
    v7 = v6 + v5 == 0;
    v8 = (_OWORD *)(v6 + v5);
    *a2 = v8;
    if ( v7 )
    {
      return 3221225473LL;
    }
    else
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      ++*(_DWORD *)(*(_QWORD *)a1 + 4LL);
      return v2;
    }
  }
  return result;
}
