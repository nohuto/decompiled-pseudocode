/*
 * XREFs of MiNodeAvailablePages @ 0x1405AF594
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140968AF4 (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x140264BD8 (MiNodeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeAvailablePages(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int i; // edi
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rcx

  v1 = 0LL;
  for ( i = 0; i < MmNumberOfChannels; ++i )
  {
    v1 += MiNodeFreeZeroPages(a1, i, 4096);
    v4 = 8LL;
    v5 = (__int64 *)(704LL * i + a1 + 3256);
    do
    {
      v6 = *v5;
      v5 += 11;
      v1 += v6;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
