/*
 * XREFs of ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801EBA0C
 * Callers:
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801EBA0C (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1801EBEF0 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 *     ?OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18020B820 (-OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5FE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1801EB83C (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801EBA0C (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18020B104 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 */

__int64 __fastcall CSceneNode::HydrateSpectreResources(CSceneNode *this, struct CSceneWorld *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  CSceneComponent **v13; // rdi
  __int64 v14; // rbp
  unsigned __int64 v15; // rbx
  CSceneNode **v16; // rdi
  __int64 v17; // rbp
  unsigned __int64 v18; // rbx

  if ( !*((_QWORD *)this + 14) )
  {
    v4 = *((_QWORD *)this + 15);
    v5 = (__int64 *)((char *)this + 128);
    *((_QWORD *)this + 14) = a2;
    if ( v4 )
    {
      v8 = *(_QWORD *)(v4 + 128);
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 16);
      v10 = v9(v8, v5);
      v12 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xD0u, 0LL);
        return v12;
      }
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 10) + 32LL))(*((_QWORD *)a2 + 10));
      v7 = *v5;
      *v5 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    CSceneNode::ApplyTransformToSpectreResources(this);
    v13 = (CSceneComponent **)*((_QWORD *)this + 11);
    v14 = 0LL;
    v15 = (unsigned __int64)(*((_QWORD *)this + 12) - (_QWORD)v13 + 7LL) >> 3;
    if ( (unsigned __int64)v13 > *((_QWORD *)this + 12) )
      v15 = 0LL;
    if ( v15 )
    {
      do
      {
        CSceneComponent::HydrateSpectreResources(*v13, this);
        ++v14;
        ++v13;
      }
      while ( v14 != v15 );
    }
    v16 = (CSceneNode **)*((_QWORD *)this + 8);
    v17 = 0LL;
    v18 = (unsigned __int64)(*((_QWORD *)this + 9) - (_QWORD)v16 + 7LL) >> 3;
    if ( (unsigned __int64)v16 > *((_QWORD *)this + 9) )
      v18 = 0LL;
    if ( v18 )
    {
      do
      {
        if ( *((CSceneNode **)*v16 + 15) == this )
          CSceneNode::HydrateSpectreResources(*v16, a2);
        ++v16;
        ++v17;
      }
      while ( v17 != v18 );
    }
  }
  return 0;
}
