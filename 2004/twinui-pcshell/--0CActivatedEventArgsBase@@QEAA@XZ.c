/*
 * XREFs of ??0CActivatedEventArgsBase@@QEAA@XZ @ 0x18004A4B8
 * Callers:
 *     ??0CActivatedEventArgsWithViewIdBase@@QEAA@XZ @ 0x18004A3EC (--0CActivatedEventArgsWithViewIdBase@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039C74 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800CD498 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
CActivatedEventArgsBase *__fastcall CActivatedEventArgsBase::CActivatedEventArgsBase(CActivatedEventArgsBase *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 8));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 16));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 24));
  Microsoft::WRL::FtmBase::FtmBase((CActivatedEventArgsBase *)((char *)this + 32));
  *(_QWORD *)this = &CActivatedEventArgsBase::`vftable';
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)this + 2) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)this + 4) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_WORD *)this + 50) = 0;
  *((_BYTE *)this + 102) = 1;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0LL;
  return this;
}
