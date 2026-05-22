/*
 * XREFs of ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KI@Z @ 0x180106884
 * Callers:
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x180108FE8 (-OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z.c)
 *     ?OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KI@Z @ 0x180109844 (-OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KI@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B33C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Input::MPCManager::HomeGestureEventArgs *__fastcall Windows::Internal::Input::MPCManager::HomeGestureEventArgs::HomeGestureEventArgs(
        Windows::Internal::Input::MPCManager::HomeGestureEventArgs *this,
        int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  _QWORD *v6; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v11; // rcx
  Windows::Internal::Input::MPCManager::HomeGestureEventArgs *result; // rax

  v6 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Input::MPCManager::HomeGestureEventArgs *)((char *)this + 16));
  v11 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v6 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v11 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v11 + 8LL))(v11);
  *((_DWORD *)this + 17) = a3;
  *(_QWORD *)this = &Windows::Internal::Input::MPCManager::HomeGestureEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Input::MPCManager::HomeGestureEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v6 = &Windows::Internal::Input::MPCManager::HomeGestureEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 22) = a6;
  result = this;
  *((_DWORD *)this + 18) = a4;
  *((_DWORD *)this + 16) = a2;
  return result;
}
