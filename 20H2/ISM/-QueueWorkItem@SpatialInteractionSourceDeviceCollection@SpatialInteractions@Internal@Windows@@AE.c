/*
 * XREFs of ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800D1B28
 * Callers:
 *     ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CF224 (-DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCSourceDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D07B0 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D098C (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D1510 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJK@Z @ 0x1800D1718 (-OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     _lambda_3d50a50961408acf3fdeaf78894b32d8_::operator() @ 0x1800D5EDC (_lambda_3d50a50961408acf3fdeaf78894b32d8_--operator().c)
 *     ?AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D68C0 (-AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ?CompositorRunningStateChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJ_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D6BD0 (-CompositorRunningStateChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inte.c)
 *     ?InitializeDdiDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D7780 (-InitializeDdiDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$make_shared@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@7@AEA_N@std@@YA?AV?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@0@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@0@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@0@AEA_N@Z @ 0x1800CD944 (--$make_shared@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteraction.c)
 *     ?_Push_back_internal@?$deque@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$allocator@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAAX$$QEAV?$shared_ptr@V?$function@$$A6AXXZ@std@@@2@@Z @ 0x1800D3CC8 (-_Push_back_internal@-$deque@V-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@V-$allocator@V-$share.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 v8; // rdx
  const char *v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v18; // [rsp+50h] [rbp+8h]
  char v20; // [rsp+68h] [rbp+20h] BYREF

  v20 = a4;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 488);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 488));
  try
  {
    if ( !*(_BYTE *)(a1 + 528) )
    {
      v10 = std::make_shared<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> &,std::function<void (std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> const &)> &,bool &>(
              &v15,
              a2,
              a3,
              &v20);
      std::deque<std::shared_ptr<std::function<void (void)>>>::_Push_back_internal(a1 + 536, v10);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      if ( *(_QWORD *)(a1 + 568) == 1LL )
        SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 576));
    }
    if ( v7 )
      LeaveCriticalSection(v7);
    v11 = *(_QWORD *)(a3 + 56);
    if ( v11 )
    {
      LOBYTE(v8) = v11 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v8);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    v18 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x190,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            v9);
    v13 = *(_QWORD *)(a3 + 56);
    if ( v13 )
    {
      LOBYTE(v14) = v13 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v14);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return v18;
  }
  return result;
}
