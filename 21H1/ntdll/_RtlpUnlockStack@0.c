/*
 * XREFs of _RtlpUnlockStack@0 @ 0x4B368D7F
 * Callers:
 *     _RtlUnlockCurrentThread@0 @ 0x4B368CC0 (_RtlUnlockCurrentThread@0.c)
 * Callees:
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 */

int __stdcall RtlpUnlockStack()
{
  struct _TEB *v0; // edx
  int v1; // eax
  int v3; // [esp+0h] [ebp-8h] BYREF
  int v4; // [esp+4h] [ebp-4h] BYREF

  v0 = NtCurrentTeb();
  v1 = (char *)v0->NtTib.StackBase - ((char *)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480);
  v3 = (int)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  v4 = v1;
  return NtUnlockVirtualMemory(-1, (int)&v3, (int)&v4, 1);
}
