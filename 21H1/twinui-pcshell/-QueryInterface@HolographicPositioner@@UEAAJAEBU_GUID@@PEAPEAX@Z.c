/*
 * XREFs of ?QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039420
 * Callers:
 *     ?QueryInterface@HolographicPositioner@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFE40 (-QueryInterface@HolographicPositioner@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFE50 (-QueryInterface@HolographicPositioner@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFE60 (-QueryInterface@HolographicPositioner@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFE70 (-QueryInterface@HolographicPositioner@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFE80 (-QueryInterface@HolographicPositioner@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFE90 (-QueryInterface@HolographicPositioner@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFEA0 (-QueryInterface@HolographicPositioner@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFEB0 (-QueryInterface@HolographicPositioner@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFEC0 (-QueryInterface@HolographicPositioner@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFED0 (-QueryInterface@HolographicPositioner@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFEE0 (-QueryInterface@HolographicPositioner@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFEF0 (-QueryInterface@HolographicPositioner@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180039BF0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::QueryInterface(
        HolographicPositioner *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r10
  int IsEqualGUID; // eax
  _DWORD *v13; // r9
  __int64 v14; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, v6) )
  {
    *v10 = v11;
    CanCastTo = 0;
LABEL_13:
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 8LL))(*v10, v8);
    return (unsigned int)CanCastTo;
  }
  IsEqualGUID = InlineIsEqualGUID(v9, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352);
  v8 = 2147500034LL;
  if ( IsEqualGUID )
  {
    *v10 = v14;
LABEL_22:
    CanCastTo = 0;
    goto LABEL_10;
  }
  if ( *v13 == -428157847
    && v13[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && v13[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && v13[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    *v10 = v14 + 40;
    goto LABEL_22;
  }
  if ( *v13 == 1834041537
    && v13[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && v13[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && v13[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *v10 = v14 + 48;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = -2147467262;
  }
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
LABEL_10:
  if ( CanCastTo == -2147467262 )
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<ITabbingAwarePositioner>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::CanCastTo(
                  v14 + 104,
                  v13);
  if ( CanCastTo >= 0 )
    goto LABEL_13;
  return (unsigned int)CanCastTo;
}
