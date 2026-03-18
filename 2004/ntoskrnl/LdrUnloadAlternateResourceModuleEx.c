/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x14037D800
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x140362814 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x14037D7E8 (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x1403629B4 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140605CC0 (MmUnmapViewInSystemSpace.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  int v5; // edi
  int v6; // r15d
  _QWORD *v7; // rsi
  char *v8; // rcx
  void *v9; // rcx
  int v10; // ebx
  int v11; // eax
  PVOID PoolWithTag; // rax
  void *v13; // rdi

  v4 = 0;
  if ( !a1 )
    return 0;
  LdrpInitMuiCrits(a1, a2, a3);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v5 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v5 <= 0 )
        goto LABEL_21;
      v6 = v5 - 1;
      v7 = (char *)AlternateResourceModules + 64 * (__int64)(v5 - 1);
      if ( v7[1] == a1 )
        break;
LABEL_5:
      v5 = v6;
    }
    v8 = (char *)v7[4];
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v8);
      v9 = (void *)v7[5];
      if ( v9 )
      {
        ZwClose(v9);
        v7[5] = 0LL;
      }
      v7[4] = 0LL;
    }
    v10 = AlternateResourceModuleCount;
    if ( v5 != AlternateResourceModuleCount )
      memmove(v7, v7 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v5) << 6);
    AlternateResourceModuleCount = v10 - 1;
    if ( v10 == 1 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v11 = 0;
    }
    else
    {
      if ( v10 - 1 >= (unsigned int)(AltResMemBlockCount - 32) )
      {
LABEL_20:
        v4 = 1;
        goto LABEL_5;
      }
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                      0x69507472u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v4 = 0;
        goto LABEL_21;
      }
      memmove(PoolWithTag, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v13;
      v11 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v11;
    goto LABEL_20;
  }
  v4 = 1;
LABEL_21:
  KeReleaseMutant((PRKMUTANT)&MuiMutex, 1, 0, 0);
  return v4;
}
