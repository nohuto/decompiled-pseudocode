/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1800F3678
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x180012924 (--$_Uninitialized_move@PEAV-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@2@_K1@Z @ 0x180012964 (-_Change_array@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800F378C (-GetMultiplaneOverlayCaps@CLegacySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?GetMultiplaneOverlayCaps@CDDisplaySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18027B200 (-GetMultiplaneOverlayCaps@CDDisplaySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800122C0 (-clear_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@UD.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(__int64 **a1, __int64 a2)
{
  __int64 **v3; // rbx
  __int64 *v4; // rdi
  __int64 *v5; // rcx
  unsigned __int64 v6; // r8

  if ( a1 != (__int64 **)a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = (__int64 *)*v4;
        v6 = 0x8E38E38E38E38E39uLL * ((v4[1] - *v4) >> 4);
        if ( v6 )
        {
          detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::clear_region(
            *v3,
            a2,
            v6);
          v5 = (__int64 *)*v4;
        }
        *v4 = 0LL;
        if ( v5 == v4 + 3 )
          v5 = 0LL;
        DefaultHeap::Free(v5);
        operator delete(v4, 0x388uLL);
      }
      ++v3;
    }
    while ( v3 != (__int64 **)a2 );
  }
}
