/*
 * XREFs of ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x180262AA4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x180262378 (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x180290238 (-LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1802629B4 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 *     GetStagingTexture @ 0x180262E74 (GetStagingTexture.c)
 */

__int64 __fastcall DebugInspectTexture(struct ID3D11Texture2D *a1, unsigned int a2)
{
  int StagingTexture; // eax
  unsigned int v5; // edi
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v13; // [rsp+50h] [rbp-9h] BYREF
  void *v14; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+7h]
  unsigned int v16[12]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v12 = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v12);
  StagingTexture = GetStagingTexture(a1, &v12);
  v5 = StagingTexture;
  if ( StagingTexture >= 0 )
  {
    v6 = v12;
    (*(void (__fastcall **)(__int64 *, unsigned int *))(*v12 + 80))(v12, v16);
    v7 = *v6;
    v13 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 **))(v7 + 24))(v6, &v13);
    v8 = *v13;
    v11 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 320))(v13, &v11);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v11 + 112LL))(
           v11,
           v6,
           a2,
           1LL,
           0,
           &v14);
    v5 = v9;
    if ( v9 >= 0 )
    {
      DebugInspectSysMemSurface(v14, v16[0], v16[1], (enum DXGI_FORMAT)v16[4], v15);
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 120LL))(v11, v6, a2);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v9);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)StagingTexture);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v5;
}
