/*
 * XREFs of MiHotAddBootDeferredDescriptors @ 0x140A562F0
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C558C (MiAddPhysicalMemoryChunks.c)
 */

void MiHotAddBootDeferredDescriptors()
{
  __int64 v0; // rdi
  __int64 v1; // rax
  ULONG_PTR v2; // rbx
  int v3; // esi
  __int64 v4; // rdi
  int v5; // r9d
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR v7; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v0 = MxDeferredBootFreeDescriptorHead;
    if ( (__int64 *)MxDeferredBootFreeDescriptorHead == &MxDeferredBootFreeDescriptorHead )
      break;
    if ( *(__int64 **)(MxDeferredBootFreeDescriptorHead + 8) != &MxDeferredBootFreeDescriptorHead
      || (v1 = *(_QWORD *)MxDeferredBootFreeDescriptorHead,
          *(_QWORD *)(*(_QWORD *)MxDeferredBootFreeDescriptorHead + 8LL) != MxDeferredBootFreeDescriptorHead) )
    {
      __fastfail(3u);
    }
    MxDeferredBootFreeDescriptorHead = *(_QWORD *)MxDeferredBootFreeDescriptorHead;
    *(_QWORD *)(v1 + 8) = &MxDeferredBootFreeDescriptorHead;
    v2 = *(_QWORD *)(v0 + 24);
    v3 = *(_DWORD *)(v0 + 16);
    v4 = *(_QWORD *)(v0 + 32);
    MiSearchNumaNodeTable(v2);
    v7 = v2 << 12;
    v6 = v4 << 12;
    v5 = 1280;
    if ( v3 != 24 )
      v5 = 1024;
    MiAddPhysicalMemoryChunks(&MiSystemPartition, &v7, &v6, v5);
  }
  MiFlags |= 0x10000000u;
}
