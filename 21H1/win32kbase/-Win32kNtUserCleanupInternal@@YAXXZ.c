/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C000BE2C
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C000BB40 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     Win32FreePagedLookasideList @ 0x1C000CB90 (Win32FreePagedLookasideList.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C000CBD8 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     IsFreeSMSSupported @ 0x1C000CC58 (IsFreeSMSSupported.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C000CFBC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     IsFreeMessageListSupported @ 0x1C00303B4 (IsFreeMessageListSupported.c)
 *     HMAssignmentUnlock @ 0x1C0073400 (HMAssignmentUnlock.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     Win32FreeToPagedLookasideList @ 0x1C008BD10 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  int v0; // esi
  int v1; // eax
  int v2; // eax
  __int64 *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // rbx
  void *v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // [rsp+50h] [rbp+20h] BYREF
  void *v28; // [rsp+58h] [rbp+28h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  v0 = -1073741637;
  if ( qword_1C0257A00 )
    v1 = qword_1C0257A00();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0257A08 )
    qword_1C0257A08();
  if ( gpvwplHungRedraw )
  {
    Win32FreePool(gpvwplHungRedraw);
    gpvwplHungRedraw = 0LL;
  }
  if ( qword_1C0257A10 )
    v2 = qword_1C0257A10();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    v3 = 0LL;
    v27 = 0LL;
    if ( qword_1C0257A18 )
    {
      qword_1C0257A18(&v27);
      v3 = v27;
    }
    v4 = *v3;
    if ( v4 )
    {
      Win32FreePool(v4);
      *v27 = 0LL;
    }
  }
  if ( qword_1C0257A20 )
    v5 = qword_1C0257A20();
  else
    v5 = -1073741637;
  if ( v5 >= 0 )
  {
    v6 = 0LL;
    v27 = 0LL;
    if ( qword_1C0257A28 )
    {
      qword_1C0257A28(&v27);
      v6 = v27;
    }
    v7 = *v6;
    if ( v7 )
    {
      Win32FreePool(v7);
      *v27 = 0LL;
    }
  }
  if ( qword_1C0257A30 )
    v8 = qword_1C0257A30();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = 0LL;
    v27 = 0LL;
    if ( qword_1C0257A38 )
    {
      qword_1C0257A38(&v27);
      v9 = v27;
    }
    v10 = *v9;
    if ( v10 )
    {
      Win32FreePool(v10);
      *v27 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v19 = gtmrListHead - 72;
    if ( qword_1C0257A40 )
      v20 = qword_1C0257A40();
    else
      v20 = -1073741637;
    if ( v20 >= 0 && qword_1C0257A48 )
      qword_1C0257A48(v19);
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    Win32FreePool(gptmrWD);
    gptmrWD = 0LL;
  }
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    Win32FreePool(gptmrMaster);
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    Win32FreePool(gpClipFormatExceptionList);
  if ( qword_1C0257A60 )
    v11 = qword_1C0257A60();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    if ( qword_1C0257A68 )
    {
      qword_1C0257A68(&gWndsMonitorSnapshotHead);
      if ( qword_1C0257A68 )
        qword_1C0257A68(&gRemoteWndsMonitorSnapshotHead);
    }
  }
  if ( qword_1C02588A8 )
    v12 = qword_1C02588A8();
  else
    v12 = -1073741637;
  if ( v12 >= 0 && qword_1C02588B0 )
    qword_1C02588B0();
  if ( gpEventPnPWainting )
  {
    Win32FreePool(gpEventPnPWainting);
    gpEventPnPWainting = 0LL;
  }
  LODWORD(v27) = 0;
  v28 = 0LL;
  if ( gpresUser )
  {
    while ( (unsigned int)CSTPop((unsigned int *)&v27, &v28) )
    {
      if ( (_DWORD)v27 == 2 || (_DWORD)v27 == 4 )
      {
        v21 = v28;
        v22 = *((_QWORD *)v28 + 1);
        if ( v22 )
        {
          Win32FreePool(v22);
          v21[1] = 0LL;
        }
      }
    }
  }
  gfRecordPnpNotification = 0;
  if ( gpPnpNotificationRecord )
  {
    Win32FreePool(gpPnpNotificationRecord);
    gpPnpNotificationRecord = 0LL;
  }
  if ( gpresDitTouchInjection )
  {
    ExDeleteResourceLite(gpresDitTouchInjection);
    ExFreePoolWithTag(gpresDitTouchInjection, 0);
  }
  if ( gpresDitMouseInjectionFlush )
  {
    ExDeleteResourceLite(gpresDitMouseInjectionFlush);
    ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
  }
  if ( gpresDitCompositionInputSinkQuery )
  {
    ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
    ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
  }
  if ( gpHidInterfaceGuid )
  {
    Win32FreePool(gpHidInterfaceGuid);
    gpHidInterfaceGuid = 0LL;
  }
  if ( gThinwireFileObject )
    ObfDereferenceObject(gThinwireFileObject);
  if ( gVideoFileObject )
    ObfDereferenceObject(gVideoFileObject);
  if ( gpRemoteBeepDevice )
    ObfDereferenceObject(gpRemoteBeepDevice);
  if ( gpresPTPEventQueue )
  {
    ExDeleteResourceLite(gpresPTPEventQueue);
    ExFreePoolWithTag(gpresPTPEventQueue, 0);
    gpresPTPEventQueue = 0LL;
  }
  if ( gpEventDiconnectDesktop )
  {
    Win32FreePool(gpEventDiconnectDesktop);
    gpEventDiconnectDesktop = 0LL;
  }
  if ( gpevtDesktopDestroyed )
  {
    Win32FreePool(gpevtDesktopDestroyed);
    gpevtDesktopDestroyed = 0LL;
  }
  if ( gpevtVideoInitialized )
  {
    Win32FreePool(gpevtVideoInitialized);
    gpevtVideoInitialized = 0LL;
  }
  if ( gpevtQueueReadyForCallout )
  {
    Win32FreePool(gpevtQueueReadyForCallout);
    gpevtQueueReadyForCallout = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    Win32FreePool(gpevtVideoportCallout);
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    Win32FreePool(gpevtRitReadyForCallOut);
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( gpevtMonitorPowerWaiter )
  {
    Win32FreePool(gpevtMonitorPowerWaiter);
    gpevtMonitorPowerWaiter = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    Win32FreePool(gpsemSwitchInProgressWaiters);
    gpsemSwitchInProgressWaiters = 0LL;
  }
  if ( gpsemDITHitTestWaiters )
  {
    Win32FreePool(gpsemDITHitTestWaiters);
    gpsemDITHitTestWaiters = 0LL;
  }
  if ( gpsemDITLuidHitTestWaiters )
  {
    Win32FreePool(gpsemDITLuidHitTestWaiters);
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( qword_1C0257A90 )
    v13 = qword_1C0257A90();
  else
    v13 = -1073741637;
  if ( v13 >= 0 && qword_1C0257A98 )
    qword_1C0257A98();
  if ( gpevtPTPOperation )
  {
    Win32FreePool(gpevtPTPOperation);
    gpevtPTPOperation = 0LL;
  }
  if ( UserAtomTableHandle )
  {
    RtlDestroyAtomTable(UserAtomTableHandle);
    UserAtomTableHandle = 0LL;
  }
  if ( UserLibmgmtAtomTableHandle )
  {
    RtlDestroyAtomTable(UserLibmgmtAtomTableHandle);
    UserLibmgmtAtomTableHandle = 0LL;
  }
  if ( gpevtSynthesizedContainerMouseInput )
  {
    Win32FreePool(gpevtSynthesizedContainerMouseInput);
    gpevtSynthesizedContainerMouseInput = 0LL;
  }
  GetDomainLockRef(17LL);
  v14 = (_QWORD *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v23 = v14;
      v14 = (_QWORD *)*v14;
      v24 = v23[7];
      if ( v24 )
      {
        Win32FreePool(v24);
        v23[7] = 0LL;
      }
      v25 = v23[5];
      if ( v25 )
      {
        Win32FreePool(v25);
        v23[5] = 0LL;
      }
      RtlDestroyAtomTable((PRTL_ATOM_TABLE)v23[2]);
      Win32FreePool(v23);
    }
    while ( v14 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v15 = gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v26 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v26 + 8) = &gsmsList;
        if ( qword_1C0257AA8 )
          qword_1C0257AA8(v15, 0LL);
      }
    }
    qword_1C0254AB0 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( qword_1C0257AB0 )
    v16 = qword_1C0257AB0();
  else
    v16 = -1073741637;
  if ( v16 >= 0 )
  {
    v17 = 0LL;
    v27 = 0LL;
    if ( qword_1C0257AB8 )
    {
      qword_1C0257AB8(&v27);
      v17 = v27;
    }
    if ( *v17 )
    {
      Win32FreePagedLookasideList();
      *v27 = 0LL;
    }
  }
  if ( qword_1C02569C8 )
  {
    if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C0258008 )
      qword_1C0258008(qword_1C02569C8 + 24);
    Win32FreeToPagedLookasideList(QLookaside, qword_1C02569C8);
    qword_1C02569C8 = 0LL;
  }
  if ( QLookaside )
  {
    Win32FreePagedLookasideList();
    QLookaside = 0LL;
  }
  if ( QEntryLookaside )
  {
    Win32FreePagedLookasideList();
    QEntryLookaside = 0LL;
  }
  if ( gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  if ( gspklWinstaLessSessionLayouts )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( gspklBaseLayout )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  while ( 1 )
  {
    v18 = gpwtiFirst;
    if ( !gpwtiFirst )
      break;
    gpwtiFirst = *(_QWORD *)gpwtiFirst;
    Win32FreePool(v18);
  }
  if ( qword_1C0254AF0 )
    Win32FreePool(qword_1C0254AF0);
  if ( gpsdInitWinSta )
  {
    Win32FreePool(gpsdInitWinSta);
    gpsdInitWinSta = 0LL;
  }
  if ( gpHandleFlagsMutex )
  {
    ExFreePoolWithTag(gpHandleFlagsMutex, 0);
    gpHandleFlagsMutex = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    Win32FreePool(gpPowerRequestMutex);
    gpPowerRequestMutex = 0LL;
  }
  if ( gpresRender )
  {
    ExDeleteResourceLite(gpresRender);
    ExFreePoolWithTag(gpresRender, 0);
    gpresRender = 0LL;
  }
  if ( gpRemoteSessionOcclusionEvent )
  {
    ObfDereferenceObject(gpRemoteSessionOcclusionEvent);
    gpRemoteSessionOcclusionEvent = 0LL;
  }
  if ( qword_1C0257C10 )
    v0 = qword_1C0257C10();
  if ( v0 >= 0 && qword_1C0257C18 )
    qword_1C0257C18();
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
    ExFreePoolWithTag(DispBroker::DispBrokerClient::s_pSessionBroker, 0x44535042u);
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
