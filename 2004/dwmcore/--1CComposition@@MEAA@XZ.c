/*
 * XREFs of ??1CComposition@@MEAA@XZ @ 0x180156718
 * Callers:
 *     ??_ECComposition@@MEAAPEAXI@Z @ 0x180156C30 (--_ECComposition@@MEAAPEAXI@Z.c)
 *     ??_ECGlobalComposition@@EEAAPEAXI@Z @ 0x180164240 (--_ECGlobalComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18009747C (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A624 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@0AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800AF914 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800B3FB0 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Reset@CComposition@@UEAAXXZ @ 0x1800DA930 (-Reset@CComposition@@UEAAXXZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800E09DC (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??_GCRenderTargetManager@@IEAAPEAXI@Z @ 0x180156CCC (--_GCRenderTargetManager@@IEAAPEAXI@Z.c)
 *     ??_GCSuperWetInkManager@@QEAAPEAXI@Z @ 0x180156D3C (--_GCSuperWetInkManager@@QEAAPEAXI@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180157610 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180157640 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180157790 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18015798C (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801651D4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x180169D40 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18020FE60 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 */

void __fastcall CComposition::~CComposition(CComposition *this, int a2)
{
  unsigned int i; // ebx
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  CSceneResourceManager *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rsi
  CCursorVisualReference *v11; // rcx
  unsigned int j; // ebx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CRenderTargetManager *v17; // rcx
  __int64 v18; // rcx
  CDrawListEntry *v19; // rcx
  __int64 v20; // rcx
  CDrawListEntry *v21; // rcx
  __int64 v22; // rcx
  void *v23; // rcx
  CRenderTargetBitmap *v24; // rcx
  Microsoft::Bamo::BaseBamoConnection *v25; // rcx
  void *v26; // rcx
  CRenderTargetBitmap *v27; // rcx
  CRenderTargetBitmap *v28; // rcx
  unsigned int v29; // edx
  void *v30; // rbx
  CSuperWetInkManager *v31; // rcx
  CComposition **v32; // rbx
  CComposition *v33; // rcx
  CDrawListEntry *v34; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  CComposition::Reset(this, a2);
  for ( i = 0; i < *((_DWORD *)this + 96); ++i )
    CDrawListEntry::Release(*(CDrawListEntry **)(*((_QWORD *)this + 45) + 8LL * i));
  *((_DWORD *)this + 96) = 0;
  v4 = *((_DWORD *)this + 80);
  if ( v4 )
  {
    v5 = 0LL;
    v6 = v4;
    do
    {
      v34 = *(CDrawListEntry **)(v5 + *((_QWORD *)this + 37));
      ReleaseInterface<CProcessAttribution>(&v34);
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 80) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 296, 8u);
  CComposition::ReleaseNotificationChannels(this);
  v7 = (CSceneResourceManager *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  if ( v7 )
  {
    CSceneResourceManager::~CSceneResourceManager(v7);
    operator delete(v7);
  }
  std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(qword_1803495A8, xmmword_1803495B0);
  *(_QWORD *)&xmmword_1803495B0 = qword_1803495A8;
  *((_DWORD *)this + 140) = 0;
  v8 = *((_DWORD *)this + 210);
  if ( v8 )
  {
    v9 = 0LL;
    v10 = v8;
    do
    {
      v11 = *(CCursorVisualReference **)(v9 + *((_QWORD *)this + 102));
      if ( v11 )
        CCursorVisualReference::`scalar deleting destructor'(v11);
      v9 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  *((_DWORD *)this + 210) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 816, 8u);
  for ( j = 0; j < *((_DWORD *)this + 158); ++j )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 76) + 8LL * j);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *((_DWORD *)this + 158) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 608, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v15 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = (CRenderTargetManager *)*((_QWORD *)this + 11);
  if ( v17 )
    CRenderTargetManager::`scalar deleting destructor'(v17, v14);
  v18 = *((_QWORD *)this + 12);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = (CDrawListEntry *)*((_QWORD *)this + 34);
  if ( v19 )
    CDrawListEntry::Release(v19);
  v20 = *((_QWORD *)this + 13);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = (CDrawListEntry *)*((_QWORD *)this + 15);
  if ( v21 )
    CDrawListEntry::Release(v21);
  v22 = *((_QWORD *)this + 14);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  CThreadContext::DestroyObjectCaches();
  v23 = (void *)*((_QWORD *)this + 146);
  g_pFrameId = 0LL;
  if ( v23 )
  {
    std::_Deallocate<16,0>(v23, (*((_QWORD *)this + 148) - (_QWORD)v23) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 146) = 0LL;
    *((_QWORD *)this + 147) = 0LL;
    *((_QWORD *)this + 148) = 0LL;
  }
  v24 = (CRenderTargetBitmap *)*((_QWORD *)this + 137);
  if ( v24 )
  {
    *((_QWORD *)this + 137) = 0LL;
    CRenderTargetBitmap::Release(v24);
  }
  v25 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 136);
  if ( v25 )
  {
    *((_QWORD *)this + 136) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v25);
  }
  operator delete(*((void **)this + 122));
  v26 = (void *)*((_QWORD *)this + 116);
  if ( v26 )
  {
    std::_Deallocate<16,0>(v26, (*((_QWORD *)this + 118) - (_QWORD)v26) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 116) = 0LL;
    *((_QWORD *)this + 117) = 0LL;
    *((_QWORD *)this + 118) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 896);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 864);
  v27 = (CRenderTargetBitmap *)*((_QWORD *)this + 107);
  if ( v27 )
    CRenderTargetBitmap::Release(v27);
  v28 = (CRenderTargetBitmap *)*((_QWORD *)this + 106);
  if ( v28 )
    CRenderTargetBitmap::Release(v28);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 816);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 656);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 608);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 568);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 536);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 424);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 49);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 45);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 37);
  CMmcssTask::UnloadRuntime((CComposition *)((char *)this + 184));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 21);
  v30 = (void *)*((_QWORD *)this + 19);
  if ( v30 )
  {
    CSceneResourceManager::~CSceneResourceManager(*((CSceneResourceManager **)this + 19));
    operator delete(v30);
  }
  v31 = (CSuperWetInkManager *)*((_QWORD *)this + 16);
  if ( v31 )
    CSuperWetInkManager::`scalar deleting destructor'(v31, v29);
  v32 = (CComposition **)((char *)this + 56);
  v33 = (CComposition *)*((_QWORD *)this + 7);
  if ( (__int64)(*((_QWORD *)this + 8) - (_QWORD)v33) >> 3 )
  {
    detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region((char *)this + 56);
    v33 = *v32;
  }
  *v32 = 0LL;
  if ( v33 == (CComposition *)((char *)this + 80) )
    v33 = 0LL;
  operator delete(v33);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
