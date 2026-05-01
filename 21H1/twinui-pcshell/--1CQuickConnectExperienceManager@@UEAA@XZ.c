/*
 * XREFs of ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x1801B8A9C
 * Callers:
 *     ??_ECQuickConnectExperienceManager@@UEAAPEAXI@Z @ 0x1801B90D0 (--_ECQuickConnectExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180450274 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CQuickConnectExperienceManager::~CQuickConnectExperienceManager(CQuickConnectExperienceManager *this)
{
  __int64 v2; // rcx
  volatile int *v3; // rdx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
  WindowsDeleteString(*((HSTRING *)this + 47));
  *((_QWORD *)this + 47) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  v2 = *((_QWORD *)this + 35);
  if ( v2 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CQuickConnectExperienceManager *)((char *)this + 72));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
    (__int64)this,
    v3);
}
