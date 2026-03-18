/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18017E230
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800BE144 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x18006F61C (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  __int64 v4; // rax

  *(_QWORD *)this = *(_QWORD *)a2;
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    *((_QWORD *)a2 + 1));
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 2,
    *((_QWORD *)a2 + 2));
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 9);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v4 = *((_QWORD *)a2 + 21);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 20);
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 21);
  *((_BYTE *)this + 176) = *((_BYTE *)a2 + 176);
  *((_BYTE *)this + 177) = *((_BYTE *)a2 + 177);
  *((_BYTE *)this + 178) = *((_BYTE *)a2 + 178);
  *((_BYTE *)this + 179) = *((_BYTE *)a2 + 179);
  *((_BYTE *)this + 180) = *((_BYTE *)a2 + 180);
  *((_BYTE *)this + 181) = *((_BYTE *)a2 + 181);
  *((_QWORD *)this + 23) = *((_QWORD *)a2 + 23);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_BYTE *)this + 216) = *((_BYTE *)a2 + 216);
  *((_BYTE *)this + 217) = *((_BYTE *)a2 + 217);
  *((_BYTE *)this + 218) = *((_BYTE *)a2 + 218);
  *((_BYTE *)this + 219) = *((_BYTE *)a2 + 219);
  *((_BYTE *)this + 220) = *((_BYTE *)a2 + 220);
  *((_BYTE *)this + 221) = *((_BYTE *)a2 + 221);
  return this;
}
