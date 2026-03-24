/*
 * XREFs of HalPutScatterGatherListV3 @ 0x1403A2C20
 * Callers:
 *     HalPutScatterGatherList @ 0x14029E020 (HalPutScatterGatherList.c)
 * Callees:
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     IoFreeMapRegisters @ 0x1403A2CA0 (IoFreeMapRegisters.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2D30 (HalFlushAdapterBuffersEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
