/*
 * XREFs of ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18005EB00
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005EA70 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800BDB60 (-Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteControlBase::Initialize(void **this, struct IMMDevice *a2)
{
  _QWORD *v2; // rsi
  int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 4;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 4,
    0LL);
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD *))a2->lpVtbl->GetId)(a2, v2);
  if ( v5 < 0 )
  {
    v7 = 161LL;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      this + 5,
      0LL);
    mmdDevGetInstanceIdFromMMDeviceId(*v2, this + 5);
    v5 = (*((__int64 (__fastcall **)(void **))*this + 14))(this);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 166LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
