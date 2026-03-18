/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x140361C64
 * Callers:
 *     LdrpAccessResourceData @ 0x1407129CC (LdrpAccessResourceData.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 *     LdrpGetMappingFromCacheEntry @ 0x140361DF8 (LdrpGetMappingFromCacheEntry.c)
 *     LdrpInitMuiCrits @ 0x1403629B4 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int j; // edi
  bool v11; // sf
  __int64 v12; // rax
  __int16 v13; // cx
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v15 = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v9 + 8) == a1 )
    {
      if ( v16[0] )
      {
        for ( j = v7; ; --j )
        {
          v11 = j < 0;
          if ( j < 0 )
            break;
          if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)j + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)j, a3, v16, &v15) )
          {
            v7 = j;
            v11 = j < 0;
            break;
          }
        }
        if ( v11 )
          v7 = AlternateResourceModuleCount;
        break;
      }
      v16[0] = *(_QWORD *)((char *)AlternateResourceModules + v9 + 32);
      v15 = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
      v7 = i;
    }
  }
  if ( v7 == AlternateResourceModuleCount )
  {
    v16[0] = 0LL;
  }
  else
  {
    if ( !v15 )
    {
      v12 = RtlImageNtHeader(v16[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v12 )
      {
        v13 = *(_WORD *)(v12 + 24);
        if ( v13 == 267 || v13 == 523 )
          v15 = *(unsigned int *)(v12 + 80);
        else
          v15 = 0LL;
      }
    }
    *a4 = v15;
  }
  KeReleaseMutant((PRKMUTANT)&MuiMutex, 1, 0, 0);
  return v16[0];
}
