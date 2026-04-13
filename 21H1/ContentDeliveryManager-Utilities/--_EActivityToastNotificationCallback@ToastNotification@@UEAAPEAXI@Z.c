/*
 * XREFs of ??_EActivityToastNotificationCallback@ToastNotification@@UEAAPEAXI@Z @ 0x18004E470
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005F80 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004D814 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23_ea_18004D814.c)
 */

ToastNotification::ActivityToastNotificationCallback *__fastcall ToastNotification::ActivityToastNotificationCallback::`vector deleting destructor'(
        ToastNotification::ActivityToastNotificationCallback *this,
        void *a2)
{
  char v2; // di
  wil::details *v4; // rcx

  v2 = (char)a2;
  v4 = (wil::details *)*((_QWORD *)this + 10);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>((__int64)this);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
