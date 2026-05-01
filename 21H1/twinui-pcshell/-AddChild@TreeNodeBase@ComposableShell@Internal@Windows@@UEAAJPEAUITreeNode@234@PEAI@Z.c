/*
 * XREFs of ?AddChild@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAUITreeNode@234@PEAI@Z @ 0x18022B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801363F8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@456@@Z @ 0x1801B24DC (--$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@-$.c)
 *     ??$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEventType@234@AEAPEAUITreeNode@234@@wil@@YA?AV?$ComPtr@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAW4TreeNodeEventType@ComposableShell@Internal@Windows@@AEAPEAUITreeNode@567@@Z @ 0x180227C68 (--$MakeAndInitializeOrThrow@VNodeChangedEventArgs@ComposableShell@Internal@Windows@@W4TreeNodeEv.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180228C10 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ??R_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@QEBAXXZ @ 0x18022ADAC (--R_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@QEBAXXZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180234234 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_ex.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::AddChild(
        Windows::Internal::ComposableShell::TreeNodeBase *this,
        struct Windows::Internal::ComposableShell::ITreeNode *a2,
        unsigned int *a3)
{
  const char *v5; // r9
  __int64 result; // rax
  _DWORD *i; // r11
  char *v8; // r14
  __int64 v9; // r9
  unsigned int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r8d
  int v14; // eax
  const char *v15; // r9
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  RTL_SRWLOCK *v17[2]; // [rsp+40h] [rbp-48h] BYREF
  char v18; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int *v20; // [rsp+90h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::ITreeNode *v21; // [rsp+98h] [rbp+10h] BYREF
  unsigned int *v22; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v22 = a3;
  v21 = a2;
  try
  {
    *a3 = 0;
    v17[0] = (RTL_SRWLOCK *)this;
    v17[1] = (RTL_SRWLOCK *)&v22;
    v18 = 1;
    (*(void (__fastcall **)(Windows::Internal::ComposableShell::TreeNodeBase *))(*(_QWORD *)this + 96LL))(this);
    AcquireSRWLockExclusive((PSRWLOCK)this + 2);
    if ( *((_BYTE *)this + 24) )
    {
      if ( this != (Windows::Internal::ComposableShell::TreeNodeBase *)-16LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 2);
      v18 = 0;
      _lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator()(v17);
      result = 2147947423LL;
    }
    else
    {
      for ( i = (_DWORD *)((char *)this + 56); ; *i = v10 + 1 )
      {
        v8 = (char *)this + 40;
        if ( *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::find(
                          (char *)this + 40,
                          &v20,
                          i) == *((_QWORD *)this + 5) )
        {
          if ( v10 )
            break;
        }
      }
      *v22 = v10;
      ++*i;
      v11 = *(_QWORD *)v8;
      v12 = *(_QWORD *)(*(_QWORD *)v8 + 8LL);
      if ( *(_BYTE *)(v12 + 25) )
        goto LABEL_17;
      v13 = *v22;
      do
      {
        if ( *(_DWORD *)(v12 + 32) >= v13 )
        {
          v11 = v12;
          v12 = *(_QWORD *)v12;
        }
        else
        {
          v12 = *(_QWORD *)(v12 + 16);
        }
      }
      while ( !*(_BYTE *)(v12 + 25) );
      if ( v11 == *(_QWORD *)v8 || v13 < *(_DWORD *)(v11 + 32) )
      {
LABEL_17:
        v20 = v22;
        v11 = *std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                 (__int64 *)this + 5,
                 &v16,
                 v11,
                 v9,
                 &v20);
      }
      wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
        (__int64 *)(v11 + 40),
        (__int64)a2);
      if ( this != (Windows::Internal::ComposableShell::TreeNodeBase *)-16LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 2);
      LODWORD(v20) = 0;
      wil::MakeAndInitializeOrThrow<Windows::Internal::ComposableShell::NodeChangedEventArgs,enum Windows::Internal::ComposableShell::TreeNodeEventType,Windows::Internal::ComposableShell::ITreeNode * &>(
        &v23,
        (int *)&v20,
        (__int64 *)&v21);
      v14 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::ITreeNode *,Windows::Internal::ComposableShell::ITreeNodeEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<Windows::Internal::ComposableShell::TreeNodeBase *,Windows::Internal::ComposableShell::NodeChangedEventArgs *>(
              (RTL_SRWLOCK *)this + 8,
              (__int64)this,
              v23);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          233LL,
          (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
          (const char *)(unsigned int)v14);
      try
      {
        (*(void (__fastcall **)(Windows::Internal::ComposableShell::TreeNodeBase *, struct Windows::Internal::ComposableShell::ITreeNode *))(*(_QWORD *)this + 104LL))(
          this,
          v21);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0xF0,
          (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
          v15);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF5,
                           (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
                           v5);
  }
  return result;
}
