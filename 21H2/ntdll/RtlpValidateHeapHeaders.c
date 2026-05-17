/*
 * XREFs of RtlpValidateHeapHeaders @ 0x1800FABF4
 * Callers:
 *     RtlDebugAllocateHeap @ 0x1800F89E0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8D9C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateHeap @ 0x1800F8EF0 (RtlDebugCreateHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F91E4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F93EC (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F99D0 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1800FA614 (RtlpValidateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1800A1FF0 (RtlCompareMemory.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

char __fastcall RtlpValidateHeapHeaders(void **Src, char a2)
{
  void **v3; // rsi
  void *v4; // rcx
  size_t v5; // r8
  SIZE_T v6; // rdi
  size_t v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rax
  size_t v12; // [rsp+50h] [rbp+18h]

  if ( !RtlpValidateHeapHdrsEnable )
    return 1;
  v3 = Src + 27;
  v4 = Src[27];
  if ( v4 )
    goto LABEL_5;
  if ( (int)ZwAllocateVirtualMemory() < 0 )
    return 1;
  v4 = *v3;
  a2 = 1;
LABEL_5:
  v5 = *((unsigned __int16 *)Src + 105);
  v12 = v5;
  if ( a2 )
  {
    memmove(v4, Src, v5);
    v7 = v12;
    v6 = v12;
  }
  else
  {
    v6 = RtlCompareMemory(Src, v4, v5);
    v7 = v12;
  }
  if ( v7 == v6 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    (char *)Src + v6,
    *(_DWORD *)((char *)Src + v6),
    *(_DWORD *)((char *)*v3 + v6));
  v8 = 0;
  if ( "Entry" )
  {
    v9 = 0LL;
    v10 = 0LL;
    while ( v6 < *(unsigned int *)((char *)&RtlpHeapHeaderFieldOffsets + v10)
         || v6 >= *((unsigned int *)&RtlpHeapHeaderFieldOffsets + 4 * v8 + 4) )
    {
      v10 = 16LL * ++v8;
      v9 = v8;
      if ( !*(_QWORD *)((char *)&RtlpHeapHeaderFieldOffsets + v10 + 8) )
        return 0;
    }
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "    This is located in the %s field of the heap header.\n",
      *((const char **)&RtlpHeapHeaderFieldOffsets + 2 * v9 + 1));
  }
  return 0;
}
