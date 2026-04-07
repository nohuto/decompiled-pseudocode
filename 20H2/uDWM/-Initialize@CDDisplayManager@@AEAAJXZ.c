/*
 * XREFs of ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x180087400
 * Callers:
 *     ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x180087328 (-Create@CDDisplayManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008725C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 */

__int64 __fastcall CDDisplayManager::Initialize(CDDisplayManager *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int ActivationFactory; // eax
  HRESULT v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+38h] [rbp-19h] BYREF
  HSTRING string; // [rsp+40h] [rbp-11h] BYREF
  HSTRING v14; // [rsp+48h] [rbp-9h] BYREF
  __int64 v15; // [rsp+50h] [rbp-1h] BYREF
  __int64 v16; // [rsp+58h] [rbp+7h] BYREF
  __int64 v17; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  HSTRING_HEADER v19; // [rsp+80h] [rbp+2Fh] BYREF

  v12 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  string = 0LL;
  v14 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
  v3 = v2;
  if ( v2 >= 0 )
  {
    ActivationFactory = RoGetActivationFactory(string, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v12);
    v3 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v5 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayPrimaryDescription", 0x36u, &v19, &v14);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v6 = *((_QWORD *)this + 3);
        *((_QWORD *)this + 3) = 0LL;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v7 = RoGetActivationFactory(v14, &GUID_e60e4cfb_36c9_56dd_8fa1_6ff8c4e0ff07, (char *)this + 24);
        v3 = v7;
        if ( v7 >= 0 )
        {
          v8 = v12;
          v9 = *((_QWORD *)this + 2);
          *((_QWORD *)this + 2) = 0LL;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v8 + 48LL))(v8, 0LL, (char *)this + 16);
          v3 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x33u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x30u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x2Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ActivationFactory, 0x2Bu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x2Au);
  }
  if ( string )
    WindowsDeleteString(string);
  if ( v14 )
    WindowsDeleteString(v14);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v12);
  return v3;
}
