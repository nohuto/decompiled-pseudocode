/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x1403CB314
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x1403A75D8 (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140502BCC (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140896D1C (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     MmGetPhysicalMemoryRanges @ 0x1407CCF60 (MmGetPhysicalMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *IopGetPhysicalMemoryBlock()
{
  char *v0; // r14
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v2; // rbx
  LARGE_INTEGER *p_NumberOfBytes; // rdi
  unsigned int v4; // esi
  LARGE_INTEGER NumberOfBytes; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v9; // r12d
  char *PoolWithTag; // rax
  signed __int64 v11; // rcx
  unsigned __int64 QuadPart; // rax

  v0 = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v2 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
    return v0;
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  v4 = 0;
  NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
  v6 = 0LL;
  if ( NumberOfBytes.QuadPart )
  {
    do
    {
      ++v4;
      v6 += (unsigned __int64)NumberOfBytes.QuadPart >> 12;
      NumberOfBytes = v2[v4].NumberOfBytes;
    }
    while ( NumberOfBytes.QuadPart );
    if ( v4 )
    {
      v7 = 16LL * v4;
      v8 = v4;
      if ( v7 <= 0xFFFFFFFF && (int)v7 + 32 >= (unsigned int)v7 )
      {
        v9 = v7 + 32;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v7 + 32), 0x706D4443u);
        v0 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v9);
          *(_DWORD *)v0 = v4;
          *((_QWORD *)v0 + 1) = v6;
          v11 = v0 - (char *)v2;
          do
          {
            *(LONGLONG *)((char *)&p_NumberOfBytes[1].QuadPart + v11) = (unsigned __int64)p_NumberOfBytes[-1].QuadPart >> 12;
            QuadPart = p_NumberOfBytes->QuadPart;
            p_NumberOfBytes += 2;
            *(LONGLONG *)((char *)&p_NumberOfBytes->QuadPart + v11) = QuadPart >> 12;
            --v8;
          }
          while ( v8 );
          ExFreePoolWithTag(v2, 0);
          return v0;
        }
      }
    }
  }
  ExFreePoolWithTag(v2, 0);
  return 0LL;
}
