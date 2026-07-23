/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x14037CD40
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x14033A4C0 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x14037CD28 (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeReleaseMutant @ 0x140249450 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     LdrpInitMuiCrits @ 0x14033A660 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  BOOLEAN v5; // bl
  int v6; // edi
  int v7; // r15d
  PVOID *v8; // rsi
  char *v9; // rcx
  PVOID v10; // rcx
  int v11; // ebx
  int v12; // eax
  PVOID PoolWithTag; // rax
  void *v14; // rdi

  v5 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits((__int64)DllHandle, *(__int64 *)&Flags, v2, v3);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v6 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v6 <= 0 )
        goto LABEL_21;
      v7 = v6 - 1;
      v8 = (PVOID *)((char *)AlternateResourceModules + 64 * (__int64)(v6 - 1));
      if ( v8[1] == DllHandle )
        break;
LABEL_5:
      v6 = v7;
    }
    v9 = (char *)v8[4];
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v9);
      v10 = v8[5];
      if ( v10 )
      {
        ZwClose(v10);
        v8[5] = 0LL;
      }
      v8[4] = 0LL;
    }
    v11 = AlternateResourceModuleCount;
    if ( v6 != AlternateResourceModuleCount )
      memmove(v8, v8 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v6) << 6);
    AlternateResourceModuleCount = v11 - 1;
    if ( v11 == 1 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v12 = 0;
    }
    else
    {
      if ( v11 - 1 >= (unsigned int)(AltResMemBlockCount - 32) )
      {
LABEL_20:
        v5 = 1;
        goto LABEL_5;
      }
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                      0x69507472u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = 0;
        goto LABEL_21;
      }
      memmove(PoolWithTag, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v14;
      v12 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v12;
    goto LABEL_20;
  }
  v5 = 1;
LABEL_21:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v5;
}
