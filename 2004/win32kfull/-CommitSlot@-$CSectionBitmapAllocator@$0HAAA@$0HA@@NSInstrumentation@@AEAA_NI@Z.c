/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C0245068
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0244C84 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C015C000 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  void *v5; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 < 7 )
  {
    v4 = a2 / 0x24;
    if ( v4 >= v3 )
    {
      v5 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
      if ( (int)MmCommitSessionMappedView(v5, 4096LL) < 0 )
        return 0;
      memset(v5, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
    }
  }
  return 1;
}
