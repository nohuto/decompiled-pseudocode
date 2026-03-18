/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C020B560
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011F5A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00E84B8 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C020EDFC (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C0217394 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
  {
    *((_QWORD *)this + 14) = KeGetCurrentThread();
    v2 = *((_QWORD *)this + 338);
    if ( !v2
      || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v2, 2LL)
      && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 338), 1LL) )
    {
      DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2u, 1);
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v3 = *((_QWORD *)this + 338);
        if ( !v3 )
          goto LABEL_15;
        if ( !DXGADAPTER::IsDxgmms2(this) )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
          {
            v6 = WdLogNewEntry5_WdAssertion(v5, v4);
            *(_QWORD *)(v6 + 24) = 4420LL;
            WdLogEvent5_WdAssertion(v6);
          }
          if ( *(_QWORD *)(v3 + 1208) )
            goto LABEL_14;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 338) + 640LL) + 8LL)
                                                       + 1080LL))(*(_QWORD *)(*((_QWORD *)this + 338) + 648LL))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 338) + 616LL) + 8LL)
                                                       + 928LL))(*(_QWORD *)(*((_QWORD *)this + 338) + 624LL))
          || *((_BYTE *)this + 2646) )
        {
LABEL_14:
          DXGADAPTER::ReleaseCoreResource(this, 0LL);
        }
        else
        {
LABEL_15:
          v7 = *((_QWORD *)this + 338);
          *((_DWORD *)this + 40) = 1;
          if ( v7 )
          {
            *(_QWORD *)(v7 + 32) = 0LL;
            ExReleasePushLockExclusiveEx(v7 + 24, 0LL);
            KeLeaveCriticalRegion();
            v8 = *((_QWORD *)this + 338);
            *(_QWORD *)(v8 + 56) = 0LL;
            ExReleasePushLockExclusiveEx(v8 + 48, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
    }
    if ( *((_DWORD *)this + 40) != 1 )
      DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
  }
  KeLeaveCriticalRegion();
}
