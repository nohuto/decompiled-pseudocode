/*
 * XREFs of _RtlpHpVaMgrCtxAlloc@16 @ 0x4B37AA36
 * Callers:
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 *     _RtlpHpVaMgrCtxAllocatorFind@16 @ 0x4B37AB17 (_RtlpHpVaMgrCtxAllocatorFind@16.c)
 */

unsigned int __fastcall RtlpHpVaMgrCtxAlloc(int a1, unsigned int *a2, unsigned int a3, _DWORD *a4)
{
  int v5; // edi
  int v6; // eax
  volatile signed __int32 *v8; // [esp-4h] [ebp-14h]

  if ( *a4 == -1 )
  {
    RtlAcquireSRWLockShared((volatile signed __int32 *)(a1 + 52));
    v6 = RtlpHpVaMgrCtxAllocatorFind(0, 0);
    v8 = (volatile signed __int32 *)(a1 + 52);
    v5 = v6;
    RtlReleaseSRWLockShared(v8);
  }
  else
  {
    v5 = 28 * *a4 + a1 + 60;
  }
  return RtlpHpVaMgrAlloc(v5, a2, a3);
}
