/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002A4C0
 * Callers:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000B950 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180028390 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18002A67C (-RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18002A818 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,unsigned short const * &>(
        CDeviceGraphObjectsStore **a1,
        const unsigned __int16 **a2)
{
  CDeviceGraphObjectsStore *v4; // rax
  CDeviceGraphObjectsStore *v5; // rbx
  int v6; // edi
  const struct _GUID *v7; // rcx

  *a1 = 0LL;
  v4 = (CDeviceGraphObjectsStore *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CDeviceGraphObjectsStore::CDeviceGraphObjectsStore(v4);
    v6 = CDeviceGraphObjectsStore::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_791b267b_80ea_46cd_af67_485de10b8918, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v5 + 8LL))(v5);
        v6 = 0;
      }
      else if ( InlineIsEqualGUID(v7, v7) )
      {
        *a1 = v5;
        v6 = 0;
        (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      else
      {
        v6 = -2147467262;
      }
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
