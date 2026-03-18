/*
 * XREFs of MiHotAddBootDescriptor @ 0x140B51B94
 * Callers:
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B26348 (MiHotAddBootDeferredDescriptorsDiscardable.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiAddPhysicalMemoryChunks @ 0x140968AF4 (MiAddPhysicalMemoryChunks.c)
 */

__int64 __fastcall MiHotAddBootDescriptor(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // esi
  __int64 v3; // rdi
  unsigned int v4; // r9d
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 40);
  MiSearchNumaNodeTable(v1);
  v7 = v1 << 12;
  v6 = v3 << 12;
  v4 = 2560;
  if ( v2 != 24 )
    v4 = 2048;
  return MiAddPhysicalMemoryChunks(&MiSystemPartition, &v7, (unsigned __int64 *)&v6, v4, 0);
}
