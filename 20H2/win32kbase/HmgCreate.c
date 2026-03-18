/*
 * XREFs of HmgCreate @ 0x1C007227C
 * Callers:
 *     InitializeGre @ 0x1C0293010 (InitializeGre.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0040C10 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C005E4B4 (GreCreateSemaphoreInternal.c)
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     Win32CreateSection @ 0x1C0071C38 (Win32CreateSection.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C00726A4 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C007279C (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C0073E24 (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C0073E98 (-HmgrStacksInit@@YAXXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C0074010 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     GreCreateFastMutex @ 0x1C007423C (GreCreateFastMutex.c)
 *     bLoadProcessHandleQuota @ 0x1C0074278 (bLoadProcessHandleQuota.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C0085700 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rdi
  struct _ENTRY *v12; // rdx
  unsigned int v13; // ecx
  GdiHandleManager *v14; // rcx
  int v15; // ebx
  union _LARGE_INTEGER *v16; // rax
  void **v17; // rax
  unsigned __int8 **v18; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+28h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+30h] BYREF
  int v26; // [rsp+A8h] [rbp+38h]
  int v27; // [rsp+ACh] [rbp+3Ch]

  v0 = (unsigned int)qword_1C024F3D8;
  if ( qword_1C024F3D8 )
    v0 = qword_1C024F3D8();
  gMaxGdiHandleCount = v0;
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    gProcessHandleQuota = 10000;
  v1 = 0x10000LL;
  if ( gMaxGdiHandleCount < 0x10000 )
    v1 = gMaxGdiHandleCount;
  if ( qword_1C024F618 )
    qword_1C024F618();
  ghsemHmgr = (PERESOURCE)GreCreateSemaphoreInternal(0);
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
  v27 = 0;
  v26 = 1573528;
  if ( (int)Win32CreateSection(&gpHmgrSharedHandleSection, 6LL) < 0 )
    return 0LL;
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(gpHmgrSharedHandleSection, &gpGdiSharedMemory, &ViewSize) < 0 )
    return 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  if ( (int)MmMapViewOfSection(
              gpHmgrSharedHandleSection,
              CurrentProcess,
              &v23,
              0LL,
              4096LL,
              &v22,
              &v21,
              2,
              0x400000,
              4,
              ViewSize) < 0 )
    return 0LL;
  RegionSize = 24 * v1;
  BaseAddress = (PVOID)v23;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v23 + 1572864);
  RegionSize = 664LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess, v23);
  gpentHmgr = (struct _ENTRY *)gpGdiSharedMemory;
  gpGdiDevCaps = (struct _DEVCAPS *)((char *)gpGdiSharedMemory + 1572864);
  gpHandleManager = GdiHandleManager::Create(v13, v12, v1);
  if ( !gpHandleManager )
    return 0LL;
  v15 = 0;
  while ( 1 )
  {
    LODWORD(v23) = 0;
    if ( !GdiHandleManager::AcquireEntryIndex(v14, (unsigned int *)&v23) )
      break;
    if ( (unsigned int)++v15 >= 0xA )
      goto LABEL_27;
  }
  GdiHandleManager::Destroy(v14);
  gpHandleManager = 0LL;
LABEL_27:
  if ( !gpHandleManager )
    return 0LL;
  gahStockObjects = (void **)((char *)gpGdiSharedMemory + 1573040);
  gahStockObjects96 = (void **)((char *)gpGdiSharedMemory + 1573216);
  gahDpiDepDefaultGuiFonts = (void **)((char *)gpGdiSharedMemory + 1573392);
  HmgrStacksInit();
  v16 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged(8LL, 0x6C6D6847u);
  gpLockShortDelay = v16;
  if ( !v16 )
    return 0LL;
  v16->LowPart = -100000;
  gpLockShortDelay->HighPart = -1;
  gpTmpGlobal = PALLOCMEM2(0x1000uLL, 1836345415LL, 0);
  v17 = (void **)Win32AllocPoolNonPaged(8LL, 0x6D746847u);
  gpTmpGlobalFree = v17;
  if ( !gpTmpGlobal )
    return 0LL;
  if ( v17
    && (*v17 = gpTmpGlobal, InitializeReferenceTracker())
    && (v18 = (unsigned __int8 **)Win32AllocPool(64LL, 0x6F736955u), (gpTypeIsolation = v18) != 0LL)
    && (memset(v18, 0, 0x40uLL),
        (unsigned __int8)TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create()) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
