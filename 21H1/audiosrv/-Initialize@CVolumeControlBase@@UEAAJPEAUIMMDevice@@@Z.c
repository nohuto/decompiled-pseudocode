/*
 * XREFs of ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180060A10
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800607BC (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800C03E0 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::Initialize(void **this, struct IUnknown *a2)
{
  _QWORD *v4; // r14
  int v5; // ebx
  struct IUnknown *v6; // rcx
  int v7; // ecx
  struct IUnknown *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = this + 8;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, void **))a2->lpVtbl[1].Release)(a2, this + 8);
  if ( v5 < 0 )
    goto LABEL_9;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 9,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*v4, this + 9);
  v6 = v9;
  if ( v9 != a2 )
  {
    ATL::AtlComQIPtrAssign(&v9, a2, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v6 = v9;
  }
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v6->lpVtbl[1].QueryInterface)(v6, (char *)this + 80);
  if ( v5 < 0
    || (v5 = (*((__int64 (__fastcall **)(void **))*this + 28))(this),
        v7 = *((_DWORD *)this + 20),
        this[29] = (void *)*v4,
        *((_DWORD *)this + 60) = v7,
        v5 < 0) )
  {
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::Initialize", 132, v5);
  }
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v5;
}
