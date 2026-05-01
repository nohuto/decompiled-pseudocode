/*
 * XREFs of ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@I$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18029E318
 * Callers:
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802AC87C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0LegacyViewWrapper@@QEAA@XZ @ 0x1802A0020 (--0LegacyViewWrapper@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VLegacyViewWrapper@@@WRL@Microsoft@@QEAAXPEAVLegacyViewWrapper@@@Z @ 0x1802A2248 (-Attach@-$ComPtr@VLegacyViewWrapper@@@WRL@Microsoft@@QEAAXPEAVLegacyViewWrapper@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VViewWrapperBase@@@Details@23@UIWeakReferenceSource@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802A28F8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VVi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802A5D20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_1802A5D20.c)
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x1802C9C90 (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int,std::nullptr_t,unsigned short const *,unsigned short const (&)[53],enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
        _QWORD *a1,
        unsigned int *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        _QWORD *a7)
{
  LegacyViewWrapper *v11; // rax
  int CanCastTo; // edi
  LegacyViewWrapper *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  _DWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (LegacyViewWrapper *)operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = LegacyViewWrapper::LegacyViewWrapper(v11);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<LegacyViewWrapper>::Attach(&v19, v13);
    v14 = *a4;
    v15 = v19;
    CanCastTo = LegacyViewWrapper::RuntimeClassInitialize(v19, *a2, *a3, v14, a5, *a6, *a7);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v16, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v15;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ViewWrapperBase>,IWeakReferenceSource,ILegacyViewWrapper>::CanCastTo(
                      v15 + 8,
                      v17,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::Release(v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
