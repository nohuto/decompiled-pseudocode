/*
 * XREFs of ??0CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1803757F8
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180375730 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL.c)
 *     ??0CSnapAssistViewController@@QEAA@XZ @ 0x18037BC20 (--0CSnapAssistViewController@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

CMultitaskingViewControllerBase *__fastcall CMultitaskingViewControllerBase::CMultitaskingViewControllerBase(
        CMultitaskingViewControllerBase *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  IApplicationViewChangeListener::IApplicationViewChangeListener((CMultitaskingViewControllerBase *)((char *)this + 8));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CMultitaskingViewControllerBase *)((char *)this + 16));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CMultitaskingViewControllerBase *)((char *)this + 24));
  *(_QWORD *)this = &CMultitaskingViewControllerBase::`vftable'{for `IMultitaskingViewController'};
  *((_QWORD *)this + 1) = &CMultitaskingViewControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
  *((_QWORD *)this + 2) = &CMultitaskingViewControllerBase::`vftable'{for `ISwitchItemController'};
  *((_QWORD *)this + 3) = &CMultitaskingViewControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_WORD *)this + 56) = 0;
  *((_QWORD *)this + 15) = 0LL;
  return this;
}
