/*
 * XREFs of RIMSyncWalkRimObjList @ 0x1C0041AA8
 * Callers:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00A4228 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00A42B0 (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMSetSystemInputMode @ 0x1C00C9880 (RIMSetSystemInputMode.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00CBCC0 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C012D430 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMSetTestModeStatus @ 0x1C015B930 (RIMSetTestModeStatus.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
    qword_1C02562F8 = 0LL;
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
