/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x140226CD4
 * Callers:
 *     LdrpAccessResourceData @ 0x1405ED82C (LdrpAccessResourceData.c)
 * Callees:
 *     LdrpGetMappingFromCacheEntry @ 0x140226E68 (LdrpGetMappingFromCacheEntry.c)
 *     LdrpInitMuiCrits @ 0x140227A24 (LdrpInitMuiCrits.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int j; // edi
  bool v11; // sf
  PIMAGE_NT_HEADERS v12; // rax
  unsigned __int16 Magic; // cx
  __int64 SizeOfImage; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF

  v16[0] = 0LL;
  SizeOfImage = 0LL;
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
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)j, a3, v16, &SizeOfImage) )
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
      SizeOfImage = *(_QWORD *)((char *)AlternateResourceModules + v9 + 48);
      v7 = i;
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
        Magic = v12->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = v12->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v16[0];
}
