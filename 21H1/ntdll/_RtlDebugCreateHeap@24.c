/*
 * XREFs of _RtlDebugCreateHeap@24 @ 0x4B35F37B
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 */

void *__fastcall RtlDebugCreateHeap(int a1, void *a2, SIZE_T ReserveSize, SIZE_T CommitSize)
{
  int v4; // eax
  PVOID Heap; // eax
  void *v8; // esi
  ULONG_PTR *v9; // [esp+0h] [ebp-30h]
  void *v10; // [esp+4h] [ebp-2Ch]
  _DWORD MemoryInformation[7]; // [esp+Ch] [ebp-24h] BYREF
  int v12; // [esp+28h] [ebp-8h]
  NTSTATUS VirtualMemory; // [esp+2Ch] [ebp-4h]

  v4 = a1;
  v12 = a1;
  if ( (unsigned int)ReserveSize <= 8 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid ReserveSize parameter - %Ix\n", (_DWORD)ReserveSize);
LABEL_33:
    if ( NtCurrentPeb()->BeingDebugged )
    {
      __debugbreak();
      RtlpHeapInvalidBreakPoint = 0;
    }
    return 0;
  }
  if ( (unsigned int)ReserveSize < HIDWORD(ReserveSize) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid CommitSize parameter - %Ix\n", HIDWORD(ReserveSize));
    goto LABEL_33;
  }
  if ( (a1 & 1) != 0 && (_DWORD)CommitSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not specify Lock parameter with HEAP_NO_SERIALIZE\n");
    goto LABEL_33;
  }
  if ( a2 )
  {
    VirtualMemory = NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, a2, MemoryBasicInformation, MemoryInformation, 0x1CuLL, v9);
    if ( VirtualMemory < 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) invalid,  Status = %lx\n", a2, VirtualMemory);
      goto LABEL_33;
    }
    if ( (void *)MemoryInformation[0] != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) != to BaseAddress (%p)\n", a2, MemoryInformation[0]);
      goto LABEL_33;
    }
    if ( MemoryInformation[4] == 0x10000 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) is free or not writable\n", MemoryInformation[0]);
      goto LABEL_33;
    }
    v4 = v12;
  }
  Heap = RtlCreateHeap(v4 | 0x10000060, a2, ReserveSize, CommitSize, v9, v10);
  v8 = Heap;
  if ( Heap )
  {
    if ( (*((_DWORD *)Heap + 16) & 0x8000000) != 0 )
      *((_WORD *)Heap + 86) = RtlLogStackBackTraceEx((void *)1);
    RtlpValidateHeapHeaders(v8);
  }
  return v8;
}
