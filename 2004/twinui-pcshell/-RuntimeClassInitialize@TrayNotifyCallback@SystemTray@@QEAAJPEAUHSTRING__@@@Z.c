/*
 * XREFs of ?RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18037D23C
 * Callers:
 *     ??$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayNotifyCallback@SystemTray@@AEAPEAUHSTRING__@@@Z @ 0x18037BE6C (--$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsof.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180011C60 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayNotifyCallback::RuntimeClassInitialize(HSTRING *this, HSTRING a2)
{
  int v3; // eax
  unsigned int v4; // esi
  char v5; // bl
  __int64 result; // rax
  HRESULT v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  unsigned int v10; // esi
  const char *v11; // r9
  int v12; // eax
  unsigned int v13; // esi
  HSTRING v14; // rcx
  unsigned int v15; // [rsp+30h] [rbp-38h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)&v17 = a2;
  v3 = Microsoft::WRL::Wrappers::HString::Set(this + 2, (HSTRING *)&v17);
  v4 = v3;
  v5 = 0;
  if ( v3 >= 0 )
  {
    ppv = 0LL;
    v7 = CoCreateInstance(
           &GUID_25dead04_1eac_4911_9e3a_ad0a4ab560fd,
           0LL,
           4u,
           &GUID_d133ce13_3537_48ba_93a7_afcd5d2053b4,
           &ppv);
    v8 = v7;
    if ( v7 >= 0 )
    {
      try
      {
        v15 = 0;
        v9 = (*(__int64 (__fastcall **)(LPVOID, HSTRING *, unsigned int *))(*(_QWORD *)ppv + 24LL))(ppv, this, &v15);
        v10 = v9;
        if ( v9 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 32LL))(ppv, v15);
          v13 = v12;
          if ( v12 >= 0 )
          {
            if ( this[5] || this[7] )
              goto LABEL_16;
            v17 = 0LL;
            v14 = this[8];
            if ( !v14 )
              v14 = (HSTRING)((char *)this[9] - *((_QWORD *)&v17 + 1));
            if ( v14 )
LABEL_16:
              v5 = 1;
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
            result = v5 == 0 ? 0x80070490 : 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x15,
              (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
              (const char *)(unsigned int)v12);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
            result = v13;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14,
            (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
            (const char *)(unsigned int)v9);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
          result = v10;
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x1A,
                               (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
                               v11);
      }
    }
    else if ( v7 == -2147221164 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
      return 2147746132LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  return result;
}
