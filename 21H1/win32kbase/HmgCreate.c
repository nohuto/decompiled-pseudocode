/*
 * XREFs of HmgCreate @ 0x1C001EE8C
 * Callers:
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C000D0D0 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C001F2B4 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C001F3AC (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C0020A34 (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C0020AA8 (-HmgrStacksInit@@YAXXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C0020C20 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     Win32CreateSection @ 0x1C0021038 (Win32CreateSection.c)
 *     GreCreateFastMutex @ 0x1C002109C (GreCreateFastMutex.c)
 *     bLoadProcessHandleQuota @ 0x1C00210D8 (bLoadProcessHandleQuota.c)
 *     GreCreateSemaphoreInternal @ 0x1C00737B0 (GreCreateSemaphoreInternal.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C007CE20 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 HmgCreate()
{
  unsigned int v0; // eax
  __int64 v1; // rbx
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcess; // rdi
  struct _ENTRY *v13; // rdx
  unsigned int v14; // ecx
  GdiHandleManager *v15; // rcx
  int v16; // ebx
  union _LARGE_INTEGER *v17; // rax
  void **v18; // rax
  unsigned __int8 **v19; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+28h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+30h] BYREF
  int v27; // [rsp+A8h] [rbp+38h] BYREF
  int v28; // [rsp+ACh] [rbp+3Ch]

  v0 = (unsigned int)qword_1C0257398;
  if ( qword_1C0257398 )
    v0 = qword_1C0257398();
  gMaxGdiHandleCount = v0;
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    gProcessHandleQuota = 10000;
  v1 = 0x10000LL;
  if ( gMaxGdiHandleCount < 0x10000 )
    v1 = gMaxGdiHandleCount;
  if ( qword_1C02575D8 )
    qword_1C02575D8();
  ghsemHmgr = (PERESOURCE)GreCreateSemaphoreInternal(0LL);
  if ( !ghsemHmgr )
    return 0LL;
  memset(&laSize, 0, 0x7CuLL);
  if ( !(unsigned int)HmgInitializeLookAsideList(1u, 0x840u, v2, 0x28u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(4u, 0x70u, v3, 0x60u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(5u, (int)SURFACE::tSize + 256, v4, 0x28u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(8u, 0xC8u, v5, 0xCu) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0x10u, 0xB8u, v6, 0x60u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0xAu, 0x278u, v7, 0x40u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0xBu, 0x390u, v8, 0x37u) )
    return 0LL;
  ghfmMemory = (PKGUARDED_MUTEX)GreCreateFastMutex();
  if ( !ghfmMemory )
    return 0LL;
  gDpiDepDefaultGuiFontsPushLock = 0LL;
  gDCOwnershipChangeLock = 0LL;
  v28 = 0;
  v27 = 1573528;
  if ( (int)Win32CreateSection((unsigned int)&gpHmgrSharedHandleSection, 6, v9, (unsigned int)&v27) < 0 )
    return 0LL;
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(gpHmgrSharedHandleSection, &gpGdiSharedMemory, &ViewSize) < 0 )
    return 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v11, v10);
  if ( (int)MmMapViewOfSection(gpHmgrSharedHandleSection, CurrentProcess, &v24, 0LL, 4096LL, &v23, &v22, 2, 0x400000, 4) < 0 )
    return 0LL;
  RegionSize = 24 * v1;
  BaseAddress = (PVOID)v24;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v24 + 1572864);
  RegionSize = 664LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  gpentHmgr = (struct _ENTRY *)gpGdiSharedMemory;
  gpGdiDevCaps = (struct _DEVCAPS *)((char *)gpGdiSharedMemory + 1572864);
  gpHandleManager = GdiHandleManager::Create(v14, v13, v1);
  if ( !gpHandleManager )
    return 0LL;
  v16 = 0;
  while ( 1 )
  {
    LODWORD(v24) = 0;
    if ( !GdiHandleManager::AcquireEntryIndex(v15, (unsigned int *)&v24) )
      break;
    if ( (unsigned int)++v16 >= 0xA )
      goto LABEL_27;
  }
  GdiHandleManager::Destroy(v15);
  gpHandleManager = 0LL;
LABEL_27:
  if ( !gpHandleManager )
    return 0LL;
  gahStockObjects = (void **)((char *)gpGdiSharedMemory + 1573040);
  gahStockObjects96 = (void **)((char *)gpGdiSharedMemory + 1573216);
  gahDpiDepDefaultGuiFonts = (void **)((char *)gpGdiSharedMemory + 1573392);
  HmgrStacksInit();
  v17 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged(8LL, 1819109447LL);
  gpLockShortDelay = v17;
  if ( !v17 )
    return 0LL;
  v17->LowPart = -100000;
  gpLockShortDelay->HighPart = -1;
  gpTmpGlobal = (void *)PALLOCMEM2(0x1000uLL);
  v18 = (void **)Win32AllocPoolNonPaged(8LL, 1836345415LL);
  gpTmpGlobalFree = v18;
  if ( !gpTmpGlobal )
    return 0LL;
  if ( v18
    && (*v18 = gpTmpGlobal, InitializeReferenceTracker())
    && (v19 = (unsigned __int8 **)Win32AllocPool(64LL, 1869834581LL), (gpTypeIsolation = v19) != 0LL)
    && (memset(v19, 0, 0x40uLL),
        (unsigned __int8)TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create()) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
