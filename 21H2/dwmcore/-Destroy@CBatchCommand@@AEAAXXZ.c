/*
 * XREFs of ?Destroy@CBatchCommand@@AEAAXXZ @ 0x1800F0DD0
 * Callers:
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18001164C (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800227FC (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1801E308C (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBatchCommand::Destroy(CBatchCommand *this)
{
  __int64 v1; // rcx
  __int64 *v2; // rbx
  __int64 v3; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)this )
  {
    switch ( *(_DWORD *)this )
    {
      case 1:
        v2 = (__int64 *)((char *)this + 8);
        v3 = *((_QWORD *)this + 2);
        if ( v3 )
          std::default_delete<CDrawListPrimitive>::operator()(this, v3);
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v2);
        break;
      case 2:
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 1);
        break;
      case 3:
        v1 = *((_QWORD *)this + 1);
        if ( v1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
        break;
      default:
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
}
