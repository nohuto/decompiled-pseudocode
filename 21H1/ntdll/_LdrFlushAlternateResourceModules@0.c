/*
 * XREFs of _LdrFlushAlternateResourceModules@0 @ 0x4B33F190
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrFlushAlternateResourceModules@0 @ 0x4B33F190 (_LdrFlushAlternateResourceModules@0.c)
 */

char __stdcall LdrFlushAlternateResourceModules()
{
  unsigned int i; // esi
  int v1; // edi
  int v2; // eax
  unsigned int v4; // [esp-4h] [ebp-34h]

  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v1 = AlternateResourceModules + 32 * i;
      v2 = *(_DWORD *)(v1 + 16);
      if ( v2 != -1 && v2 )
      {
        v4 = v2 & 0xFFFFFFFC;
        if ( *(_DWORD *)(v1 + 28) == -1073741799 )
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v4);
        else
          NtUnmapViewOfSection(-1, v4);
        *(_DWORD *)(v1 + 16) = 0;
        if ( *(_DWORD *)(v1 + 20) )
        {
          NtClose(*(HANDLE *)(v1 + 20));
          *(_DWORD *)(v1 + 20) = 0;
        }
      }
    }
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
