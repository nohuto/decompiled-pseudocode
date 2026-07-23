/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1800E120C
 * Callers:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800E1398 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int v10; // edi
  bool v11; // sf
  PIMAGE_NT_HEADERS v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 SizeOfImage; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v16[0] = 0LL;
  SizeOfImage = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  LODWORD(v14) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v9 + 8) == a1 )
    {
      if ( v16[0] )
      {
        v10 = v7;
        for ( HIDWORD(v14) = v7; ; HIDWORD(v14) = v10 )
        {
          v11 = v10 < 0;
          if ( v10 < 0 )
            break;
          if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)v10 + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v10, a3, v16, &SizeOfImage, v14) )
          {
            v7 = v10;
            v11 = v10 < 0;
            break;
          }
          --v10;
        }
        if ( v11 )
          v7 = AlternateResourceModuleCount;
        break;
      }
      v16[0] = *(_QWORD *)((char *)AlternateResourceModules + v9 + 32);
      SizeOfImage = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
      v7 = i;
      LODWORD(v14) = i;
    }
  }
  if ( v7 == AlternateResourceModuleCount )
  {
    v16[0] = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      v12 = RtlImageNtHeader((PVOID)(v16[0] & 0xFFFFFFFFFFFFFFFCuLL));
      if ( v12 )
      {
        if ( v12->OptionalHeader.Magic == 267 || v12->OptionalHeader.Magic == 523 )
          SizeOfImage = v12->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v16[0];
}
