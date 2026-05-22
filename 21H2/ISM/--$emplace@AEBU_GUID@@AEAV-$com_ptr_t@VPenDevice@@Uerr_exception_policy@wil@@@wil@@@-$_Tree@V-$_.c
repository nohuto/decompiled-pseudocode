/*
 * XREFs of ??$emplace@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18012E8C8
 * Callers:
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180130528 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x1800143D0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18012E4CC (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::emplace<_GUID const &,wil::com_ptr_t<PenDevice,wil::err_exception_policy> &>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // r8

  v8 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *((_OWORD *)v9 + 2) = *a3;
  wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
    v9 + 6,
    *a4);
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Insert_nohint<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>> &,std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *> *>(
    a1,
    a2,
    v10,
    v9 + 4,
    v9);
  return a2;
}
