/*
 * XREFs of ?RemoveDeviceFromCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKK@Z @ 0x1800D21E4
 * Callers:
 *     _lambda_0462a2c62e1b4bc053620d4745a50596_::operator() @ 0x1800CEA60 (_lambda_0462a2c62e1b4bc053620d4745a50596_--operator().c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18006C384 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEB_J@Z @ 0x1800D4664 (-find@-$_Tree@V-$_Tmap_traits@_JV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteraction.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveDeviceFromCache(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        int a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v5; // ebx
  _QWORD *v6; // rbx
  std::_Ref_count_base *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]
  _QWORD *v12; // [rsp+48h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 432);
  v11 = a2;
  v10 = a3;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::find(
    (char *)this + 472,
    &v12,
    &v10);
  if ( v12 == *((_QWORD **)this + 59) )
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>>::_Extract(
           (_QWORD *)this + 59,
           v12);
    v7 = (std::_Ref_count_base *)v6[6];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x38);
    v5 = 0;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v5;
}
