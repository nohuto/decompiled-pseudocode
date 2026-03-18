/*
 * XREFs of ??_GCCheckMPOCache@@QEAAPEAXI@Z @ 0x180012250
 * Callers:
 *     ??$?4U?$default_delete@VCCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180012218 (--$-4U-$default_delete@VCCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCCheckMPOCache@@U-$default_dele.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x180012500 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800122C0 (-clear_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@UD.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CCheckMPOCache *__fastcall CCheckMPOCache::`scalar deleting destructor'(CCheckMPOCache **this)
{
  CCheckMPOCache *v2; // rcx

  v2 = *this;
  if ( 0x8E38E38E38E38E39uLL * ((this[1] - v2) >> 4) )
  {
    detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::clear_region(this);
    v2 = *this;
  }
  *this = 0LL;
  if ( v2 == (CCheckMPOCache *)(this + 3) )
    v2 = 0LL;
  DefaultHeap::Free(v2);
  operator delete(this, 0x388uLL);
  return (CCheckMPOCache *)this;
}
