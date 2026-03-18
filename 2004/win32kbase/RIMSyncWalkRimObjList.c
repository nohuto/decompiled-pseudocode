/*
 * XREFs of RIMSyncWalkRimObjList @ 0x1C004E4F0
 * Callers:
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C004E3E0 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C004E468 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMSetSystemInputMode @ 0x1C00C9F00 (RIMSetSystemInputMode.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00CC570 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0127440 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMSetTestModeStatus @ 0x1C01555E0 (RIMSetTestModeStatus.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RIMSyncWalkRimObjList(int a1, __int64 a2, void (__fastcall *a3)(_QWORD *, __int64))
{
  _QWORD **v5; // rdi
  __int64 v6; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rax
  struct _LIST_ENTRY *v9; // rsi
  _QWORD **v10; // r14
  __int64 v11; // rbp
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 v15; // [rsp+78h] [rbp+20h]

  if ( gbRIMInitialized )
  {
    v5 = 0LL;
    v15 = 0LL;
    LODWORD(v6) = 0;
    RIMLockExclusive(&gObListLock);
    Flink = gObRimList.Flink;
    if ( gObRimList.Flink != &gObRimList )
    {
      do
      {
        Flink = Flink->Flink;
        LODWORD(v6) = v6 + 1;
      }
      while ( Flink != &gObRimList );
      if ( (_DWORD)v6 )
      {
        v8 = Win32AllocPool(8LL * (unsigned int)v6, 1886221394LL);
        v9 = gObRimList.Flink;
        v5 = (_QWORD **)v8;
        v15 = v8;
        v6 = 0LL;
        while ( v9 != &gObRimList )
        {
          if ( ObReferenceObjectByPointer(&v9[-1], 3u, ExRawInputManagerObjectType, 0) >= 0 )
          {
            v5[v6] = &v9[-1].Flink;
            v6 = (unsigned int)(v6 + 1);
          }
          v9 = v9->Flink;
        }
      }
    }
    qword_1C0250368 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (_DWORD)v6 )
    {
      v10 = v5;
      v11 = (unsigned int)v6;
      do
      {
        v12 = *v10;
        v13 = (__int64)(*v10 + 71);
        if ( a1 == 1 )
        {
          RIMLockExclusive(v12 + 13);
          RIMLockExclusive(v13);
        }
        a3(v12, a2);
        if ( a1 == 1 )
        {
          *(_QWORD *)(v13 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v13, 0LL);
          KeLeaveCriticalRegion();
          v12[14] = 0LL;
          ExReleasePushLockExclusiveEx(v12 + 13, 0LL);
          KeLeaveCriticalRegion();
        }
        ObfDereferenceObject(v12);
        ++v10;
        --v11;
      }
      while ( v11 );
      v5 = (_QWORD **)v15;
    }
    if ( v5 )
      Win32FreePool(v5);
  }
}
