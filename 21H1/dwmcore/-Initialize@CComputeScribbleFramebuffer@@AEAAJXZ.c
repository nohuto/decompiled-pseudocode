/*
 * XREFs of ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801AA3C0
 * Callers:
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1801AA194 (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180088B50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801508CC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18023FC28 (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::Initialize(CComputeScribbleFramebuffer *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  int SharedFence; // eax
  unsigned __int64 v5; // r8
  signed int LastErrorFailHr; // ebx
  __int64 v7; // rdx
  CD3DDevice *v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  CD3DDevice *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  wil::details *v14; // rcx
  wil::details *Event; // rbx
  __int64 v16; // r8
  const char *v17; // r9
  unsigned __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64, __int64, GUID *, char *); // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *); // r15
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, _QWORD, __int64, GUID *, char *); // rsi
  __int64 v29; // rdx
  wil::details *v30; // rcx
  wil::details *v31; // rbx
  __int64 v32; // r8
  const char *v33; // r9
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  CD3DDevice *v36; // rbx
  const char *v38; // [rsp+40h] [rbp-10h] BYREF
  int v39; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 *v41; // [rsp+70h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 3);
  v41 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v41);
  SharedFence = v3(v1, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, (__int64 *)&v41);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v7 = 63LL;
LABEL_37:
    v18 = (unsigned int)SharedFence;
    goto LABEL_38;
  }
  v8 = (CD3DDevice *)*((_QWORD *)this + 2);
  v9 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v39 = 10;
  v38 = "PostRender";
  SharedFence = CD3DDevice::CreateSharedFence(
                  v8,
                  (const struct CResourceTag *)&v38,
                  v5,
                  (struct CSharedFence **)this + 9);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v7 = 69LL;
    goto LABEL_37;
  }
  v11 = (CD3DDevice *)*((_QWORD *)this + 2);
  v12 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v39 = 12;
  v38 = "PostScribble";
  SharedFence = CD3DDevice::CreateSharedFence(
                  v11,
                  (const struct CResourceTag *)&v38,
                  v10,
                  (struct CSharedFence **)this + 10);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v7 = 74LL;
    goto LABEL_37;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 11,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v14, v13, v16, v17);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v19 = (__int64)v41;
    v20 = *((_QWORD *)this + 4);
    v21 = *v41;
    *((_QWORD *)this + 4) = 0LL;
    v22 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, char *))(v21 + 72);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    SharedFence = v22(v19, 2LL, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, (char *)this + 32);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v7 = 81LL;
      goto LABEL_37;
    }
    v23 = (__int64)v41;
    v24 = *((_QWORD *)this + 5);
    v25 = *v41;
    *((_QWORD *)this + 5) = 0LL;
    v26 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *))(v25 + 96);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    SharedFence = v26(
                    v23,
                    0LL,
                    2LL,
                    *((_QWORD *)this + 4),
                    0LL,
                    &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
                    (char *)this + 40);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v7 = 88LL;
      goto LABEL_37;
    }
    SharedFence = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v7 = 91LL;
      goto LABEL_37;
    }
    v27 = (__int64)v41;
    v28 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*v41 + 288);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 6);
    SharedFence = v28(v27, 0LL, 1LL, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, (char *)this + 48);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v7 = 100LL;
      goto LABEL_37;
    }
    v31 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v31 )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 7,
        v31);
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v30, v29, v32, v33);
    }
    if ( LastErrorFailHr >= 0 )
    {
      v35 = *((_QWORD *)this + 27);
      v36 = (CD3DDevice *)*((_QWORD *)this + 2);
      *((_QWORD *)this + 27) = 0LL;
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
      v39 = 8;
      v38 = "PostCopy";
      SharedFence = CD3DDevice::CreateSharedFence(
                      v36,
                      (const struct CResourceTag *)&v38,
                      v34,
                      (struct CSharedFence **)this + 27);
      LastErrorFailHr = SharedFence;
      if ( SharedFence >= 0 )
      {
        LastErrorFailHr = 0;
        goto LABEL_40;
      }
      v7 = 107LL;
      goto LABEL_37;
    }
    v18 = (unsigned int)LastErrorFailHr;
    v7 = 102LL;
  }
  else
  {
    v18 = (unsigned int)LastErrorFailHr;
    v7 = 76LL;
  }
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
    (const char *)v18);
LABEL_40:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
  return (unsigned int)LastErrorFailHr;
}
