/*
 * XREFs of LdrpFindExistingModule @ 0x18005FA04
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18005F500 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18005F8C0 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180060478 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800212F0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindExistingModule(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        volatile signed __int32 **a5)
{
  int v6; // ebp
  char v7; // si
  unsigned __int16 *v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  v6 = a4;
  v7 = a3;
  *a5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)a2, a3, a4);
  v9 = 0LL;
  if ( (v7 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(a1, v9, v7, a5, v6);
  if ( LoadedDllByNameLockHeld == -1073741515 && (v7 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, a2, 0, a5, v6);
    if ( LoadedDllByNameLockHeld >= 0 )
      *((_DWORD *)*a5 + 26) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
