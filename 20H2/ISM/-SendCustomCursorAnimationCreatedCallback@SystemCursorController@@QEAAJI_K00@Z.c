/*
 * XREFs of ?SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z @ 0x18013CC3C
 * Callers:
 *     _lambda_e899d24a1372ab43d53191ccbd314951_::operator() @ 0x18013E538 (_lambda_e899d24a1372ab43d53191ccbd314951_--operator().c)
 * Callees:
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800050DC (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013AE78 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 */

__int64 __fastcall SystemCursorController::SendCustomCursorAnimationCreatedCallback(
        SystemCursorController *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  unsigned int *v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = a2;
  if ( SystemCursorController::IsApplicationPeer(this, a2) )
  {
    v10 = *(_QWORD *)(v9 + 80);
    v11 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v11 + 25) )
      goto LABEL_9;
    do
    {
      if ( *(_DWORD *)(v11 + 32) >= v7 )
      {
        v10 = v11;
        v11 = *(_QWORD *)v11;
      }
      else
      {
        v11 = *(_QWORD *)(v11 + 16);
      }
    }
    while ( !*(_BYTE *)(v11 + 25) );
    if ( v10 == *(_QWORD *)(v9 + 80) || v7 < *(_DWORD *)(v10 + 32) )
    {
LABEL_9:
      v16 = &v19;
      v10 = *std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
               (__int64 *)(v9 + 80),
               &v17,
               (__int64 *)v10,
               v8,
               &v16);
    }
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 88LL) + 8LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v12 + 40LL))(
            v12,
            a3,
            a4,
            a5);
    if ( v13 >= 0 )
      return 0LL;
    v14 = 400LL;
  }
  else
  {
    v13 = -2147024809;
    v14 = 404LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
