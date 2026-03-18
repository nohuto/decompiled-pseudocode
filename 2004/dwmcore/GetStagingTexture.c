/*
 * XREFs of GetStagingTexture @ 0x18020FA88
 * Callers:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18020F510 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18020F684 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180186514 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetStagingTexture(__int64 a1, __int64 *a2)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _BYTE *, _QWORD, __int64 *); // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v16[28]; // [rsp+48h] [rbp-38h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 80LL))(a1, v16);
  if ( v17 == 3 )
  {
    *a2 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v14 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 **))(v5 + 24))(a1, &v14);
    v6 = *v14;
    v15 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v6 + 320))(v14, &v15);
    v7 = (__int64)v14;
    v13 = 0LL;
    v18 = 0;
    v20 = 0;
    v17 = 3;
    v19 = 0x20000;
    v8 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*v14 + 40);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v13);
    v9 = v8(v7, v16, 0LL, &v13);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, const GUID *, __int64, const char *))(*(_QWORD *)v13 + 40LL))(
              v13,
              &WKPDID_D3DDebugObjectName,
              25LL,
              "DWM Temp Readback (debug)");
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x86,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
          (const char *)(unsigned int)v11);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 376LL))(v15, v13, a1);
      v12 = v13;
      v13 = 0LL;
      v10 = 0;
      *a2 = v12;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v9);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    return v10;
  }
}
