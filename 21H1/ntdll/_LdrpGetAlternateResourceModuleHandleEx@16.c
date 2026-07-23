/*
 * XREFs of _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505
 * Callers:
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505 (_LdrpGetAlternateResourceModuleHandleEx@16.c)
 *     _LdrpGetMappingFromCacheEntry@16 @ 0x4B33F6B8 (_LdrpGetMappingFromCacheEntry@16.c)
 */

int __thiscall LdrpGetAlternateResourceModuleHandleEx(void *this, int a2, DWORD *a3)
{
  int v4; // esi
  int i; // ecx
  int v6; // edx
  int j; // edi
  PIMAGE_NT_HEADERS v8; // eax
  WORD Magic; // cx
  int v11; // [esp+18h] [ebp-20h] BYREF
  DWORD SizeOfImage; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v11 = 0;
  SizeOfImage = 0;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  ms_exc.registration.TryLevel = 0;
  *a3 = 0;
  v4 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v6 = 32 * i;
    if ( *((void **)AlternateResourceModules + 8 * i + 1) == this )
    {
      if ( v11 )
      {
        for ( j = v4; j >= 0; --j )
        {
          if ( *((void **)AlternateResourceModules + 8 * j + 1) == this
            && (unsigned __int8)LdrpGetMappingFromCacheEntry(&v11, &SizeOfImage) )
          {
            v4 = j;
            goto LABEL_13;
          }
        }
        v4 = AlternateResourceModuleCount;
        break;
      }
      v11 = *(_DWORD *)((char *)AlternateResourceModules + v6 + 16);
      SizeOfImage = *(_DWORD *)((char *)AlternateResourceModules + v6 + 24);
      v4 = i;
    }
  }
LABEL_13:
  if ( v4 == AlternateResourceModuleCount )
  {
    v11 = 0;
  }
  else
  {
    if ( !SizeOfImage )
    {
      v8 = RtlImageNtHeader((PVOID)(v11 & 0xFFFFFFFC));
      if ( v8 )
      {
        Magic = v8->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = v8->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0;
      }
    }
    *a3 = SizeOfImage;
  }
  ms_exc.registration.TryLevel = -2;
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v11;
}
