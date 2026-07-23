/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1800335B8
 * Callers:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x18004B370 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006A7E0 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  PIMAGE_NT_HEADERS v9; // r13
  int v10; // r8d
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v15; // [rsp+30h] [rbp-38h]
  char v16; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v16 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  v9 = OutHeaders;
  if ( !OutHeaders )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  v10 = AlternateResourceModuleCount - 1;
  v13 = AlternateResourceModuleCount - 1;
  while ( v10 >= 0 )
  {
    v11 = (__int64)v10 << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v11 + 8) == DllHandle )
    {
      if ( *(_DWORD *)((char *)AlternateResourceModules + v11 + 24) != v9->OptionalHeader.CheckSum )
      {
        v16 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)((char *)AlternateResourceModules + v11 + 16) )
        {
          _mm_lfence();
          v8 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 8 * (__int64)v13 + 2);
          v15 = v8;
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v16 = 1;
            v8 = 0LL;
            v15 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)((char *)AlternateResourceModules + v11) == a2 )
      {
        v8 = *(_DWORD **)((char *)AlternateResourceModules + v11 + 32);
        v15 = v8;
        if ( a3 )
          *a3 = *(_QWORD *)((char *)AlternateResourceModules + v11 + 48);
        break;
      }
    }
    v13 = --v10;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  if ( v16 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, 0);
  return v8;
}
