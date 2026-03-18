/*
 * XREFs of ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801EB930
 * Callers:
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1801EB5C0 (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x1801EB25C (--1CComputeScribbleSynchronizer@@QEAA@XZ.c)
 *     ?Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1801ECF64 (-Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::Initialize(CComputeScribbleFramebuffer *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, _QWORD **); // rbx
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD *, __int64, GUID *, char *); // rdi
  int v12; // eax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *); // r15
  int v17; // eax
  int v18; // eax
  unsigned int v19; // edx
  struct CD3DDevice *v20; // rcx
  CComputeScribbleSynchronizer *v21; // rdi
  CComputeScribbleSynchronizer **v23; // [rsp+40h] [rbp-20h]
  struct CComputeScribbleSynchronizer *v24; // [rsp+48h] [rbp-18h] BYREF
  char v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  _QWORD *v27; // [rsp+80h] [rbp+20h] BYREF

  v1 = *((_QWORD *)this + 3);
  v27 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, _QWORD **))(*(_QWORD *)v1 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v27);
  v4 = v3(v1, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &v27);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = v27;
    v9 = *((_QWORD *)this + 4);
    v10 = *v27;
    *((_QWORD *)this + 4) = 0LL;
    v11 = *(__int64 (__fastcall **)(_QWORD *, __int64, GUID *, char *))(v10 + 72);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v12 = v11(v8, 2LL, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, (char *)this + 32);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v13 = v27;
      v14 = *((_QWORD *)this + 5);
      v15 = *v27;
      *((_QWORD *)this + 5) = 0LL;
      v16 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *))(v15 + 96);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v17 = v16(
              v13,
              0LL,
              2LL,
              *((_QWORD *)this + 4),
              0LL,
              &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
              (char *)this + 40);
      v5 = v17;
      if ( v17 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
        v5 = v18;
        if ( v18 >= 0 )
        {
          v19 = *((_DWORD *)this + 61);
          v20 = (struct CD3DDevice *)*((_QWORD *)this + 2);
          v24 = 0LL;
          v23 = (CComputeScribbleSynchronizer **)((char *)this + 48);
          v25 = 1;
          v5 = CComputeScribbleSynchronizer::Create(v20, v19, &v24);
          if ( v25 )
          {
            v21 = *v23;
            *v23 = v24;
            if ( v21 )
            {
              CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(v21, v23);
              operator delete(v21);
            }
          }
          if ( v5 >= 0 )
          {
            v5 = 0;
            goto LABEL_20;
          }
          v6 = (unsigned int)v5;
          v7 = 86LL;
        }
        else
        {
          v6 = (unsigned int)v18;
          v7 = 77LL;
        }
      }
      else
      {
        v6 = (unsigned int)v17;
        v7 = 74LL;
      }
    }
    else
    {
      v6 = (unsigned int)v12;
      v7 = 67LL;
    }
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 62LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
    (const char *)v6);
LABEL_20:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  return (unsigned int)v5;
}
