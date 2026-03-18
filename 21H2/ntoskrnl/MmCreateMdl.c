/*
 * XREFs of MmCreateMdl @ 0x1402411C0
 * Callers:
 *     MiPfAllocateMdls @ 0x1406F4A80 (MiPfAllocateMdls.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
 *     MiLockRetpolineStubs @ 0x140B52090 (MiLockRetpolineStubs.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 */

PMDL __stdcall MmCreateMdl(PMDL MemoryDescriptorList, PVOID Base, SIZE_T Length)
{
  PMDL Pool; // r9
  __int16 v6; // di
  PMDL result; // rax

  Pool = MemoryDescriptorList;
  if ( Length >= 0x100000000LL )
    return 0LL;
  v6 = (__int16)Base;
  if ( !MemoryDescriptorList )
  {
    Pool = (PMDL)MiAllocatePool(64LL, 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48, 1818520909LL);
    if ( !Pool )
      return 0LL;
  }
  Pool->Next = 0LL;
  Pool->MdlFlags = 0;
  Pool->ByteCount = Length;
  Pool->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
  result = Pool;
  Pool->Size = 8 * ((((v6 & 0xFFF) + Length + 4095) >> 12) + 6);
  Pool->ByteOffset = v6 & 0xFFF;
  return result;
}
