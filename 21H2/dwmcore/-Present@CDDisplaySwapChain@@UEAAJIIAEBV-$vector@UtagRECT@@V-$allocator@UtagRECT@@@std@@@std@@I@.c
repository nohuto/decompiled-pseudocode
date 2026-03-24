/*
 * XREFs of ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800F1620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180239954 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 *     ?GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@Z @ 0x180239C5C (-GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x18023A7DC (-PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 *     ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x18023A8D8 (-PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::Present(__int64 a1, int a2, char a3)
{
  CDDisplaySwapChain *v3; // rsi
  bool v6; // di
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _QWORD, int, _DWORD, struct Windows::Devices::Display::Core::IDisplayScanout **); // r14
  struct Windows::Devices::Display::Core::IDisplaySurface *DesktopPrimary; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0LL;
  v3 = (CDDisplaySwapChain *)(a1 - 64);
  v6 = (a3 & 2) != 0;
  v7 = CDDisplaySwapChain::PrePresent((CDDisplaySwapChain *)(a1 - 64), v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x271u, 0LL);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 88);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _QWORD, int, _DWORD, struct Windows::Devices::Display::Core::IDisplayScanout **))(*(_QWORD *)v10 + 80LL);
    if ( v20 )
      (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v20 + 16LL))(v20);
    DesktopPrimary = CDDisplaySwapChain::GetDesktopPrimary(v3, v6);
    v13 = v11(v10, *(_QWORD *)(a1 + 120), DesktopPrimary, 0LL, a2, 0, &v20);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x27Bu, 0LL);
    }
    else
    {
      v15 = CDDisplaySwapChain::ExecutePresent(v3, v20);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x27Du, 0LL);
      }
      else
      {
        v17 = CDDisplaySwapChain::PostPresent(v3, v6);
        v9 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x27Fu, 0LL);
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  return v9;
}
