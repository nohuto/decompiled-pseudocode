/*
 * XREFs of ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x180130528
 * Callers:
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x18012F1F4 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 *     ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x18012F8F8 (-HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z.c)
 *     ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x180130448 (-RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180002B70 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x180002C90 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x1800143D0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003F878 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     memcmp_0 @ 0x18004B24F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Eqrange@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@1@AEBU_GUID@@@Z @ 0x18012E0FC (--$_Eqrange@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_pol.c)
 *     ??$emplace@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@AEAV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18012E8C8 (--$emplace@AEBU_GUID@@AEAV-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V-$_.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoPenDevicePrincipal@@@Z @ 0x18012FABC (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBa.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180130310 (-RemoveAt@-$ListPrincipalCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Ba.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x180131140 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall PenDeviceManager::RepopulateActiveBamoForId(PenDeviceManager *this, struct _GUID *a2)
{
  void (__fastcall ***v3)(_QWORD); // rsi
  __int64 v4; // rdi
  _QWORD *v5; // r12
  _QWORD *v6; // r14
  __int64 *v7; // rbx
  _QWORD *v8; // r15
  __int64 ***v9; // r12
  __int64 **i; // rbx
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r15
  void (__fastcall **v15)(__int64); // rax
  __int64 *v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v21; // rax
  const char *v22; // r9
  __int64 v23; // rdx
  __int64 *v24; // r14
  PenDeviceManager *v25; // rax
  PenDeviceManager *v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v29; // rsi
  int inserted; // edi
  void (__fastcall ***v31)(_QWORD); // [rsp+20h] [rbp-30h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-28h]
  __int64 v33; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v34[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  PenDeviceManager *v36; // [rsp+90h] [rbp+40h] BYREF
  void (__fastcall ***v37)(_QWORD); // [rsp+A0h] [rbp+50h] BYREF
  __int64 *v38; // [rsp+A8h] [rbp+58h]

  v36 = this;
  v3 = 0LL;
  v31 = 0LL;
  v4 = 0LL;
  v37 = 0LL;
  v5 = (_QWORD *)((char *)this + 128);
  v38 = (__int64 *)((char *)this + 128);
  v6 = (_QWORD *)*((_QWORD *)this + 16);
  v7 = (__int64 *)v6[1];
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    do
    {
      if ( memcmp_0(v7 + 4, a2, 0x10uLL) >= 0 )
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
    v8 = (_QWORD *)*v5;
  }
  if ( v6 == v8 || memcmp_0(a2, v6 + 4, 0x10uLL) < 0 )
    v6 = v8;
  if ( v6 != v8 )
  {
    v3 = (void (__fastcall ***)(_QWORD))v6[6];
    v31 = v3;
    if ( v3 )
      (**v3)(v3);
  }
  v9 = (__int64 ***)*((_QWORD *)v36 + 9);
  for ( i = *v9; i != (__int64 **)v9; i = (__int64 **)*i )
  {
    v32 = i[2];
    wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
      &v33,
      (void (__fastcall ***)(_QWORD))i[3]);
    v11 = v33;
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v33 + 8) + 24LL))(v33 + 8);
    v13 = *v12 - *(_QWORD *)&a2->Data1;
    if ( *v12 == *(_QWORD *)&a2->Data1 )
      v13 = v12[1] - *(_QWORD *)a2->Data4;
    if ( !v13 )
    {
      if ( v4 )
      {
        if ( !*(_BYTE *)(v11 + 176) && *(_BYTE *)(v4 + 176) || !*(_BYTE *)(v11 + 178) && *(_BYTE *)(v4 + 178) )
        {
          v14 = v4;
          v15 = *(void (__fastcall ***)(__int64))v11;
          v4 = v11;
          v37 = (void (__fastcall ***)(_QWORD))v11;
          (*v15)(v11);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
      else
      {
        v4 = v11;
        v37 = (void (__fastcall ***)(_QWORD))v11;
        (**(void (__fastcall ***)(__int64))v11)(v11);
      }
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v33);
  }
  if ( (void (__fastcall ***)(_QWORD))v4 != v3 )
  {
    v16 = (__int64 *)*((_QWORD *)v36 + 7);
    v32 = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64 *))*v16)(v16);
    v17 = (v16[8] - v16[7]) >> 3;
    if ( v3 )
    {
      v18 = 0LL;
      if ( (_DWORD)v17 )
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(v16[4] + 32);
          if ( *(int *)(v19 + 8) <= 0 )
            v20 = 0LL;
          else
            v20 = *(_QWORD *)(v19 + 16);
          v21 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20);
          Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(v21);
          v23 = v16[7];
          if ( (unsigned int)v18 >= (unsigned __int64)((v16[8] - v23) >> 3) )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              73LL,
              (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
              v22);
            __debugbreak();
          }
          if ( *(void (__fastcall ****)(_QWORD))(v23 + 8 * v18) == v3 )
            break;
          v18 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v18 >= (unsigned int)v17 )
            goto LABEL_38;
        }
        v27 = Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::RemoveAt(
                v16,
                v18);
        if ( v27 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            124LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevicemanager.cpp",
            (const char *)(unsigned int)v27);
          __debugbreak();
        }
      }
LABEL_38:
      v24 = v38;
      std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Eqrange<_GUID>(
        v38,
        v34,
        a2);
      v25 = (PenDeviceManager *)v34[0];
      v36 = (PenDeviceManager *)v34[0];
      v26 = (PenDeviceManager *)v34[1];
      while ( v25 != v26 )
      {
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v36);
        v25 = v36;
      }
      std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::erase(
        v24,
        &v36,
        v34[0]);
    }
    else
    {
      v24 = v38;
    }
    if ( v4 )
    {
      v28 = *(_QWORD *)(v16[4] + 32);
      if ( *(int *)(v28 + 8) <= 0 )
        v29 = 0LL;
      else
        v29 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v28 + 16);
      Microsoft::Bamo::Lock::Lock((Microsoft::Bamo::Lock *)v34, v29);
      inserted = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>,BamoPenDevicePrincipal *>::InsertWorker(
                   (__int64)v16,
                   v29,
                   (v16[8] - v16[7]) >> 3,
                   (void (__fastcall ***)(_QWORD))v4);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v34);
      if ( inserted < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          135LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevicemanager.cpp",
          (const char *)(unsigned int)inserted);
        __debugbreak();
      }
      std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::emplace<_GUID const &,wil::com_ptr_t<PenDevice,wil::err_exception_policy> &>(
        v24,
        (__int64)v34,
        a2,
        &v37);
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64 *))(*v16 + 8))(v16);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v37);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v31);
}
