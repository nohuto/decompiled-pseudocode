/*
 * XREFs of ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x18011B760
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18011349C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003017C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE0E4 (--0-$function@$$A6AXAEBV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Interna.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AsyncHRESULTPrincipal::AsyncHRESULTPrincipal(
        __int64 a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  *(_QWORD *)a1 = &BamoAsyncHRESULTPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncHRESULTPrincipal::`vftable'{for `IAsyncHRESULTPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoAsyncHRESULTPrincipalImpl::`vftable';
  *(_QWORD *)a1 = &AsyncHRESULTPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncHRESULTPrincipal::`vftable'{for `IAsyncHRESULTPrincipal'};
  std::function<void (std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> const &)>::function<void (std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> const &)>(
    a1 + 56,
    a3);
  *(_BYTE *)(a1 + 120) = 1;
  v6 = *(_QWORD *)(a3 + 56);
  if ( v6 )
  {
    LOBYTE(v5) = v6 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return a1;
}
