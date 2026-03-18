/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801BB0C4
 * Callers:
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801BB050 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025CC88 (-ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 8);
  if ( (__int64 *)(a3 + 8) != v3 )
  {
    do
    {
      v8 = *v4;
      *v4 = 0LL;
      v9 = *(v4 - 1);
      *(v4 - 1) = v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      ++v4;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v3 - 1);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
