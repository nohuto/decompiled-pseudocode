/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x180295460
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x18029BB94 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x180024D8C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x180024E64 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x1801932D8 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVCHolographicInteropTexture@@@?$vector@PEAVCHolographicInteropTexture@@V?$allocator@PEAVCHolographicInteropTexture@@@std@@@std@@QEAAPEAPEAVCHolographicInteropTexture@@QEAPEAV2@AEBQEAV2@@Z @ 0x180294B60 (--$_Emplace_reallocate@AEBQEAVCHolographicInteropTexture@@@-$vector@PEAVCHolographicInteropTextu.c)
 *     ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x180295988 (-DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180295E80 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x180297BC8 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18029CF8C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
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
  __int64 v9; // r9
  _BYTE *v10; // rdx
  CHolographicInteropTaskQueue *v11; // rcx
  struct IUnknown *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  CStereoscopicContentManager *StereoscopicContentManager; // rax
  unsigned int v18; // edi
  __int64 v19; // rcx
  CompositorTracing *v20; // rcx
  struct CHolographicInteropTexture *v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = a2;
  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  v4 = (unsigned int *)a2;
  v5 = 0;
  AcquireSRWLockShared((PSRWLOCK)this + 13);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId(this, v4[56]);
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    v7 = 0;
    AcquireSRWLockExclusive(v2);
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 2));
    v10 = (_BYTE *)*((_QWORD *)this + 19);
    if ( v10 == *((_BYTE **)this + 20) )
    {
      std::vector<CHolographicInteropTexture *>::_Emplace_reallocate<CHolographicInteropTexture * const &>(
        (const void **)this + 18,
        v10,
        &v22);
      v4 = (unsigned int *)v22;
    }
    else
    {
      *(_QWORD *)v10 = v4;
      *((_QWORD *)this + 19) += 8LL;
    }
    v11 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v11 && *((_BYTE *)this + 240) )
    {
      if ( v4 )
        v12 = (struct IUnknown *)(v4 + 20);
      else
        v12 = 0LL;
      v5 = CHolographicInteropTaskQueue::PostMessageW(v11, 2u, v12, 0LL, 0LL, 0LL, 0LL);
    }
    if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this + 3), (__int64)v10, v8, v9) )
    {
      StereoscopicContentManager = CComposition::GetStereoscopicContentManager(
                                     *((CComposition **)this + 3),
                                     v13,
                                     v15,
                                     v16);
      CStereoscopicContentManager::RegisterStereoscopicContentConsumer(
        StereoscopicContentManager,
        (struct CHolographicInteropTexture *)v4);
      v7 = 1;
    }
    v18 = v4[56];
    if ( CompositorTracing::IsEnabled(v14) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v19,
        _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicInteropTextureAdd_(v20, v18, v7);
    }
    ReleaseSRWLockExclusive(v2);
  }
  return v5;
}
