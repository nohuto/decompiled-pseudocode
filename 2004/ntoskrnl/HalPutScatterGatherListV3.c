/*
 * XREFs of HalPutScatterGatherListV3 @ 0x14039FE90
 * Callers:
 *     HalPutScatterGatherList @ 0x14032EE70 (HalPutScatterGatherList.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     IoFreeMapRegisters @ 0x14039FF10 (IoFreeMapRegisters.c)
 *     HalFlushAdapterBuffersEx @ 0x14039FFA0 (HalFlushAdapterBuffersEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListV3(PDMA_ADAPTER DmaAdapter, __int64 a2, char a3)
{
  __int64 v3; // rdi
  struct _MDL *v5; // rbx
  struct _MDL *Next; // rsi

  v3 = *(_QWORD *)(a2 + 8);
  HalFlushAdapterBuffersEx(
    (_DWORD)DmaAdapter,
    *(_QWORD *)(v3 + 8),
    *(_QWORD *)(v3 + 24),
    *(_DWORD *)(v3 + 32) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 44LL) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 32LL),
    *(_DWORD *)(v3 + 40),
    a3);
  IoFreeMapRegisters(DmaAdapter, *(PVOID *)(v3 + 24), *(_DWORD *)(v3 + 44));
  v5 = *(struct _MDL **)(v3 + 16);
  if ( v5 )
  {
    do
    {
      Next = v5->Next;
      if ( (v5->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v5->MappedSystemVa, v5);
      IoFreeMdl(v5);
      v5 = Next;
    }
    while ( Next );
  }
  if ( (*(_DWORD *)v3 & 1) == 0 )
    ExFreePoolWithTag(*(PVOID *)(v3 + 160), 0);
}
