/*
 * XREFs of _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0 (_LdrpFastpthReloadedDll@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpDecrementNodeLoadCountLockHeld@12 @ 0x4B2CD933 (_LdrpDecrementNodeLoadCountLockHeld@12.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 */

int __fastcall LdrpDecrementModuleLoadCountEx(int a1, int a2)
{
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  if ( a2 && *(_DWORD *)(*(_DWORD *)(a1 + 80) + 12) == 1 )
    return -1073741267;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_DWORD **)(a1 + 80);
  v5 = LdrpDecrementNodeLoadCountLockHeld(v4, a2, &v8);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v8 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v4);
    LdrpReleaseLoaderLock(v6, 8, 0, v6);
  }
  return v5;
}
