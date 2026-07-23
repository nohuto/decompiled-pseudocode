/*
 * XREFs of _RtlpValidateHeapHeaders@8 @ 0x4B360B86
 * Callers:
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 *     _RtlDebugCreateHeap@24 @ 0x4B35F37B (_RtlDebugCreateHeap@24.c)
 *     _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA (_RtlDebugCreateTagHeap@16.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

char __fastcall RtlpValidateHeapHeaders(char *Src, char a2)
{
  void **v3; // ebx
  void *v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // esi
  int v8; // eax
  ULONG_PTR v10; // [esp-10h] [ebp-20h]
  size_t v11; // [esp-4h] [ebp-14h]
  unsigned int v12; // [esp+Ch] [ebp-4h] BYREF

  if ( !RtlpValidateHeapHdrsEnable )
    return 1;
  v3 = (void **)(Src + 128);
  v4 = (void *)*((_DWORD *)Src + 32);
  if ( v4 )
    goto LABEL_5;
  v12 = *((unsigned __int16 *)Src + 63);
  HIDWORD(v10) = &v12;
  LODWORD(v10) = 0;
  if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)Src + 32, v10, (PSIZE_T)0x1000, 4u, HIDWORD(v11)) < 0 )
    return 1;
  v4 = *v3;
  a2 = 1;
LABEL_5:
  v12 = *((unsigned __int16 *)Src + 63);
  LODWORD(v11) = v12;
  if ( a2 )
  {
    memcpy(v4, Src, v11);
    v6 = v12;
    v5 = v12;
  }
  else
  {
    v5 = RtlCompareMemory(Src, v4, v11);
    v6 = v12;
  }
  if ( v6 == v5 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ");
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    &Src[v5],
    *(_DWORD *)&Src[v5],
    *(_DWORD *)((char *)*v3 + v5));
  v7 = 0;
  if ( "Entry" )
  {
    v8 = 0;
    while ( v5 < RtlpHeapHeaderFieldOffsets[v8] || v5 >= dword_4B281CB8[v8] )
    {
      ++v7;
      v8 = 2 * v7;
      if ( !(&off_4B281CB4)[2 * v7] )
        return 0;
    }
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("    This is located in the %s field of the heap header.\n", (&off_4B281CB4)[2 * v7]);
  }
  return 0;
}
