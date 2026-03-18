/*
 * XREFs of ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18003B7A4
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003B31C (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003DD6C (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayManager::InternalGetAdapter(
        CDisplayManager *this,
        struct _LUID a2,
        struct IDXGIAdapter1 **a3)
{
  DWORD LowPart; // ebx
  int DXGIFactory; // eax
  int v6; // esi
  struct IDXGIFactory5 *v7; // rdi
  unsigned int v8; // r14d
  LONG HighPart; // r12d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct IDXGIFactory5 *v15; // [rsp+28h] [rbp-D8h] BYREF
  int *v16; // [rsp+30h] [rbp-D0h]
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  char v18; // [rsp+40h] [rbp-C0h]
  struct _LUID v19; // [rsp+48h] [rbp-B8h]
  _BYTE v20[296]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+178h] [rbp+78h]
  int v22; // [rsp+17Ch] [rbp+7Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  LowPart = a2.LowPart;
  v19 = a2;
  *a3 = 0LL;
  v15 = 0LL;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v15);
  v6 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
      (const char *)(unsigned int)DXGIFactory,
      v14[0]);
  }
  else
  {
    v7 = v15;
    v8 = 0;
    HighPart = v19.HighPart;
    *(_QWORD *)v14 = 0LL;
    while ( 1 )
    {
      lpVtbl = v7->lpVtbl;
      v16 = v14;
      v17 = 0LL;
      v18 = 1;
      v6 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v7, v8, &v17);
      if ( v18 )
      {
        v11 = *(_QWORD *)v16;
        *(_QWORD *)v16 = v17;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( v6 < 0 )
        break;
      memset_0(v20, 0, 0x138uLL);
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v14 + 80LL))(*(_QWORD *)v14, v20);
      v6 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BE,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
          (const char *)(unsigned int)v12,
          v14[0]);
        break;
      }
      if ( LowPart == v21 && HighPart == v22 )
      {
        v6 = 0;
        *a3 = *(struct IDXGIAdapter1 **)v14;
        *(_QWORD *)v14 = 0LL;
        break;
      }
      ++v8;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v14);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  return (unsigned int)v6;
}
