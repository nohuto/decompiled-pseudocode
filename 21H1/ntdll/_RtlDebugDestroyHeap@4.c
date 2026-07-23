/*
 * XREFs of _RtlDebugDestroyHeap@4 @ 0x4B35F6BF
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 * Callees:
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 */

char __thiscall RtlDebugDestroyHeap(int this)
{
  int v3; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( (void *)this == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", (const void *)this);
    return 0;
  }
  if ( !RtlpCheckHeapSignature((_DWORD *)this, "RtlDestroyHeap") || !(unsigned __int8)RtlpValidateHeap((PVOID)this) )
    return 0;
  *(_DWORD *)(this + 96) = 0;
  if ( *(_DWORD *)(this + 128) )
  {
    v4 = 0;
    RtlpSecMemFreeVirtualMemory(v3, (PVOID *)(this + 128), (ULONG_PTR *)&v4, 0x8000u);
  }
  return 1;
}
