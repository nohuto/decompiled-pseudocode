/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C00214C8
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01224A0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ @ 0x1C0020D40 (-vDestroyScanLookAsideList@RGNMEMOBJ@@SAXXZ.c)
 *     Win32FreePagedLookasideList @ 0x1C0021AD0 (Win32FreePagedLookasideList.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C0022010 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C002213C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C0022348 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$.c)
 *     DrvNotifySessionStateChange @ 0x1C0023190 (DrvNotifySessionStateChange.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00232C4 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00234D4 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0023520 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00BCF4C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00BDD90 (--$FreeIsolatedType@V-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00BF460 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C0150F04 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // al
  __int64 CurrentProcessWin32Process; // rax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // rbx
  int v14; // eax
  _QWORD *v15; // rbx
  int v16; // eax
  _QWORD *v17; // rbx
  int v18; // eax
  struct _ENTRY *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 *v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rbx
  int v27; // eax
  _QWORD *v28; // rbx
  void *v29; // rcx
  int v30; // eax
  _QWORD *v31; // rbx
  int v32; // eax
  _QWORD *v33; // rbx
  struct tagREMOTE_CONTEXT *v34; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v35; // rbx
  __int64 v36; // rbp
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v37; // rsi
  int v38; // eax
  struct GdiHandleManager *v39; // rcx
  void * near **v40; // rbx
  __int64 v41; // rsi
  int v42; // eax
  struct _ENTRY *v44; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v44 = 0LL;
  v2 = CurrentProcessId & 0xFFFFFFFC;
  v3 = 0LL;
  v4 = 0;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      LODWORD(v3) = GdiHandleManager::GetNextEntryIndex(v1, v3, &v44);
      if ( !(_DWORD)v3 )
        break;
      v1 = v44;
      v8 = *((_BYTE *)v44 + 14);
      if ( v8 )
      {
        if ( v8 <= 0x1Eu )
        {
          *((_DWORD *)v44 + 2) = v2 | *((_DWORD *)v44 + 2) & 1;
          ++v4;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, 0LL, v6, v7);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v4;
  }
  v10 = -1073741637;
  if ( qword_1C0251340 )
    v11 = qword_1C0251340(v1, v3);
  else
    v11 = -1073741637;
  if ( v11 >= 0 && qword_1C0251348 )
    qword_1C0251348();
  if ( gpHandleManager )
    NtGdiCloseProcess(v2, 2LL);
  if ( qword_1C0251350 )
    v12 = qword_1C0251350();
  else
    v12 = -1073741637;
  if ( v12 >= 0 )
  {
    v13 = qword_1C0251358 ? (_QWORD *)qword_1C0251358() : 0LL;
    if ( *v13 )
    {
      Win32FreePool(*v13);
      *v13 = 0LL;
    }
  }
  if ( qword_1C0251360 )
    v14 = qword_1C0251360();
  else
    v14 = -1073741637;
  if ( v14 >= 0 )
  {
    v15 = qword_1C0251368 ? (_QWORD *)qword_1C0251368() : 0LL;
    if ( *v15 )
    {
      Win32FreePool(*v15);
      *v15 = 0LL;
    }
  }
  if ( qword_1C0251370 )
    v16 = qword_1C0251370();
  else
    v16 = -1073741637;
  if ( v16 >= 0 )
  {
    v17 = qword_1C0251378 ? (_QWORD *)qword_1C0251378() : 0LL;
    if ( *v17 )
    {
      Win32FreePool(*v17);
      *v17 = 0LL;
    }
  }
  if ( qword_1C0251380 )
    v18 = qword_1C0251380();
  else
    v18 = -1073741637;
  if ( v18 >= 0 )
  {
    v19 = 0LL;
    v44 = 0LL;
    if ( qword_1C0251388 )
    {
      v20 = qword_1C0251388(&v44);
      v19 = v44;
      v21 = v20;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = 0LL;
    if ( v19 )
    {
      do
      {
        if ( *(_QWORD *)(v21 + 8 * v22) )
        {
          Win32FreePool(*(_QWORD *)(v21 + 8 * v22));
          *(_QWORD *)(v21 + 8 * v22) = 0LL;
          v19 = v44;
        }
        ++v22;
      }
      while ( v22 < (unsigned __int64)v19 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool(LastNlsTableBuffer);
    LastNlsTableBuffer = 0LL;
  }
  if ( qword_1C0251390 )
    v23 = qword_1C0251390();
  else
    v23 = -1073741637;
  if ( v23 >= 0 && qword_1C0251398 )
    qword_1C0251398();
  v24 = (__int64 *)&unk_1C0250268;
  v25 = 8LL;
  do
  {
    v26 = *v24;
    if ( *v24 )
    {
      PopThreadGuardedObject(v26 - 32);
      Win32FreePool(v26 - 32);
    }
    v24 += 4;
    --v25;
  }
  while ( v25 );
  if ( gpCachedEngbrush )
    Win32FreePool(gpCachedEngbrush);
  if ( gpCachedDbrush )
    Win32FreePool(gpCachedDbrush);
  if ( gpRGBXlate )
  {
    Win32FreePool(gpRGBXlate);
    gpRGBXlate = 0LL;
  }
  if ( qword_1C02513A0 )
    v27 = qword_1C02513A0();
  else
    v27 = -1073741637;
  if ( v27 >= 0 )
  {
    v28 = qword_1C02513A8 ? (_QWORD *)qword_1C02513A8() : 0LL;
    if ( *v28 )
    {
      Win32FreePool(*v28);
      *v28 = 0LL;
    }
  }
  v29 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v29 )
    ZwClose(v29);
  if ( qword_1C02513B0 )
    v30 = qword_1C02513B0();
  else
    v30 = -1073741637;
  if ( v30 >= 0 )
  {
    v31 = qword_1C02513B8 ? (_QWORD *)qword_1C02513B8() : 0LL;
    if ( *v31 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(*v31);
      *v31 = 0LL;
    }
  }
  if ( qword_1C02513C0 )
    v32 = qword_1C02513C0();
  else
    v32 = -1073741637;
  if ( v32 >= 0 )
  {
    v33 = qword_1C02513C8 ? (_QWORD *)qword_1C02513C8() : 0LL;
    if ( *v33 )
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<913408,3568>>(*v33);
      *v33 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers();
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C024D218 )
  {
    Win32FreePool(qword_1C024D218);
    qword_1C024D218 = 0LL;
  }
  v34 = qword_1C024D228;
  if ( qword_1C024D228 )
  {
    Win32FreePool(qword_1C024D228);
    qword_1C024D228 = 0LL;
  }
  GreCleanupRemoteAdapterContext(v34);
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    Win32FreePool(gpLockShortDelay);
    gpLockShortDelay = 0LL;
  }
  if ( gpTmpGlobal )
  {
    Win32FreePool(gpTmpGlobal);
    gpTmpGlobal = 0LL;
  }
  if ( gpTmpGlobalFree )
  {
    Win32FreePool(gpTmpGlobalFree);
    gpTmpGlobalFree = 0LL;
  }
  if ( gpTypeIsolation )
  {
    TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy();
    Win32FreePool(gpTypeIsolation);
    gpTypeIsolation = 0LL;
  }
  if ( gpReferenceTracker )
  {
    v35 = &qword_1C02473D8;
    v36 = 3LL;
    do
    {
      v37 = *v35;
      if ( *v35 )
      {
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(*v35);
        ExFreePoolWithTag(v37, 0);
      }
      v35 += 2;
      --v36;
    }
    while ( v36 );
    ExFreePoolWithTag(gpReferenceTracker, 0);
    gpReferenceTracker = 0LL;
  }
  if ( gpAdapterLuids )
  {
    Win32FreePool(gpAdapterLuids);
    gpAdapterLuids = 0LL;
  }
  if ( gpDevicesPerLuid )
  {
    Win32FreePool(gpDevicesPerLuid);
    gpDevicesPerLuid = 0LL;
  }
  if ( qword_1C02513E0 )
    v38 = qword_1C02513E0();
  else
    v38 = -1073741637;
  if ( v38 >= 0 && qword_1C02513E8 )
    qword_1C02513E8();
  MultiUserGreCleanupEngResources();
  v39 = (struct GdiHandleManager *)ghfmMemory;
  if ( ghfmMemory )
    Win32FreePool(ghfmMemory);
  ghfmMemory = 0LL;
  if ( gpHandleManager )
  {
    GdiHandleManager::Destroy(v39);
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
  v40 = &pHmgLookAsideList;
  v41 = 31LL;
  do
  {
    if ( *v40 )
    {
      Win32FreePagedLookasideList();
      *v40 = 0LL;
    }
    ++v40;
    --v41;
  }
  while ( v41 );
  if ( qword_1C02513F0 )
    v42 = qword_1C02513F0();
  else
    v42 = -1073741637;
  if ( v42 >= 0 && qword_1C02513F8 )
    qword_1C02513F8();
  if ( qword_1C0251260 )
    v10 = qword_1C0251260();
  if ( v10 >= 0 && qword_1C0251268 )
    qword_1C0251268();
  return 1LL;
}
