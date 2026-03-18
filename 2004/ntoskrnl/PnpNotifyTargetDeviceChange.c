/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x140648470
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x1406475B0 (PnpProcessCustomDeviceEvent.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14072060C (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x140730C48 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14089F180 (PnpCancelRemoveOnHungDevices.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1408B5F40 (PiSendTargetDeviceRemoveCanceledNotification.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140202160 (PsGetServerSiloServiceSessionId.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x140273EF0 (KeAcquireGuardedMutex.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x1406459B4 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140648974 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x14072C884 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  _OWORD *v14; // rdx
  int v15; // ebx
  int v16; // eax
  GUID v17; // xmm0
  PVOID **v18; // r15
  int v19; // ebx
  PVOID **v20; // r12
  __int64 v21; // rax
  struct _KTHREAD *v22; // rax
  char v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+24h] [rbp-54h] BYREF
  int SessionIdFromPDO; // [rsp+28h] [rbp-50h]
  _QWORD *v26; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]
  _QWORD *v28; // [rsp+40h] [rbp-38h]
  _OWORD v29[2]; // [rsp+48h] [rbp-30h] BYREF

  v28 = a4;
  v6 = 0;
  v24 = 0;
  SessionIdFromPDO = -1;
  memset(v29, 0, sizeof(v29));
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v17 = *Source1;
    LODWORD(v29[0]) = 2097153;
    *(GUID *)((char *)v29 + 4) = v17;
  }
  KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v9 = *(_QWORD **)(v8 + 480);
    v23 = 1;
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 472);
    v23 = 0;
  }
  v10 = (_QWORD *)(v8 + 472);
  v26 = v10;
  while ( v9 != v10 )
  {
    P = v9;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromPDO = IopGetSessionIdFromPDO(Object);
    ++*((_WORD *)v9 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v9 + 5) == SessionIdFromPDO) && !*((_BYTE *)v9 + 58) )
    {
      if ( a3 )
      {
        *(_QWORD *)(a3 + 24) = v9[10];
        v14 = (_OWORD *)a3;
      }
      else
      {
        *((_QWORD *)&v29[1] + 1) = v9[10];
        v14 = v29;
      }
      v15 = PnpNotifyDriverCallback(v9, v14, &v24);
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KeLeaveCriticalRegion();
      v16 = v24;
      if ( v15 < 0 )
        v16 = 0;
      v24 = v16;
      if ( v16 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v28 )
          *v28 = v9[6];
        v18 = (PVOID **)v9;
        *(GUID *)((char *)v29 + 4) = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
        do
        {
          v19 = -1;
          v20 = (PVOID **)v9;
          v21 = PsGetCurrentServerSilo();
          if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(v21) )
            v19 = IopGetSessionIdFromPDO(Object);
          ++*((_WORD *)v9 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
          if ( (v19 == -1 || *((_DWORD *)v9 + 5) == v19) && !*((_BYTE *)v9 + 58) )
          {
            *((_QWORD *)&v29[1] + 1) = v9[10];
            PnpNotifyDriverCallback(v9, v29, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v9[9]);
          KeLeaveCriticalRegion();
          KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
          v9 = (_QWORD *)v9[1];
          PnpDereferenceNotify(v20);
          if ( v20 == v18 )
            PnpDereferenceNotify(v18);
        }
        while ( v9 != v26 );
        v6 = v24;
        break;
      }
      v10 = v26;
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KeLeaveCriticalRegion();
    }
    KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
    if ( v23 )
      v9 = (_QWORD *)v9[1];
    else
      v9 = (_QWORD *)*v9;
    PnpDereferenceNotify((PVOID **)P);
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Object, 0x4E706E50u);
  return v6;
}
