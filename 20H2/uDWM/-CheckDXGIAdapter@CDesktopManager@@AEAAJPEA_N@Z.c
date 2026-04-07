/*
 * XREFs of ?CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z @ 0x1800853F8
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004A1D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z @ 0x1800365D8 (-CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     memset_0 @ 0x1800563D2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x1800863E0 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 */

__int64 __fastcall CDesktopManager::CheckDXGIAdapter(CDesktopManager *this, bool *a2)
{
  CDesktopManager *v2; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // bl
  HRESULT v10; // eax
  void *v11; // rbx
  bool v12[8]; // [rsp+38h] [rbp-D0h] BYREF
  void *ppFactory; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v16[296]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+180h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( a2 )
    *a2 = 0;
  v12[0] = 0;
  v4 = CDesktopManager::CheckInteropDCompDevice(v2, v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x254,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  if ( v12[0] )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
    v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)v2 + 28) + 48LL))(
           *((_QWORD *)v2 + 28),
           &GUID_770aae78_f26f_4dba_a829_253c83d1b387,
           &v14);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 605LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_16:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
      return v5;
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 104LL))(v14) )
    {
      v9 = 1;
    }
    else
    {
      memset_0(v16, 0, 0x130uLL);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)v2 + 28) + 64LL))(*((_QWORD *)v2 + 28), v16);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 613LL;
        goto LABEL_13;
      }
      ppFactory = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppFactory);
      v10 = CreateDXGIFactory(&GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a, &ppFactory);
      v5 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x268,
          (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppFactory);
        goto LABEL_16;
      }
      v15 = 0LL;
      v11 = ppFactory;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
      v9 = (*(int (__fastcall **)(void *, __int64, GUID *, __int64 *))(*(_QWORD *)v11 + 208LL))(
             v11,
             v17,
             &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
             &v15) >= 0;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppFactory);
    }
    if ( a2 )
      *a2 = v9;
    if ( !v9 )
      CDesktopManager::HandleInteropDeviceLost();
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
  }
  return 0LL;
}
