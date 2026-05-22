/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C3F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BCC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004BCC0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BCD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004BCD0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BCE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004BCE0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BCF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004BCF0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BD00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004BD00.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BD10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004BD10.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180018F00 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CF190 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISpatialInteractionSou.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal,Windows::Internal::Holographic::ISpatialObjectDeviceWatcherCallback,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r10
  _DWORD *v11; // rcx
  int CanCastTo; // ebx
  _DWORD *v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v7, v6) || InlineIsEqualGUID(v8, &GUID_00759b61_908b_429d_b44f_bab28638e1a4) )
  {
    *v9 = v10;
    CanCastTo = 0;
LABEL_6:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)CanCastTo;
  }
  if ( InlineIsEqualGUID(v11, &GUID_00000038_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v14, &GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f) )
  {
    *v9 = v15;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal,Windows::Internal::Holographic::ISpatialObjectDeviceWatcherCallback,Microsoft::WRL::FtmBase>::CanCastTo(
                  v15 + 8,
                  v16);
  }
  if ( CanCastTo >= 0 )
    goto LABEL_6;
  return (unsigned int)CanCastTo;
}
