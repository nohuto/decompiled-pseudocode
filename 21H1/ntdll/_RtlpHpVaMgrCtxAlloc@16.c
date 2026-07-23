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

PVOID __fastcall RtlpHpVaMgrCtxAlloc(_RTL_SRWLOCK *a1, unsigned int *a2, unsigned int a3, _DWORD *a4)
{
  _RTL_SRWLOCK *v5; // edi
  _RTL_SRWLOCK *v6; // eax
  _RTL_SRWLOCK *v8; // [esp-4h] [ebp-14h]

  if ( *a4 == -1 )
  {
    RtlAcquireSRWLockShared(a1 + 13);
    v6 = (_RTL_SRWLOCK *)RtlpHpVaMgrCtxAllocatorFind(0, 0);
    v8 = a1 + 13;
    v5 = v6;
    RtlReleaseSRWLockShared(v8);
  }
  else
  {
    v5 = &a1[7 * *a4 + 15];
  }
  return RtlpHpVaMgrAlloc(v5, a2, a3);
}
