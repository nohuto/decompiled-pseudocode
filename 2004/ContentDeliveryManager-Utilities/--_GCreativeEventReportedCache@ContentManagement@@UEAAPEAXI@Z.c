/*
 * XREFs of ??_GCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z @ 0x18003C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180018E44 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificati.c)
 */

ContentManagement::CreativeEventReportedCache *__fastcall ContentManagement::CreativeEventReportedCache::`scalar deleting destructor'(
        ContentManagement::CreativeEventReportedCache *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v5 = (void *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    CoTaskMemFree(v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
