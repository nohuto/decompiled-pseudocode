/*
 * XREFs of _RtlpUnlockStack@0 @ 0x4B368D7F
 * Callers:
 *     _RtlUnlockCurrentThread@0 @ 0x4B368CC0 (_RtlUnlockCurrentThread@0.c)
 * Callees:
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 */

NTSTATUS __stdcall RtlpUnlockStack()
{
  struct _TEB *v0; // edx
  int v1; // eax
  PVOID BaseAddress; // [esp+0h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+4h] [ebp-4h] BYREF

  v0 = NtCurrentTeb();
  v1 = (char *)v0->NtTib.StackBase - ((char *)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480);
  BaseAddress = (char *)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  LODWORD(RegionSize) = v1;
  return NtUnlockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
}
