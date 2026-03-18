/*
 * XREFs of ??_GOverlayPlaneInfo@COverlayContext@@QEAAPEAXI@Z @ 0x18000E77C
 * Callers:
 *     ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x18001D1D8 (--$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayCo.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall COverlayContext::OverlayPlaneInfo::`scalar deleting destructor'(
        COverlayContext::OverlayPlaneInfo *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 21);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((char *)this + 16);
  return this;
}
