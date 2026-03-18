/*
 * XREFs of ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801EF390
 * Callers:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801EF390 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1801EF970 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 *     ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18020D420 (-OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801EF390 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18020CC7C (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 */

void __fastcall CSceneNode::DehydrateSpectreResources(CSceneNode *this)
{
  __int64 *v2; // rdi
  CSceneNode **v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  CSceneComponent **v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx

  if ( *((_QWORD *)this + 14) )
  {
    v2 = (__int64 *)((char *)this + 128);
    if ( *((_QWORD *)this + 16) )
    {
      v3 = (CSceneNode **)*((_QWORD *)this + 8);
      v4 = 0LL;
      v5 = (unsigned __int64)(*((_QWORD *)this + 9) - (_QWORD)v3 + 7LL) >> 3;
      if ( (unsigned __int64)v3 > *((_QWORD *)this + 9) )
        v5 = 0LL;
      if ( v5 )
      {
        do
        {
          if ( *((CSceneNode **)*v3 + 15) == this )
            CSceneNode::DehydrateSpectreResources(*v3);
          ++v3;
          ++v4;
        }
        while ( v4 != v5 );
      }
      v6 = (CSceneComponent **)*((_QWORD *)this + 11);
      v7 = 0LL;
      v8 = (unsigned __int64)(*((_QWORD *)this + 12) - (_QWORD)v6 + 7LL) >> 3;
      if ( (unsigned __int64)v6 > *((_QWORD *)this + 12) )
        v8 = 0LL;
      if ( v8 )
      {
        do
        {
          CSceneComponent::DehydrateSpectreResources(*v6, this);
          ++v7;
          ++v6;
        }
        while ( v7 != v8 );
      }
      v9 = *((_QWORD *)this + 15);
      if ( v9 )
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9 + 128) + 40LL))(*(_QWORD *)(v9 + 128), *v2);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
    }
    *((_QWORD *)this + 14) = 0LL;
  }
}
