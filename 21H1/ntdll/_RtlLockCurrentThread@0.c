/*
 * XREFs of _RtlLockCurrentThread@0 @ 0x4B368C20
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwLockVirtualMemory@16 @ 0x4B2F3A50 (_ZwLockVirtualMemory@16.c)
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 *     _RtlpLockStack@0 @ 0x4B368D27 (_RtlpLockStack@0.c)
 */

int __stdcall RtlLockCurrentThread()
{
  struct _TEB *v0; // esi
  unsigned int LockCount; // eax
  int result; // eax
  int VirtualMemory; // edi
  _DWORD v4[7]; // [esp+4h] [ebp-24h] BYREF
  int v5; // [esp+20h] [ebp-8h] BYREF
  int v6; // [esp+24h] [ebp-4h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( LockCount )
  {
    v0->LockCount = LockCount + 1;
    return 0;
  }
  VirtualMemory = NtQueryVirtualMemory(-1, (int)v0, 0, (int)v4, 28, 0);
  if ( VirtualMemory >= 0 )
  {
    v5 = v4[0];
    v6 = v4[3];
    result = ZwLockVirtualMemory(-1, (int)&v5, (int)&v6, 1);
    if ( result < 0 )
      return result;
    VirtualMemory = RtlpLockStack();
    if ( VirtualMemory >= 0 )
    {
      v0->LockCount = 1;
      return 0;
    }
    NtUnlockVirtualMemory(-1, (int)&v5, (int)&v6, 1);
  }
  return VirtualMemory;
}
