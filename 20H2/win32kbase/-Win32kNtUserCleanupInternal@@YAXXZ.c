/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008445C
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0084168 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C003C900 (Win32FreeToPagedLookasideList.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32FreePagedLookasideList @ 0x1C00851C0 (Win32FreePagedLookasideList.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0085208 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     IsFreeSMSSupported @ 0x1C0085288 (IsFreeSMSSupported.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00855EC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     IsFreeMessageListSupported @ 0x1C00A1834 (IsFreeMessageListSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // esi
  int v4; // eax
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // eax
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // [rsp+50h] [rbp+20h] BYREF
  void *v34; // [rsp+58h] [rbp+28h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  v3 = -1073741637;
  if ( qword_1C024FA40 )
    v4 = qword_1C024FA40();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C024FA48 )
    qword_1C024FA48();
  if ( gpvwplHungRedraw )
  {
    Win32FreePool((__int64)gpvwplHungRedraw);
    gpvwplHungRedraw = 0LL;
  }
  if ( qword_1C024FA50 )
    v5 = qword_1C024FA50();
  else
    v5 = -1073741637;
  if ( v5 >= 0 )
  {
    v6 = 0LL;
    v33 = 0LL;
    if ( qword_1C024FA58 )
    {
      qword_1C024FA58(&v33);
      v6 = v33;
    }
    v7 = *v6;
    if ( v7 )
    {
      Win32FreePool(v7);
      *v33 = 0LL;
    }
  }
  if ( qword_1C024FA60 )
    v8 = qword_1C024FA60();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = 0LL;
    v33 = 0LL;
    if ( qword_1C024FA68 )
    {
      qword_1C024FA68(&v33);
      v9 = v33;
    }
    v10 = *v9;
    if ( v10 )
    {
      Win32FreePool(v10);
      *v33 = 0LL;
    }
  }
  if ( qword_1C024FA70 )
    v11 = qword_1C024FA70();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    v12 = 0LL;
    v33 = 0LL;
    if ( qword_1C024FA78 )
    {
      qword_1C024FA78(&v33);
      v12 = v33;
    }
    v13 = *v12;
    if ( v13 )
    {
      Win32FreePool(v13);
      *v33 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v25 = gtmrListHead - 72;
    if ( qword_1C024FA80 )
      v26 = qword_1C024FA80();
    else
      v26 = -1073741637;
    if ( v26 >= 0 && qword_1C024FA88 )
      qword_1C024FA88(v25);
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    Win32FreePool((__int64)gptmrWD);
    gptmrWD = 0LL;
  }
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    Win32FreePool((__int64)gptmrMaster);
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    Win32FreePool(gpClipFormatExceptionList);
  if ( qword_1C024FAA0 )
    v14 = qword_1C024FAA0();
  else
    v14 = -1073741637;
  if ( v14 >= 0 )
  {
    if ( qword_1C024FAA8 )
    {
      qword_1C024FAA8(&gWndsMonitorSnapshotHead);
      if ( qword_1C024FAA8 )
        qword_1C024FAA8(&gRemoteWndsMonitorSnapshotHead);
    }
  }
  if ( qword_1C02508E8 )
    v15 = qword_1C02508E8();
  else
    v15 = -1073741637;
  if ( v15 >= 0 && qword_1C02508F0 )
    qword_1C02508F0();
  if ( gpEventPnPWainting )
  {
    Win32FreePool(gpEventPnPWainting);
    gpEventPnPWainting = 0LL;
  }
  LODWORD(v33) = 0;
  v34 = 0LL;
  if ( gpresUser )
  {
    while ( (unsigned int)CSTPop((unsigned int *)&v33, &v34) )
    {
      if ( (_DWORD)v33 == 2 || (_DWORD)v33 == 4 )
      {
        v27 = v34;
        v28 = *((_QWORD *)v34 + 1);
        if ( v28 )
        {
          Win32FreePool(v28);
          v27[1] = 0LL;
        }
      }
    }
  }
  gfRecordPnpNotification = 0;
  if ( gpPnpNotificationRecord )
  {
    Win32FreePool((__int64)gpPnpNotificationRecord);
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
    Win32FreePool((__int64)gpevtVideoInitialized);
    gpevtVideoInitialized = 0LL;
  }
  if ( gpevtQueueReadyForCallout )
  {
    Win32FreePool((__int64)gpevtQueueReadyForCallout);
    gpevtQueueReadyForCallout = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    Win32FreePool((__int64)gpevtVideoportCallout);
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    Win32FreePool(gpevtRitReadyForCallOut);
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( gpevtMonitorPowerWaiter )
  {
    Win32FreePool((__int64)gpevtMonitorPowerWaiter);
    gpevtMonitorPowerWaiter = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    Win32FreePool((__int64)gpsemSwitchInProgressWaiters);
    gpsemSwitchInProgressWaiters = 0LL;
  }
  if ( gpsemDITHitTestWaiters )
  {
    Win32FreePool((__int64)gpsemDITHitTestWaiters);
    gpsemDITHitTestWaiters = 0LL;
  }
  if ( gpsemDITLuidHitTestWaiters )
  {
    Win32FreePool(gpsemDITLuidHitTestWaiters);
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( qword_1C024FAD0 )
    v16 = qword_1C024FAD0();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C024FAD8 )
    qword_1C024FAD8();
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
    Win32FreePool((__int64)gpevtSynthesizedContainerMouseInput);
    gpevtSynthesizedContainerMouseInput = 0LL;
  }
  GetDomainLockRef(17LL, v0, v1, v2);
  v17 = (_QWORD *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v29 = (__int64)v17;
      v17 = (_QWORD *)*v17;
      v30 = *(_QWORD *)(v29 + 56);
      if ( v30 )
      {
        Win32FreePool(v30);
        *(_QWORD *)(v29 + 56) = 0LL;
      }
      v31 = *(_QWORD *)(v29 + 40);
      if ( v31 )
      {
        Win32FreePool(v31);
        *(_QWORD *)(v29 + 40) = 0LL;
      }
      RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v29 + 16));
      Win32FreePool(v29);
    }
    while ( v17 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v21 = gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v32 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v32 + 8) = &gsmsList;
        if ( qword_1C024FAE8 )
          qword_1C024FAE8(v21, 0LL);
      }
    }
    qword_1C024CB20 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( qword_1C024FAF0 )
    v22 = qword_1C024FAF0();
  else
    v22 = -1073741637;
  if ( v22 >= 0 )
  {
    v23 = 0LL;
    v33 = 0LL;
    if ( qword_1C024FAF8 )
    {
      qword_1C024FAF8(&v33);
      v23 = v33;
    }
    if ( *v23 )
    {
      Win32FreePagedLookasideList();
      *v33 = 0LL;
    }
  }
  if ( qword_1C024E9E8 )
  {
    if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C0250048 )
      qword_1C0250048(qword_1C024E9E8 + 24);
    Win32FreeToPagedLookasideList((__int64)QLookaside, qword_1C024E9E8);
    qword_1C024E9E8 = 0LL;
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
    HMAssignmentUnlock(&gspklGlobalActive, v18, v19, v20);
  if ( gspklWinstaLessSessionLayouts )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( gspklBaseLayout )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  while ( 1 )
  {
    v24 = gpwtiFirst;
    if ( !gpwtiFirst )
      break;
    gpwtiFirst = *(_QWORD *)gpwtiFirst;
    Win32FreePool(v24);
  }
  if ( qword_1C024CB60 )
    Win32FreePool(qword_1C024CB60);
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
    Win32FreePool((__int64)gpPowerRequestMutex);
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
  if ( qword_1C024FC50 )
    v3 = qword_1C024FC50();
  if ( v3 >= 0 && qword_1C024FC58 )
    qword_1C024FC58();
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
    ExFreePoolWithTag(DispBroker::DispBrokerClient::s_pSessionBroker, 0x44535042u);
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
