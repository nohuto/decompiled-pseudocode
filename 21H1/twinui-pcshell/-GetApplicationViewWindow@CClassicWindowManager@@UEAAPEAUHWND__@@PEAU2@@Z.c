/*
 * XREFs of ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x18004B450
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x18004BA60 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetApplicationViewWindow(CClassicWindowManager *this, HWND a2)
{
  HWND Window; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  HWND v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  Window = a2;
  v4 = 0LL;
  while ( Window )
  {
    if ( v4 )
      break;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v8 = 0LL;
    v9 = Window;
    if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
                (char *)this + 112,
                &v9,
                v5,
                &v10) >= 0 )
    {
      v6 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8 * v10);
      if ( (**v6)(v6, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v8) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8) )
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      }
    }
    Window = GetWindow(Window, 4u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  return v4;
}
