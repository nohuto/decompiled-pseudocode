/*
 * XREFs of ?OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x180005090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800050DC (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013AE78 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18013D1F0 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$le_ea_18013D1F0.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x18013E90C (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::OnStubDisconnected(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2)
{
  unsigned int v3; // edx
  int v4; // r9d
  __int64 **v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rcx
  volatile signed __int32 *v9; // rdi
  CustomCursorApplication *v10; // rbx
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *v12; // [rsp+70h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v11 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                  + 36);
  if ( SystemCursorController::IsApplicationPeer(this, v11) )
  {
    v6 = (__int64 **)((char *)this + 80);
    v7 = (__int64 *)*((_QWORD *)this + 10);
    v8 = (__int64 *)v7[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_10;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v3 )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v7 == *v6 || v3 < *((_DWORD *)v7 + 8) )
    {
LABEL_10:
      v12 = &v11;
      v7 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                          (int)this + 80,
                          (unsigned int)&v13,
                          (_DWORD)v7,
                          v4,
                          (__int64)&v12);
    }
    v9 = (volatile signed __int32 *)v7[6];
    if ( v9 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = (volatile signed __int32 *)v7[6];
    }
    v10 = (CustomCursorApplication *)v7[5];
    std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::erase(
      v6,
      &v11);
    CustomCursorApplication::Cleanup(v10);
    if ( v9 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
  }
  return 0LL;
}
