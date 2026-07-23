/*
 * XREFs of LdrpLocateMrdata @ 0x1800D59E4
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x1800134FC (LdrpChangeMrdataProtection.c)
 * Callees:
 *     LdrpMakePermanentImageCommit @ 0x18000F280 (LdrpMakePermanentImageCommit.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180033AA0 (RtlSectionTableFromVirtualAddress.c)
 */

unsigned __int64 LdrpLocateMrdata()
{
  PVOID v0; // rdx
  PIMAGE_SECTION_HEADER v1; // rax
  __int64 v2; // rdi
  unsigned __int64 PhysicalAddress; // rbx
  unsigned __int64 result; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3u, (PVOID)0x180000000LL, 0LL, &OutHeaders);
  v1 = RtlSectionTableFromVirtualAddress(OutHeaders, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  v2 = 0x180000000LL + v1->VirtualAddress;
  PhysicalAddress = v1->Misc.PhysicalAddress;
  result = LdrpMakePermanentImageCommit(v2, PhysicalAddress);
  LdrpMrdataSize = PhysicalAddress;
  LdrpMrdataBase = v2;
  return result;
}
