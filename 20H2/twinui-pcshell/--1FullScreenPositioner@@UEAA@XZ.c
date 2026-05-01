/*
 * XREFs of ??1FullScreenPositioner@@UEAA@XZ @ 0x1801A4934
 * Callers:
 *     ??_GFullScreenPositioner@@UEAAPEAXI@Z @ 0x1801A4D7C (--_GFullScreenPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@AEAAXXZ @ 0x1801A82F4 (-_Tidy@-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std@@AE.c)
 */

void __fastcall FullScreenPositioner::~FullScreenPositioner(FullScreenPositioner *this)
{
  __int64 *v1; // rbx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  void *v5; // rcx
  void *v6; // rcx
  volatile int *v7; // rdx

  v1 = (__int64 *)((char *)this + 376);
  v3 = (void *)*((_QWORD *)this + 49);
  if ( v3 )
  {
    v4 = 0LL;
    if ( v1[3] )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v1[2] + 8 * v4++));
      while ( v4 < v1[3] );
      v3 = (void *)v1[2];
    }
    CoTaskMemFree(v3);
    v1[2] = 0LL;
  }
  v1[3] = 0LL;
  v1[5] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  std::deque<positioningOperationInfo>::_Tidy((char *)this + 304);
  v5 = (void *)*((_QWORD *)this + 38);
  *((_QWORD *)this + 38) = 0LL;
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
  v6 = (void *)*((_QWORD *)this + 31);
  if ( v6 )
  {
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 33) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<IFullScreenPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,IApplicationViewChangeListener,ITabletModeChangeListener,IFullScreenPositionerNotificationService,IFullScreenPositionerTestHandler,ITransitionStateChangeHandler,IPrivilegedOperationsConsumer>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<IFullScreenPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,IApplicationViewChangeListener,ITabletModeChangeListener,IFullScreenPositionerNotificationService,IFullScreenPositionerTestHandler,ITransitionStateChangeHandler,IPrivilegedOperationsConsumer>(
    (__int64 *)this,
    v7);
}
