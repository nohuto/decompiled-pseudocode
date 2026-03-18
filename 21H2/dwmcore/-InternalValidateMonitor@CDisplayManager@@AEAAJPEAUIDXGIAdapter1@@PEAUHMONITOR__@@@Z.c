/*
 * XREFs of ?InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z @ 0x18027FBF0
 * Callers:
 *     ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x18027FD74 (-ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::InternalValidateMonitor(
        CDisplayManager *this,
        struct IDXGIAdapter1 *a2,
        HMONITOR a3)
{
  struct IDXGIAdapter1Vtbl *lpVtbl; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int i; // edi
  __int64 v8; // rax
  bool v9; // bl
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v15; // [rsp+48h] [rbp-39h]
  __int64 v16; // [rsp+50h] [rbp-31h] BYREF
  char v17; // [rsp+58h] [rbp-29h]
  _BYTE v18[88]; // [rsp+68h] [rbp-19h] BYREF
  HMONITOR v19; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  lpVtbl = a2->lpVtbl;
  v14 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IDXGIAdapter1 *, GUID *, __int64 **))lpVtbl->QueryInterface)(
         a2,
         &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    for ( i = 0; ; ++i )
    {
      v8 = *v14;
      v16 = 0LL;
      v15 = &v13;
      v17 = 1;
      v9 = (*(int (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v8 + 40))(v14, i, 0xFFFFFFFFLL, &v16) >= 0;
      if ( v17 )
      {
        v10 = *v15;
        *v15 = v16;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( !v9 )
        break;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 56LL))(v13, v18);
      v6 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_14;
      }
      if ( a3 == v19 )
      {
        v6 = 0;
        goto LABEL_14;
      }
    }
    v6 = -2005270526;
LABEL_14:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v6;
}
