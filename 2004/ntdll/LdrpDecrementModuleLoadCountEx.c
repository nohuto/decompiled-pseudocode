/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x18000FC98
 * Callers:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18001FC80 (LdrpFastpthReloadedDll.c)
 *     LdrpCorInitialize @ 0x180082AB4 (LdrpCorInitialize.c)
 * Callees:
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x18000FD28 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpReleaseLoaderLock @ 0x18003E654 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6B4 (LdrpAcquireLoaderLock.c)
 *     LdrpUnloadNode @ 0x18006A3E8 (LdrpUnloadNode.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_QWORD *)(a1 + 152);
  v5 = LdrpDecrementNodeLoadCountLockHeld(v4, a2, &v8);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v8 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v4);
    LdrpReleaseLoaderLock(v7, 8LL);
  }
  return v5;
}
