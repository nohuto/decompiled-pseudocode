/*
 * XREFs of _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0
 * Callers:
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360 (_LdrUnloadAlternateResourceModuleEx@8.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned int a1, __int16 a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // edi
  int v5; // esi
  char *v6; // ecx
  char *v7; // edx
  PVOID v8; // ebx
  signed __int32 v10; // eax
  signed __int32 v11; // ecx
  signed __int32 v12; // edx
  signed __int32 v13; // eax
  _DWORD *v14; // eax
  int i; // edx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  signed __int32 v19; // edx
  signed __int32 v20; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [esp+18h] [ebp-28h] BYREF
  PVOID DllHandle; // [esp+1Ch] [ebp-24h]
  _DWORD *v23; // [esp+20h] [ebp-20h]
  __int16 v24; // [esp+24h] [ebp-1Ch]
  char v25; // [esp+26h] [ebp-1Ah]
  char v26; // [esp+27h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v24 = a2;
  DllHandle = (PVOID)a1;
  v4 = 0;
  v23 = 0;
  v26 = 0;
  v25 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0;
  OutHeaders = 0;
  RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFC), 0LL, &OutHeaders);
  if ( !OutHeaders )
    return 0;
  if ( a3 )
    *a3 = 0;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  ms_exc.registration.TryLevel = 0;
  v5 = AlternateResourceModuleCount - 1;
  v6 = (char *)AlternateResourceModules;
  while ( v5 >= 0 )
  {
    v7 = &v6[32 * v5];
    if ( *((PVOID *)v7 + 1) == DllHandle )
    {
      if ( *((_DWORD *)v7 + 3) != OutHeaders->OptionalHeader.CheckSum )
      {
        v26 = 1;
        v25 = 1;
        break;
      }
      if ( (a4 & 8) != 0 )
      {
        if ( *((_DWORD *)v7 + 2) )
        {
          _mm_lfence();
          v4 = (_DWORD *)*((_DWORD *)AlternateResourceModules + 8 * v5 + 2);
          v23 = v4;
          if ( v4 != (_DWORD *)-1 && v4 && *v4 != -20054323 )
          {
            v26 = 1;
            v25 = 1;
            v4 = 0;
            v23 = 0;
          }
          break;
        }
      }
      else if ( (a4 & 4) != 0 && v24 && *(_WORD *)v7 == v24 )
      {
        v4 = (_DWORD *)*((_DWORD *)v7 + 4);
        v23 = v4;
        if ( a3 )
          *a3 = *((_DWORD *)v7 + 6);
        break;
      }
    }
    --v5;
    v6 = (char *)AlternateResourceModules;
  }
  ms_exc.registration.TryLevel = -2;
  v8 = DllHandle;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&MuiCacheSWRLock, 0, 17);
  v11 = v10;
  if ( v10 != 17 )
  {
    if ( (v10 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    if ( (v10 & 2) == 0 )
    {
      do
      {
        v12 = v11 - 16;
        if ( (v11 & 0xFFFFFFF0) == 0x10 )
          v12 = 0;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)&MuiCacheSWRLock, v12, v11);
        if ( v13 == v11 )
          goto LABEL_16;
        v11 = v13;
      }
      while ( (v13 & 2) == 0 );
    }
    if ( (v11 & 8) != 0 )
    {
      v14 = (_DWORD *)(v11 & 0xFFFFFFF0);
      for ( i = *(_DWORD *)((v11 & 0xFFFFFFF0) + 4); !i; i = v14[1] )
        v14 = (_DWORD *)*v14;
      if ( _InterlockedDecrement((volatile signed __int32 *)(i + 16)) > 0 )
        goto LABEL_16;
      v16 = -9;
    }
    else
    {
      v16 = -1;
    }
    v17 = v16;
    while ( 1 )
    {
      v18 = v17 + 4;
      if ( (v11 & 6) != 2 )
        v18 = v17;
      v19 = v18 + v11;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)&MuiCacheSWRLock, v18 + v11, v11);
      if ( v20 == v11 )
        break;
      v11 = v20;
    }
    v4 = v23;
    v8 = DllHandle;
    if ( (v11 & 6) == 2 )
      RtlpWakeSRWLock(v19);
  }
LABEL_16:
  if ( v26 )
    LdrUnloadAlternateResourceModuleEx(v8, 0);
  return v4;
}
