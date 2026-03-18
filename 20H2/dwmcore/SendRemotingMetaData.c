/*
 * XREFs of SendRemotingMetaData @ 0x1801C3304
 * Callers:
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x1801C3118 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x1801C3234 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1800459AC (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x180079CF8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SendRemotingMetaData(__int64 a1)
{
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 11));
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v12,
    (__int64)PrimaryMonitorTarget);
  if ( v12 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 120LL))(v12);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v11,
      v4);
    if ( !v11 )
    {
      v3 = -2003304307;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)0x8898008DLL);
LABEL_12:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
      goto LABEL_13;
    }
    v10 = 0LL;
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v11 + 8) + 4LL) + v11 + 8);
    v6 = (**v5)(v5, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v10);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, a1);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v3 = 0;
        goto LABEL_11;
      }
      v7 = 74LL;
    }
    else
    {
      v7 = 72LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)(unsigned int)v6);
LABEL_11:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
    goto LABEL_12;
  }
  v3 = -2003304442;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
    (const char *)0x88980006LL);
LABEL_13:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
  return v3;
}
