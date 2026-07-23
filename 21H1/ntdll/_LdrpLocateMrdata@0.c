/*
 * XREFs of _LdrpLocateMrdata@0 @ 0x4B334ED2
 * Callers:
 *     _LdrpChangeMrdataProtection@4 @ 0x4B2E1D9E (_LdrpChangeMrdataProtection@4.c)
 * Callees:
 *     _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97 (_RtlSectionTableFromVirtualAddress@12.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpMakePermanentImageCommit@8 @ 0x4B2D1B08 (_LdrpMakePermanentImageCommit@8.c)
 */

unsigned int __stdcall LdrpLocateMrdata()
{
  PIMAGE_SECTION_HEADER v0; // eax
  int v1; // edi
  unsigned int PhysicalAddress; // esi
  unsigned int result; // eax
  void *v4; // [esp+0h] [ebp-Ch]
  ULONG v5; // [esp+4h] [ebp-8h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+8h] [ebp-4h] BYREF

  RtlImageNtHeaderEx(3u, (PVOID)0x4B280000, 0LL, &OutHeaders);
  v0 = RtlSectionTableFromVirtualAddress((PIMAGE_NT_HEADERS)(&LdrSystemDllInitBlock - 315228160), v4, v5);
  if ( !v0 )
    __fastfail(5u);
  v1 = v0->VirtualAddress + 1260912640;
  PhysicalAddress = v0->Misc.PhysicalAddress;
  result = LdrpMakePermanentImageCommit(v1, PhysicalAddress);
  LdrpMrdataSize = PhysicalAddress;
  LdrpMrdataBase = v1;
  return result;
}
