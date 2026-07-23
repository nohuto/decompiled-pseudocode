/*
 * XREFs of _LdrpFindLoadedDllByMapping@16 @ 0x4B2E5872
 * Callers:
 *     _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721 (_LdrpFindLoadedDllByMappingFile@12.c)
 *     _LdrGetDllHandleByMapping@8 @ 0x4B2E5810 (_LdrGetDllHandleByMapping@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpFindLoadedDllByMappingLockHeld@16 @ 0x4B2CD468 (_LdrpFindLoadedDllByMappingLockHeld@16.c)
 */

int __fastcall LdrpFindLoadedDllByMapping(
        void *a1,
        _RTL_BALANCED_NODE **a2,
        _RTL_BALANCED_NODE ***a3,
        unsigned int *a4)
{
  int LoadedDllByMappingLockHeld; // esi
  _RTL_BALANCED_NODE *v8[2]; // [esp+10h] [ebp-8h] BYREF

  v8[0] = a2[2];
  v8[1] = a2[20];
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a2, a1, (int)a1, v8, a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = (*a3)[20][2].ParentValue;
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return LoadedDllByMappingLockHeld;
}
