/*
 * XREFs of ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1800492AC
 * Callers:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800486D0 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCVisual@@@Z @ 0x1800457C4 (--$_Emplace_reallocate@AEAPEAVCVisual@@@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@w.c)
 *     ??0?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z @ 0x1800458B4 (--0-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004933C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 */

void __fastcall CComposition::AddToInputSinkPossibleDirtyList(CComposition *this, struct CVisual *a2)
{
  struct CVisual *v2; // rbx
  __int64 *v3; // r10
  __int64 *v4; // rdi
  struct CVisual *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a2;
  if ( !*((_BYTE *)this + 1277)
    && (CVisual::GetInputHandle(a2) || (*((_DWORD *)v2 + 24) & 0x2000) != 0 || (*((_BYTE *)v2 + 96) & 0x10) != 0) )
  {
    v4 = v3 + 164;
    if ( v3[165] == v3[166] )
    {
      std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<CVisual * &>(
        v3 + 164,
        v3[165],
        &v5);
      v2 = v5;
    }
    else
    {
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(
        (_QWORD *)v3[165],
        (__int64)v2);
      v4[1] += 8LL;
    }
    *((_BYTE *)v2 + 96) |= 0x20u;
  }
}
