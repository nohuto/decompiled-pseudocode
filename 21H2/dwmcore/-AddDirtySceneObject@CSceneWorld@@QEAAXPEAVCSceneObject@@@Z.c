/*
 * XREFs of ?AddDirtySceneObject@CSceneWorld@@QEAAXPEAVCSceneObject@@@Z @ 0x180252E9C
 * Callers:
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x18025BA7C (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180209FC4 (--$_Emplace_reallocate@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 */

void __fastcall CSceneWorld::AddDirtySceneObject(CSceneWorld *this, struct CSceneObject *a2)
{
  struct CSceneObject **v4; // rcx
  struct CSceneObject **i; // rax
  __int64 *v6; // rdx
  struct CSceneObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct CSceneObject **)*((_QWORD *)this + 17);
  for ( i = (struct CSceneObject **)*((_QWORD *)this + 16); i != v4; ++i )
  {
    if ( *i == a2 )
      return;
  }
  v7 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CSceneObject *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = (__int64 *)*((_QWORD *)this + 17);
  if ( v6 == *((__int64 **)this + 18) )
  {
    std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
      (__int64 **)this + 16,
      v6,
      (__int64 *)&v7);
  }
  else
  {
    v7 = 0LL;
    *v6 = (__int64)a2;
    *((_QWORD *)this + 17) += 8LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v7);
}
