/*
 * XREFs of ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18002C734
 * Callers:
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x18002C9D8 (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029E34 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18002C67C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::Initialize(
        InputRedirectionProcessor *this,
        struct IInputDeviceInfoStore *a2)
{
  __int64 *v3; // rdi
  int Descriptor; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, const wchar_t *, char *); // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, char *, _QWORD, _QWORD); // rbp
  __int64 v12; // rcx
  __int64 v14; // rdx
  const char *v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  char v17; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = 0;
  v16 = 0LL;
  v17 = 0;
  *((_QWORD *)this + 9) = a2;
  v3 = (__int64 *)((char *)this + 40);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 40);
  Descriptor = CoreUICreate(v3);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v14 = 26LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system"
                    "\\lib\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)Descriptor,
      (int)v15);
    goto LABEL_10;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v16, v5, (__int64)L"System\\TouchInputRedirection");
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v14 = 30LL;
    goto LABEL_17;
  }
  v7 = *v3;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v7 + 56LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 56);
  Descriptor = v8(v7, v16, L"System\\TouchInputRedirection", (char *)this + 56);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v14 = 35LL;
    goto LABEL_17;
  }
  v9 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 48);
  Descriptor = CoreUIFactoryCreate((char *)this + 48);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v14 = 37LL;
    goto LABEL_17;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
                 *v9,
                 &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb,
                 &v19);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v14 = 41LL;
    goto LABEL_17;
  }
  v10 = *v9;
  v11 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v10 + 32LL);
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v15 = L"TouchInputRedirection";
  Descriptor = v11(v10, (char *)this + 8, 0LL, v19);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v14 = 49LL;
    goto LABEL_17;
  }
  v6 = 0;
LABEL_10:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
  return v6;
}
