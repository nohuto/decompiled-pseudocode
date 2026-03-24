/*
 * XREFs of MmLockPagableDataSection @ 0x1406D0CD0
 * Callers:
 *     HalpPowerInitSystem @ 0x1409A0D80 (HalpPowerInitSystem.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C6D40 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x1409F3730 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     MiLockPagableSections @ 0x140A545BC (MiLockPagableSections.c)
 *     HeadlessInit @ 0x140A74260 (HeadlessInit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MiLockPagableImageSection @ 0x14031C4F0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  char *v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // r10d
  _DWORD *v10; // rdx
  int v11; // ecx
  unsigned __int64 v12; // r8
  unsigned int v13; // eax

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v6 = *(_QWORD *)(MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0LL, v4, v5) + 48);
  v7 = (char *)AddressWithinSection - v6;
  v8 = RtlImageNtHeader(v6);
  v9 = *(unsigned __int16 *)(v8 + 6);
  v10 = (_DWORD *)(*(unsigned __int16 *)(v8 + 20) + v8 + 24);
  v11 = 0;
  if ( *(_WORD *)(v8 + 6) )
  {
    while ( 1 )
    {
      v12 = (unsigned int)v10[3];
      v13 = v10[4];
      if ( (unsigned __int64)v7 >= v12 )
      {
        if ( v13 < v10[2] )
          v13 = v10[2];
        if ( (unsigned __int64)v7 < (unsigned int)v12 + v13 )
          break;
      }
      v10 += 10;
      if ( ++v11 >= v9 )
        goto LABEL_10;
    }
    v3 = v10;
  }
LABEL_10:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1uLL);
  return v3;
}
