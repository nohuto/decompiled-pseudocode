/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x14037F8C0
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x140227884 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x14037F8A8 (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x140227A24 (LdrpInitMuiCrits.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v3; // bl
  int v4; // edi
  int v5; // r15d
  PVOID *v6; // rsi
  char *v7; // rcx
  PVOID v8; // rcx
  int v9; // ebx
  int v10; // eax
  PVOID PoolWithTag; // rax
  void *v12; // rdi

  v3 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v4 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v4 <= 0 )
        goto LABEL_21;
      v5 = v4 - 1;
      v6 = (PVOID *)((char *)AlternateResourceModules + 64 * (__int64)(v4 - 1));
      if ( v6[1] == DllHandle )
        break;
LABEL_5:
      v4 = v5;
    }
    v7 = (char *)v6[4];
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v7);
      v8 = v6[5];
      if ( v8 )
      {
        ZwClose(v8);
        v6[5] = 0LL;
      }
      v6[4] = 0LL;
    }
    v9 = AlternateResourceModuleCount;
    if ( v4 != AlternateResourceModuleCount )
      memmove(v6, v6 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v4) << 6);
    AlternateResourceModuleCount = v9 - 1;
    if ( v9 == 1 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v10 = 0;
    }
    else
    {
      if ( v9 - 1 >= (unsigned int)(AltResMemBlockCount - 32) )
      {
LABEL_20:
        v3 = 1;
        goto LABEL_5;
      }
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                      0x69507472u);
      v12 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v3 = 0;
        goto LABEL_21;
      }
      memmove(PoolWithTag, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v12;
      v10 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v10;
    goto LABEL_20;
  }
  v3 = 1;
LABEL_21:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v3;
}
