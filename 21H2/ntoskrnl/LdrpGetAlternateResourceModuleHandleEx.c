/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1402D7A40
 * Callers:
 *     LdrpAccessResourceData @ 0x14075883C (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     LdrpInitMuiCrits @ 0x1402D749C (LdrpInitMuiCrits.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1402D7BD4 (LdrpGetMappingFromCacheEntry.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int j; // edi
  __int64 v11; // rax
  __int16 v12; // cx
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v14 = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v9 + 8) == a1 )
    {
      if ( v15[0] )
      {
        for ( j = v7; j >= 0; --j )
        {
          if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)j + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)j, a3, v15, &v14) )
          {
            v7 = j;
            goto LABEL_12;
          }
        }
        v7 = AlternateResourceModuleCount;
        break;
      }
      v15[0] = *(_QWORD *)((char *)AlternateResourceModules + v9 + 32);
      v14 = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
      v7 = i;
    }
  }
LABEL_12:
  if ( v7 == AlternateResourceModuleCount )
  {
    v15[0] = 0LL;
  }
  else
  {
    if ( !v14 )
    {
      v11 = RtlImageNtHeader(v15[0] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v11 )
      {
        v12 = *(_WORD *)(v11 + 24);
        if ( v12 == 267 || v12 == 523 )
          v14 = *(unsigned int *)(v11 + 80);
        else
          v14 = 0LL;
      }
    }
    *a4 = v14;
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v15[0];
}
