/*
 * XREFs of ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z @ 0x180087D2C
 * Callers:
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x180085ED8 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180029550 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008797C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 */

__int64 __fastcall CDDisplayManager::MakeSourceHandleForTarget(CDDisplayManager *this, void **a2, unsigned int *a3)
{
  __int64 v4; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rbx
  int v30; // eax
  __int64 v32; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h] BYREF
  __int64 v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-38h] BYREF
  __int64 v36; // [rsp+50h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-28h] BYREF
  __int64 v38; // [rsp+60h] [rbp-20h] BYREF
  __int64 v39; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v40[8]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v41[8]; // [rsp+78h] [rbp-8h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v43; // [rsp+C8h] [rbp+48h] BYREF

  v4 = *((_QWORD *)this + 2);
  v38 = 0LL;
  hObject = 0LL;
  v42 = 0;
  v39 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 48LL))(v4, &v39);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 56LL))(v39, &v42);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v10 = 0;
      if ( v42 )
      {
        while ( 1 )
        {
          v33 = 0LL;
          v32 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v39 + 48LL))(v39, v10, &v32);
          v8 = v11;
          if ( v11 < 0 )
            break;
          v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 64LL))(v32, &v43);
          v8 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x5Cu);
            goto LABEL_42;
          }
          v13 = v33;
          v14 = v32;
          v33 = 0LL;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 48LL))(v14, &v33);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x5Du);
            goto LABEL_42;
          }
          v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v33 + 48LL))(v33, v41);
          v8 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x5Eu);
            goto LABEL_42;
          }
          v17 = *((_QWORD *)this + 2);
          v35 = 0LL;
          v34 = 0LL;
          v18 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v17 + 64LL))(v17, v32, v40);
          v8 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x69u);
            goto LABEL_29;
          }
          v19 = v34;
          v20 = *((_QWORD *)this + 2);
          v34 = 0LL;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 80LL))(v20, &v34);
          v8 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x6Cu);
            goto LABEL_29;
          }
          v22 = v38;
          v23 = v34;
          v38 = 0LL;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 64LL))(v23, &v38);
          v8 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x6Du);
LABEL_29:
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v34);
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)&v35);
            goto LABEL_42;
          }
          v25 = (__int64)v35;
          v26 = v38;
          v35 = 0LL;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          v27 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v26 + 120LL))(v26, v32, &v35);
          v8 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x70u);
            goto LABEL_29;
          }
          if ( v35 )
          {
            v36 = 0LL;
            v28 = (**v35)(v35, &GUID_a6ba4205_e59e_4e71_b25b_4e436d21ee3d, &v36);
            v8 = v28;
            if ( v28 >= 0 )
            {
              v29 = v36;
              wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
                &hObject,
                0LL);
              v30 = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v29 + 24LL))(v29, &hObject);
              v8 = v30;
              if ( v30 >= 0 )
              {
                *a2 = hObject;
                *a3 = v43;
                hObject = 0LL;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x75u);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x74u);
            }
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v36);
            goto LABEL_29;
          }
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v34);
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)&v35);
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v33);
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v32);
          if ( ++v10 >= v42 )
            goto LABEL_43;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5Bu);
LABEL_42:
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v33);
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v32);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x50u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x4Fu);
  }
LABEL_43:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v38);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v39);
  return v8;
}
