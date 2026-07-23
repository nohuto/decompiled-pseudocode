/*
 * XREFs of _RtlpLockStack@0 @ 0x4B368D27
 * Callers:
 *     _RtlLockCurrentThread@0 @ 0x4B368C20 (_RtlLockCurrentThread@0.c)
 * Callees:
 *     _ZwLockVirtualMemory@16 @ 0x4B2F3A50 (_ZwLockVirtualMemory@16.c)
 */

NTSTATUS __stdcall RtlpLockStack()
{
  struct _TEB *v0; // edx
  char *StackBase; // eax
  unsigned int v2; // esi
  unsigned int i; // ecx
  PVOID BaseAddress; // [esp+4h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+8h] [ebp-4h] BYREF

  v0 = NtCurrentTeb();
  StackBase = (char *)v0->NtTib.StackBase;
  v2 = (unsigned int)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  for ( i = (unsigned int)(StackBase - 4096); i >= v2; i -= 4096 )
    ;
  BaseAddress = (char *)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  LODWORD(RegionSize) = &StackBase[-v2];
  return ZwLockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
}
