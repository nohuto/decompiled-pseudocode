/*
 * XREFs of HalUnmapIoSpace @ 0x1404D0230
 * Callers:
 *     <none>
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x1403B75C0 (HalpUnmapVirtualAddress.c)
 */

void __stdcall HalUnmapIoSpace(PVOID VirtualAddress, SIZE_T NumberOfBytes)
{
  HalpUnmapVirtualAddress((unsigned __int64)VirtualAddress, (NumberOfBytes + 4095) >> 12, 0LL);
}
