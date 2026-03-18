/*
 * XREFs of PopSetHiberFileMcb @ 0x14077C42C
 * Callers:
 *     PopResizeHiberFile @ 0x140767784 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, SIZE_T NumberOfBytes)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  if ( P )
  {
    LODWORD(dword_140C23040) = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72626968u);
    qword_140C23038 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, P, (unsigned int)dword_140C23040);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
