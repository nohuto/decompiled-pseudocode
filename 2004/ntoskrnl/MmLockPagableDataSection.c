/*
 * XREFs of MmLockPagableDataSection @ 0x1406A8960
 * Callers:
 *     HalpPowerInitSystem @ 0x14099D460 (HalpPowerInitSystem.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C3D30 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x1409F0730 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x140A52934 (MiLockPagableSections.c)
 *     HeadlessInit @ 0x140A7119C (HeadlessInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rbx
  __int64 v4; // rcx
  char *v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // r10d
  _DWORD *v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // eax

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v4 = *(_QWORD *)(MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 0) + 48);
  v5 = (char *)AddressWithinSection - v4;
  v6 = RtlImageNtHeader(v4);
  v7 = *(unsigned __int16 *)(v6 + 6);
  v8 = (_DWORD *)(*(unsigned __int16 *)(v6 + 20) + v6 + 24);
  v9 = 0;
  if ( *(_WORD *)(v6 + 6) )
  {
    while ( 1 )
    {
      v10 = (unsigned int)v8[3];
      v11 = v8[4];
      if ( (unsigned __int64)v5 >= v10 )
      {
        if ( v11 < v8[2] )
          v11 = v8[2];
        if ( (unsigned __int64)v5 < (unsigned int)v10 + v11 )
          break;
      }
      v8 += 10;
      if ( ++v9 >= v7 )
        goto LABEL_10;
    }
    v3 = v8;
  }
LABEL_10:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1uLL);
  return v3;
}
