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
  __int64 v0; // rdx
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, 0x180000000uLL, 0LL, &v5);
  v1 = RtlSectionTableFromVirtualAddress(v5, v0, (unsigned int)&LdrSystemDllInitBlock - 0x80000000);
  if ( !v1 )
    __fastfail(5u);
  v2 = 0x180000000LL + *(unsigned int *)(v1 + 12);
  v3 = *(unsigned int *)(v1 + 8);
  result = LdrpMakePermanentImageCommit(v2, v3);
  LdrpMrdataSize = v3;
  LdrpMrdataBase = v2;
  return result;
}
