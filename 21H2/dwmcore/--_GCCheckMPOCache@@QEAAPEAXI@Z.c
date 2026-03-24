/*
 * XREFs of ??_GCCheckMPOCache@@QEAAPEAXI@Z @ 0x1800F15AC
 * Callers:
 *     ??4?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F1EF0 (--4-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800F1F28 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800F1798 (-clear_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@UD.c)
 */

CCheckMPOCache *__fastcall CCheckMPOCache::`scalar deleting destructor'(CCheckMPOCache **this)
{
  CCheckMPOCache *v2; // rcx
  __int64 v3; // rdx

  v2 = *this;
  v3 = (this[1] - v2) / 144;
  if ( v3 )
  {
    detail::vector_facade<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>>::clear_region(
      this,
      v3,
      (this[1] - v2) / 144);
    v2 = *this;
  }
  *this = 0LL;
  if ( v2 == (CCheckMPOCache *)(this + 3) )
    v2 = 0LL;
  operator delete(v2);
  operator delete(this);
  return (CCheckMPOCache *)this;
}
