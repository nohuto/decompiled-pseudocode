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

char __thiscall RtlDebugDestroyHeap(_DWORD *this)
{
  int v3; // edx
  int v4; // ecx
  int v5; // [esp+4h] [ebp-4h] BYREF

  if ( this == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", this);
    return 0;
  }
  if ( !RtlpCheckHeapSignature(this, "RtlDestroyHeap") )
    return 0;
  LOBYTE(v3) = 0;
  if ( !(unsigned __int8)RtlpValidateHeap(this, v3) )
    return 0;
  this[24] = 0;
  if ( this[32] )
  {
    v5 = 0;
    RtlpSecMemFreeVirtualMemory(v4, this + 32, &v5, 0x8000);
  }
  return 1;
}
