/*
 * XREFs of ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x1801A3BE4
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801A19D0 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180025B70 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

CDrawListEntry *__fastcall CDrawListEntry::CDrawListEntry(CDrawListEntry *this, const struct DrawListEntryParams *a2)
{
  _OWORD *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // xmm0_8

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 10) = 1065353216;
  *((_DWORD *)this + 11) = 1065353216;
  *((_DWORD *)this + 12) = 1065353216;
  *((_DWORD *)this + 13) = 1065353216;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_QWORD *)this + 9) = (char *)this + 88;
  *((_QWORD *)this + 10) = (char *)this + 164;
  *((_DWORD *)this + 42) = *(_DWORD *)a2;
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 22,
    *((_QWORD *)a2 + 1));
  v4 = (_OWORD *)*((_QWORD *)a2 + 3);
  if ( v4 )
    *(_OWORD *)((char *)this + 40) = *v4;
  v5 = (__int64 *)*((_QWORD *)a2 + 4);
  if ( v5 )
  {
    v6 = *v5;
    *((_DWORD *)this + 42) |= 0x400u;
    *((_QWORD *)this + 7) = v6;
  }
  return this;
}
