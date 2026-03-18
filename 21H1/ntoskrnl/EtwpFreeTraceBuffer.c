/*
 * XREFs of EtwpFreeTraceBuffer @ 0x14033FF1C
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140241960 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x14070423C (EtwpFreeTraceBufferPool.c)
 *     EtwpCancelMemoryPreservation @ 0x140943D0C (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x14094405C (EtwpPreserveLogger.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14033BB60 (MmGetPhysicalAddress.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     EtwpFreePartitionMemory @ 0x1405AAA78 (EtwpFreePartitionMemory.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeTraceBuffer(__int64 a1, char *a2)
{
  char *v2; // rbx
  ULONG_PTR v3; // rdi
  unsigned __int64 *v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v2 = a2;
  if ( *(_QWORD *)(a1 + 1336) )
  {
    EtwpFreePartitionMemory();
  }
  else if ( (*(_DWORD *)(a1 + 832) & 0x20000000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 1344);
    *(_WORD *)(v3 + 10) |= 3u;
    v4 = (unsigned __int64 *)(v3 + 48);
    *(_QWORD *)(v3 + 24) = a2;
    v5 = *(_DWORD *)(a1 + 4) >> 12;
    if ( v5 )
    {
      v6 = v5;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v2);
        v2 += 4096;
        *v4++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
        --v6;
      }
      while ( v6 );
    }
    MiFreePagesFromMdl(v3);
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
