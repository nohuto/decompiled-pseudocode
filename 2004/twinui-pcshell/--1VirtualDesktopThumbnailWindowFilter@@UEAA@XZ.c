/*
 * XREFs of ??1VirtualDesktopThumbnailWindowFilter@@UEAA@XZ @ 0x18038B250
 * Callers:
 *     ??_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z @ 0x18038B340 (--_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::_EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___ @ 0x1800ACD94 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotifi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopThumbnailWindowFilter::~VirtualDesktopThumbnailWindowFilter(
        VirtualDesktopThumbnailWindowFilter *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 9) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 8) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 9) );
      v2 = (void *)*((_QWORD *)this + 8);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::_EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___((__int64)this + 48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 5) = -1073741823;
}
