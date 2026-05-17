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

int *__fastcall RtlDebugCreateHeap(int a1, void *a2, char *a3, char *a4, unsigned int a5, int a6)
{
  int v6; // eax
  int *Heap; // eax
  int *v10; // esi
  _DWORD v11[7]; // [esp+Ch] [ebp-24h] BYREF
  int v12; // [esp+28h] [ebp-8h]
  int VirtualMemory; // [esp+2Ch] [ebp-4h]

  v6 = a1;
  v12 = a1;
  if ( (unsigned int)a3 <= 8 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid ReserveSize parameter - %Ix\n", a3);
LABEL_33:
    if ( NtCurrentPeb()->BeingDebugged )
    {
      __debugbreak();
      RtlpHeapInvalidBreakPoint = 0;
    }
    return 0;
  }
  if ( a3 < a4 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid CommitSize parameter - %Ix\n", a4);
    goto LABEL_33;
  }
  if ( (a1 & 1) != 0 && a5 )
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
    VirtualMemory = NtQueryVirtualMemory(-1, (int)a2, 0, (int)v11, 28, 0);
    if ( VirtualMemory < 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) invalid,  Status = %lx\n", a2, VirtualMemory);
      goto LABEL_33;
    }
    if ( (void *)v11[0] != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) != to BaseAddress (%p)\n", a2, v11[0]);
      goto LABEL_33;
    }
    if ( v11[4] == 0x10000 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) is free or not writable\n", v11[0]);
      goto LABEL_33;
    }
    v6 = v12;
  }
  Heap = RtlCreateHeap(v6 | 0x10000060, a2, a3, a4, a5, a6);
  v10 = Heap;
  if ( Heap )
  {
    if ( (Heap[16] & 0x8000000) != 0 )
      *((_WORD *)Heap + 86) = RtlLogStackBackTraceEx((void *)1);
    RtlpValidateHeapHeaders(v10);
  }
  return v10;
}
