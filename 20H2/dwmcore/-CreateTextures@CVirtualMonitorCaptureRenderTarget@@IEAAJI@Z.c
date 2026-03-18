/*
 * XREFs of ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x180187D70
 * Callers:
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x180188084 (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x1800E89E4 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801869FC (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::CreateTextures(
        CVirtualMonitorCaptureRenderTarget *this,
        unsigned int a2)
{
  int v4; // ebx
  struct CD3DDevice *D3DDeviceNoRef; // rax
  __int64 *v6; // r15
  int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *, _DWORD *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  unsigned int v18; // [rsp+28h] [rbp-29h]
  __int64 v19; // [rsp+38h] [rbp-19h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-11h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-9h] BYREF
  void *v22; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v23[12]; // [rsp+58h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = 0;
  *((_QWORD *)this + 237) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                                + 136LL)
                                                                                  + 40LL))(
                                         *(_QWORD *)(*((_QWORD *)this + 2) + 136LL),
                                         &v22);
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef(this);
  if ( D3DDeviceNoRef )
  {
    v6 = (__int64 *)*((_QWORD *)D3DDeviceNoRef + 74);
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v8 = *((_DWORD *)this + 529);
        v20 = 0LL;
        v19 = 0LL;
        v23[6] = 0;
        v23[7] = 0;
        v23[9] = 0;
        v23[0] = v8;
        v23[1] = *((_DWORD *)this + 530);
        v9 = *v6;
        v23[2] = 1;
        v23[3] = 1;
        v23[4] = 87;
        v10 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v9 + 40);
        v23[5] = 1;
        v23[8] = 40;
        v23[10] = 2050;
        wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v20);
        v11 = v10(v6, v23, 0LL, &v20);
        v4 = v11;
        if ( v11 < 0 )
          break;
        v13 = v19;
        v19 = 0LL;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v14 = (**v20)(v20, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v19);
        v4 = v14;
        if ( v14 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4E1,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
            (const char *)(unsigned int)v14);
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v4, 0xD0u, 0LL);
          goto LABEL_20;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v19 + 104LL))(
                v19,
                0LL,
                0x10000000LL,
                0LL,
                &v22);
        v4 = v11;
        if ( v11 < 0 )
        {
          v18 = 209;
          goto LABEL_19;
        }
        v16 = (_QWORD *)*((_QWORD *)this + 255);
        hObject = v22;
        if ( *((_QWORD **)this + 256) == v16 )
        {
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
            (__int64 *)this + 254,
            (__int64)v16,
            &hObject);
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
        }
        else
        {
          *v16 = v22;
          *((_QWORD *)this + 255) += 8LL;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
        if ( ++v7 >= a2 )
          return (unsigned int)v4;
      }
      v18 = 206;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v18, 0LL);
LABEL_20:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
    }
  }
  return (unsigned int)v4;
}
