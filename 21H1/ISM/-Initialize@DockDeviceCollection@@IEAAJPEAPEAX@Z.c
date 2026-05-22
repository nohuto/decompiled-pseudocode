/*
 * XREFs of ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180021A6C
 * Callers:
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002192C (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180022DE8 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180065828 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall DockDeviceCollection::Initialize(DockDeviceCollection *this, void **a2, __int64 a3, unsigned int a4)
{
  int LastErrorFailHr; // ebx
  wil::details *v6; // rcx
  HANDLE Event; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 65553;
  LastErrorFailHr = HIDDeviceCollection::Initialize(
                      this,
                      (unsigned int)a2,
                      (struct _RIM_USAGE_ANDPAGE *const)&v15,
                      a4,
                      0x40u,
                      a2);
  if ( LastErrorFailHr < 0 )
  {
    v12 = 59LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      v13);
    return (unsigned int)LastErrorFailHr;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (char *)this + 2768,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
  }
  if ( LastErrorFailHr < 0 )
  {
    v12 = 63LL;
    goto LABEL_12;
  }
  v8 = *((_QWORD *)this + 345);
  *((_QWORD *)this + 345) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = CoreUICreate((char *)this + 2760);
  v10 = v9;
  if ( v9 >= 0 )
  {
    LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), DockDeviceCollection *))(**((_QWORD **)this + 345) + 256LL))(
                        *((_QWORD *)this + 345),
                        *((_QWORD *)this + 346),
                        DockDeviceCollection::OnReportQueryCallbackStatic,
                        this);
    if ( LastErrorFailHr >= 0 )
      return 0LL;
    v12 = 70LL;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
    (const char *)(unsigned int)v9,
    v13);
  return v10;
}
