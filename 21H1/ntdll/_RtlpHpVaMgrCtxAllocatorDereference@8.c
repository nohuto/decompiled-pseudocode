/*
 * XREFs of _RtlpHpVaMgrCtxAllocatorDereference@8 @ 0x4B37AAD7
 * Callers:
 *     _RtlpHpRegisterEnvironment@8 @ 0x4B3798A7 (_RtlpHpRegisterEnvironment@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

signed __int32 __fastcall RtlpHpVaMgrCtxAllocatorDereference(int a1, _DWORD *a2)
{
  int v3; // esi

  v3 = a1 + 28 * *a2;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 52));
  if ( (*(_WORD *)(v3 + 82))-- == 1 )
  {
    memset((void *)(v3 + 60), 0, 0x1Cu);
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 68) = 0;
    --*(_DWORD *)(a1 + 56);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 52));
}
