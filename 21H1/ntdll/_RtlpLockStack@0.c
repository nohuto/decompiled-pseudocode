/*
 * XREFs of _RtlpLockStack@0 @ 0x4B368D27
 * Callers:
 *     _RtlLockCurrentThread@0 @ 0x4B368C20 (_RtlLockCurrentThread@0.c)
 * Callees:
 *     _ZwLockVirtualMemory@16 @ 0x4B2F3A50 (_ZwLockVirtualMemory@16.c)
 */

int __stdcall RtlpLockStack()
{
  struct _TEB *v0; // edx
  char *StackBase; // eax
  unsigned int v2; // esi
  unsigned int i; // ecx
  int v5; // [esp+4h] [ebp-8h] BYREF
  char *v6; // [esp+8h] [ebp-4h] BYREF

  v0 = NtCurrentTeb();
  StackBase = (char *)v0->NtTib.StackBase;
  v2 = (unsigned int)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  for ( i = (unsigned int)(StackBase - 4096); i >= v2; i -= 4096 )
    ;
  v5 = (int)v0->DeallocationStack + v0->GuaranteedStackBytes + 20480;
  v6 = &StackBase[-v2];
  return ZwLockVirtualMemory(-1, (int)&v5, (int)&v6, 1);
}
