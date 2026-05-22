/*
 * XREFs of ??$MakeAndInitialize@VSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceCollection@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@@Z @ 0x18002C8D0
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180020EB0 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ??0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x18002B08C (--0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18002C974 (-RuntimeClassInitialize@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,>(
        _QWORD *a1)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v2; // rax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v3; // rbx
  int v4; // edi

  *a1 = 0LL;
  v2 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)operator new(
                                                                                             0x2D0uLL,
                                                                                             (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection(v2);
    v4 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00759b61_908b_429d_b44f_bab28638e1a4,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
