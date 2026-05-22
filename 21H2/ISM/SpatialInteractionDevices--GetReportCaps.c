/*
 * XREFs of SpatialInteractionDevices::GetReportCaps @ 0x1800C97D0
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800C9BD0 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBE@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBE@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C902C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBE@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ??$make_shared@USpatialInputReportCaps@SpatialInteractionDevices@@$$V@std@@YA?AV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@0@XZ @ 0x1800C90C8 (--$make_shared@USpatialInputReportCaps@SpatialInteractionDevices@@$$V@std@@YA-AV-$shared_ptr@USp.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@AEBE@Z @ 0x1800CAA10 (-find@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::GetReportCaps(unsigned __int8 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rbx
  __int64 v8; // rdi
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-8h]
  unsigned __int8 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int8 *v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v12 = a1;
  v2 = (__int64 *)(a2 + 248);
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::find(
    a2 + 248,
    &v13,
    &v12);
  if ( v13 != *v2 )
    return *(_QWORD *)(v13 + 40);
  std::make_shared<SpatialInteractionDevices::SpatialInputReportCaps,>(&v10);
  v5 = *v2;
  v6 = *(_QWORD *)(*v2 + 8);
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  do
  {
    if ( *(_BYTE *)(v6 + 32) >= v12 )
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v5 == *v2 || v12 < *(_BYTE *)(v5 + 32) )
  {
LABEL_10:
    v14 = &v12;
    v5 = *std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned char const &>,std::tuple<>>(
            v2,
            &v15,
            (__int64 *)v5,
            v4,
            &v14);
  }
  v7 = v11;
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    v7 = v11;
  }
  v8 = v10;
  *(_QWORD *)(v5 + 40) = v10;
  v9 = *(std::_Ref_count_base **)(v5 + 48);
  *(_QWORD *)(v5 + 48) = v7;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return v8;
}
