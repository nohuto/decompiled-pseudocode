/*
 * XREFs of _LdrpFindExistingModule@20 @ 0x4B2DE476
 * Callers:
 *     _LdrpMapDllRetry@4 @ 0x4B2DDF9E (_LdrpMapDllRetry@4.c)
 *     _LdrpMapDllFullPath@4 @ 0x4B2DE04A (_LdrpMapDllFullPath@4.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpFindLoadedDllByNameLockHeld@20 @ 0x4B2CDF40 (_LdrpFindLoadedDllByNameLockHeld@20.c)
 */

signed int __fastcall LdrpFindExistingModule(unsigned __int16 *a1, _UNICODE_STRING *a2, char a3, int a4, int **a5)
{
  signed int LoadedDllByNameLockHeld; // esi

  *a5 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(a1, (a3 & 0x20) == 0 ? a2 : 0, a3, a5, a4);
  if ( LoadedDllByNameLockHeld == -1073741515 && (a3 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0, a2, 0, a5, a4);
    if ( LoadedDllByNameLockHeld >= 0 )
      (*a5)[13] |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return LoadedDllByNameLockHeld;
}
