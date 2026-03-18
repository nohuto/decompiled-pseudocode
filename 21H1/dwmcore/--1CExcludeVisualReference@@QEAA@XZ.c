/*
 * XREFs of ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800DF3D4
 * Callers:
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x1800DF0BC (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@2@_K1@Z @ 0x1800DF27C (-_Change_array@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisua.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800DF2EC (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DF37C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18015A428 (-_Tidy@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801B0038 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 *     ?clear@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801B04B8 (-clear@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801B0524 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x180178720 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 */

void __fastcall CExcludeVisualReference::~CExcludeVisualReference(CExcludeVisualReference *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 4) == 0;
  *(_QWORD *)this = &CExcludeVisualReference::`vftable';
  if ( !v1 )
    CExcludeVisualReference::Restore(this);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
}
