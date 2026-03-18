/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x180251090
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1802577A4 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D6EBC (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D6EE0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180157234 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180166108 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 *     ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x1802515E8 (-DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180251C1C (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x180253D84 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180258A80 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddInteropTexture(
        CHolographicManager *this,
        struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int *v4; // rsi
  bool v5; // r14
  struct CHolographicInteropTexture *InteropTextureByBindId; // rdi
  bool v7; // r15
  __int64 v8; // r8
  unsigned int **v9; // rdx
  CHolographicInteropTaskQueue *v10; // rcx
  struct IUnknown *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  CStereoscopicContentManager *StereoscopicContentManager; // rax
  unsigned int v16; // edi
  __int64 v17; // rcx
  CompositorTracing *v18; // rcx
  struct CHolographicInteropTexture *v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  v4 = (unsigned int *)a2;
  v5 = 0;
  AcquireSRWLockShared((PSRWLOCK)this + 13);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId(this, v4[52]);
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    v7 = 0;
    AcquireSRWLockExclusive(v2);
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v4);
    v9 = (unsigned int **)*((_QWORD *)this + 19);
    if ( *((unsigned int ***)this + 20) == v9 )
    {
      std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>((__int64 *)this + 18, v9, &v20);
      v4 = (unsigned int *)v20;
    }
    else
    {
      *v9 = v4;
      *((_QWORD *)this + 19) += 8LL;
    }
    v10 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v10 && *((_BYTE *)this + 240) )
    {
      if ( v4 )
        v11 = (struct IUnknown *)(v4 + 18);
      else
        v11 = 0LL;
      v5 = CHolographicInteropTaskQueue::PostMessageW(v10, 2u, v11, 0LL, 0LL, 0LL, 0LL);
    }
    if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), (__int64)v9, v8) )
    {
      StereoscopicContentManager = CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), v12, v14);
      CStereoscopicContentManager::RegisterStereoscopicContentConsumer(
        StereoscopicContentManager,
        (struct CHolographicInteropTexture *)v4);
      v7 = 1;
    }
    v16 = v4[52];
    if ( CompositorTracing::IsEnabled(v13) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v17,
        _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicInteropTextureAdd_(v18, v16, v7);
    }
    ReleaseSRWLockExclusive(v2);
  }
  return v5;
}
