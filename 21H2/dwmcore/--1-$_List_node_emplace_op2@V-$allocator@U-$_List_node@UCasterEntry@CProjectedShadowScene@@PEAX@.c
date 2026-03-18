/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180235F8C
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x180236EE0 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v2 + 16));
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0xB0uLL);
  }
}
