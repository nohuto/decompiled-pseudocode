/*
 * XREFs of _RtlUnlockCurrentThread@0 @ 0x4B368CC0
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 *     _RtlpUnlockStack@0 @ 0x4B368D7F (_RtlpUnlockStack@0.c)
 */

int __stdcall RtlUnlockCurrentThread()
{
  struct _TEB *v0; // ecx
  unsigned int LockCount; // eax
  unsigned int v3; // eax
  _DWORD v4[7]; // [esp+0h] [ebp-24h] BYREF
  int v5; // [esp+1Ch] [ebp-8h] BYREF
  int v6; // [esp+20h] [ebp-4h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( !LockCount )
    return -1073741782;
  v3 = LockCount - 1;
  v0->LockCount = v3;
  if ( !v3 )
  {
    if ( NtQueryVirtualMemory(-1, (int)v0, 0, (int)v4, 28, 0) >= 0 )
    {
      v5 = v4[0];
      v6 = v4[3];
      NtUnlockVirtualMemory(-1, (int)&v5, (int)&v6, 1);
    }
    RtlpUnlockStack();
  }
  return 0;
}
