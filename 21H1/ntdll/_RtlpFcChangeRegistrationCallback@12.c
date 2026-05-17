/*
 * XREFs of _RtlpFcChangeRegistrationCallback@12 @ 0x4B369880
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

signed __int32 __stdcall RtlpFcChangeRegistrationCallback(int a1, int a2, int a3)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 16));
  (*(void (__thiscall **)(_DWORD, _DWORD))(a2 + 8))(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12));
  return RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a2 + 16));
}
