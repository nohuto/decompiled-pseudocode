/*
 * XREFs of ??1CVisibilityOverride@@UEAA@XZ @ 0x180137A20
 * Callers:
 *     ??_GCVisibilityOverride@@UEAAPEAXI@Z @ 0x180137B10 (--_GCVisibilityOverride@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisibilityOverride::~CVisibilityOverride(CVisibilityOverride *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CVisibilityOverride::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable'{for `IVisibilityOverride'};
  *((_QWORD *)this + 4) = &CVisibilityOverride::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
