/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180037C0C
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180037B74 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029E34 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18002C67C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x180037DDC (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this, __int64 a2)
{
  int Descriptor; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, const wchar_t *, char *); // rbx
  int v7; // eax
  _QWORD *v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, char *, _QWORD, _QWORD); // rbp
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  char v20; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h]

  v19 = 0LL;
  v20 = 0;
  v22 = 0;
  v23 = 0LL;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v19, a2, (__int64)L"System\\Input\\CursorBrokerPort");
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v17 = 57LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)Descriptor);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 22);
  Descriptor = CoreUICreate((char *)this + 176);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v17 = 59LL;
    goto LABEL_23;
  }
  v5 = *((_QWORD *)this + 22);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v5 + 56LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 25);
  v7 = v6(v5, v19, L"System\\Input\\CursorBrokerPort", (char *)this + 200);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v7,
      v18);
    __debugbreak();
  }
  v8 = (_QWORD *)((char *)this + 184);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 23);
  Descriptor = CoreUIFactoryCreate((char *)this + 184);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v17 = 66LL;
    goto LABEL_23;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v8 + 24LL))(
         *v8,
         &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
         &v22);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v9,
      v18);
    __debugbreak();
  }
  v10 = *v8;
  v11 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v10 + 32LL);
  v12 = *((_QWORD *)this + 24);
  if ( v12 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v11(v10, (char *)this + 8, 0LL, v22);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v13,
      (int)L"System\\Input\\CursorBrokerEndpoint");
    __debugbreak();
  }
  v14 = (_QWORD *)((char *)this + 472);
  v15 = *((_QWORD *)this + 59);
  if ( v15 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Descriptor = InputConfigContextProvider::Create((struct ISystemContextProvider **)this + 59);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v17 = 81LL;
    goto LABEL_23;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 24LL))(*v14, (char *)this + 16);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v17 = 83LL;
    goto LABEL_23;
  }
  *((_DWORD *)this + 114) = 3;
  v4 = 0;
LABEL_14:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v19);
  return v4;
}
