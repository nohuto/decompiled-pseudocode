/*
 * XREFs of MmBuildLargePages @ 0x1408D7834
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x14092F428 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     MiGetLargestPageIndex @ 0x1402486D0 (MiGetLargestPageIndex.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1402972D0 (MiPartitionObjectToPartition.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 */

unsigned __int64 __fastcall MmBuildLargePages(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned int LargestPageIndex; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  ULONG_PTR *v7; // rax
  ULONG_PTR *v8; // rdi
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v2 = 0LL;
  if ( a2 < (unsigned __int16)KeNumberNodes )
  {
    LargestPageIndex = MiGetLargestPageIndex();
    v5 = LargestPageIndex;
    if ( LargestPageIndex < 3 )
    {
      v6 = &MiLargePageSizes[LargestPageIndex];
      do
      {
        if ( *v6 == 512 )
          break;
        ++v5;
        ++v6;
      }
      while ( v5 < 3 );
    }
    if ( v5 != 3 )
    {
      v7 = MiPartitionObjectToPartition((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, 0, &v10);
      v8 = v7;
      if ( v7 )
        v2 = MiRebuildLargePage((__int64)v7, a2, v5, (_DWORD *)0x200) >> 9;
      if ( v10 )
        PsDereferencePartition(v8[22]);
    }
  }
  return v2;
}
