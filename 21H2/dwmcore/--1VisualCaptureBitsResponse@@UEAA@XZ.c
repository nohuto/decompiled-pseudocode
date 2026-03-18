/*
 * XREFs of ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x180026D38
 * Callers:
 *     ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180026BF0 (--_GVisualCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall VisualCaptureBitsResponse::~VisualCaptureBitsResponse(VisualCaptureBitsResponse *this, void *a2)
{
  wil::details *v3; // rcx

  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  v3 = (wil::details *)*((_QWORD *)this + 212);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 211);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
