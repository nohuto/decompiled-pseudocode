/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C0084BB8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0018DF0 (--$FreeIsolatedType@V-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C001A4C0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     PopThreadGuardedObject @ 0x1C003E4B0 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C0084430 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     Win32FreePagedLookasideList @ 0x1C00851C0 (Win32FreePagedLookasideList.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C0085700 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C008582C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C0085A38 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$.c)
 *     DrvNotifySessionStateChange @ 0x1C0086880 (DrvNotifySessionStateChange.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00869B4 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C0086BC4 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0086C10 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C014E954 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // edi
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 CurrentProcessWin32Process; // rax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rbx
  int v12; // eax
  __int64 *v13; // rbx
  int v14; // eax
  __int64 *v15; // rbx
  int v16; // eax
  struct _ENTRY *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  int v21; // eax
  __int64 *v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rbx
  int v25; // eax
  __int64 *v26; // rbx
  void *v27; // rcx
  int v28; // eax
  __int64 *v29; // rbx
  int v30; // eax
  __int64 *v31; // rbx
  struct tagREMOTE_CONTEXT *v32; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v33; // rbx
  __int64 v34; // rbp
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v35; // rsi
  int v36; // eax
  struct GdiHandleManager *v37; // rcx
  void * near **v38; // rbx
  __int64 v39; // rsi
  int v40; // eax
  struct _ENTRY *v42; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v42 = 0LL;
  v2 = CurrentProcessId & 0xFFFFFFFC;
  v3 = 0LL;
  v4 = 0;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      LODWORD(v3) = GdiHandleManager::GetNextEntryIndex(v1, v3, &v42);
      if ( !(_DWORD)v3 )
        break;
      v1 = v42;
      v6 = *((_BYTE *)v42 + 14);
      if ( v6 )
      {
        if ( v6 <= 0x1Eu )
        {
          *((_DWORD *)v42 + 2) = v2 | *((_DWORD *)v42 + 2) & 1;
          ++v4;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v4;
  }
  v8 = -1073741637;
  if ( qword_1C024F340 )
    v9 = qword_1C024F340(v1, v3);
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C024F348 )
    qword_1C024F348();
  if ( gpHandleManager )
    NtGdiCloseProcess(v2, 2u);
  if ( qword_1C024F350 )
    v10 = qword_1C024F350();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    v11 = qword_1C024F358 ? (__int64 *)qword_1C024F358() : 0LL;
    if ( *v11 )
    {
      Win32FreePool(*v11);
      *v11 = 0LL;
    }
  }
  if ( qword_1C024F360 )
    v12 = qword_1C024F360();
  else
    v12 = -1073741637;
  if ( v12 >= 0 )
  {
    v13 = qword_1C024F368 ? (__int64 *)qword_1C024F368() : 0LL;
    if ( *v13 )
    {
      Win32FreePool(*v13);
      *v13 = 0LL;
    }
  }
  if ( qword_1C024F370 )
    v14 = qword_1C024F370();
  else
    v14 = -1073741637;
  if ( v14 >= 0 )
  {
    v15 = qword_1C024F378 ? (__int64 *)qword_1C024F378() : 0LL;
    if ( *v15 )
    {
      Win32FreePool(*v15);
      *v15 = 0LL;
    }
  }
  if ( qword_1C024F380 )
    v16 = qword_1C024F380();
  else
    v16 = -1073741637;
  if ( v16 >= 0 )
  {
    v17 = 0LL;
    v42 = 0LL;
    if ( qword_1C024F388 )
    {
      v18 = qword_1C024F388(&v42);
      v17 = v42;
      v19 = v18;
    }
    else
    {
      v19 = 0LL;
    }
    v20 = 0LL;
    if ( v17 )
    {
      do
      {
        if ( *(_QWORD *)(v19 + 8 * v20) )
        {
          Win32FreePool(*(_QWORD *)(v19 + 8 * v20));
          *(_QWORD *)(v19 + 8 * v20) = 0LL;
          v17 = v42;
        }
        ++v20;
      }
      while ( v20 < (unsigned __int64)v17 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool(LastNlsTableBuffer);
    LastNlsTableBuffer = 0LL;
  }
  if ( qword_1C024F390 )
    v21 = qword_1C024F390();
  else
    v21 = -1073741637;
  if ( v21 >= 0 && qword_1C024F398 )
    qword_1C024F398();
  v22 = (__int64 *)&unk_1C024E268;
  v23 = 8LL;
  do
  {
    v24 = *v22;
    if ( *v22 )
    {
      PopThreadGuardedObject((_QWORD *)(v24 - 32));
      Win32FreePool(v24 - 32);
    }
    v22 += 4;
    --v23;
  }
  while ( v23 );
  if ( gpCachedEngbrush )
    Win32FreePool((__int64)gpCachedEngbrush);
  if ( gpCachedDbrush )
    Win32FreePool((__int64)gpCachedDbrush);
  if ( gpRGBXlate )
  {
    Win32FreePool((__int64)gpRGBXlate);
    gpRGBXlate = 0LL;
  }
  if ( qword_1C024F3A0 )
    v25 = qword_1C024F3A0();
  else
    v25 = -1073741637;
  if ( v25 >= 0 )
  {
    v26 = qword_1C024F3A8 ? (__int64 *)qword_1C024F3A8() : 0LL;
    if ( *v26 )
    {
      Win32FreePool(*v26);
      *v26 = 0LL;
    }
  }
  v27 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v27 )
    ZwClose(v27);
  if ( qword_1C024F3B0 )
    v28 = qword_1C024F3B0();
  else
    v28 = -1073741637;
  if ( v28 >= 0 )
  {
    v29 = qword_1C024F3B8 ? (__int64 *)qword_1C024F3B8() : 0LL;
    if ( *v29 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(*v29);
      *v29 = 0LL;
    }
  }
  if ( qword_1C024F3C0 )
    v30 = qword_1C024F3C0();
  else
    v30 = -1073741637;
  if ( v30 >= 0 )
  {
    v31 = qword_1C024F3C8 ? (__int64 *)qword_1C024F3C8() : 0LL;
    if ( *v31 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(*v31);
      *v31 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers();
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C024B228 )
  {
    Win32FreePool((__int64)qword_1C024B228);
    qword_1C024B228 = 0LL;
  }
  v32 = qword_1C024B238;
  if ( qword_1C024B238 )
  {
    Win32FreePool((__int64)qword_1C024B238);
    qword_1C024B238 = 0LL;
  }
  GreCleanupRemoteAdapterContext(v32);
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    Win32FreePool((__int64)gpLockShortDelay);
    gpLockShortDelay = 0LL;
  }
  if ( gpTmpGlobal )
  {
    Win32FreePool((__int64)gpTmpGlobal);
    gpTmpGlobal = 0LL;
  }
  if ( gpTmpGlobalFree )
  {
    Win32FreePool((__int64)gpTmpGlobalFree);
    gpTmpGlobalFree = 0LL;
  }
  if ( gpTypeIsolation )
  {
    TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy();
    Win32FreePool((__int64)gpTypeIsolation);
    gpTypeIsolation = 0LL;
  }
  if ( gpReferenceTracker )
  {
    v33 = &qword_1C02453D8;
    v34 = 3LL;
    do
    {
      v35 = *v33;
      if ( *v33 )
      {
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(*v33);
        ExFreePoolWithTag(v35, 0);
      }
      v33 += 2;
      --v34;
    }
    while ( v34 );
    ExFreePoolWithTag(gpReferenceTracker, 0);
    gpReferenceTracker = 0LL;
  }
  if ( gpAdapterLuids )
  {
    Win32FreePool((__int64)gpAdapterLuids);
    gpAdapterLuids = 0LL;
  }
  if ( gpDevicesPerLuid )
  {
    Win32FreePool((__int64)gpDevicesPerLuid);
    gpDevicesPerLuid = 0LL;
  }
  if ( qword_1C024F3E0 )
    v36 = qword_1C024F3E0();
  else
    v36 = -1073741637;
  if ( v36 >= 0 && qword_1C024F3E8 )
    qword_1C024F3E8();
  MultiUserGreCleanupEngResources();
  v37 = (struct GdiHandleManager *)ghfmMemory;
  if ( ghfmMemory )
    Win32FreePool((__int64)ghfmMemory);
  ghfmMemory = 0LL;
  if ( gpHandleManager )
  {
    GdiHandleManager::Destroy(v37);
    gpHandleManager = 0LL;
  }
  if ( gpGdiSharedMemory )
  {
    MmUnmapViewInSessionSpace(gpGdiSharedMemory);
    gpGdiSharedMemory = 0LL;
  }
  if ( gpHmgrSharedHandleSection )
  {
    ObfDereferenceObject(gpHmgrSharedHandleSection);
    gpHmgrSharedHandleSection = 0LL;
  }
  RGNMEMOBJ::vDestroyScanLookAsideList();
  v38 = &pHmgLookAsideList;
  v39 = 31LL;
  do
  {
    if ( *v38 )
    {
      Win32FreePagedLookasideList();
      *v38 = 0LL;
    }
    ++v38;
    --v39;
  }
  while ( v39 );
  if ( qword_1C024F3F0 )
    v40 = qword_1C024F3F0();
  else
    v40 = -1073741637;
  if ( v40 >= 0 && qword_1C024F3F8 )
    qword_1C024F3F8();
  if ( qword_1C024F260 )
    v8 = qword_1C024F260();
  if ( v8 >= 0 && qword_1C024F268 )
    qword_1C024F268();
  return 1LL;
}
