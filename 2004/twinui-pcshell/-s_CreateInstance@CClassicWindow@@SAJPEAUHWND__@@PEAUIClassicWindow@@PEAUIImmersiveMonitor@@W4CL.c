/*
 * XREFs of ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x18004C240
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x18004B8D0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004BA00 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ??0CClassicWindow@@QEAA@PEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@@Z @ 0x18004CCA8 (--0CClassicWindow@@QEAA@PEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061670 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindow::s_CreateInstance(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  unsigned int v5; // ebx
  void *v10; // rax
  __int64 v11; // rdi
  _DWORD *v12; // rcx

  v5 = 0;
  *a5 = 0LL;
  v10 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 && (v11 = CClassicWindow::CClassicWindow(v10, a1, a2, a3, a4)) != 0 )
  {
    *a5 = 0LL;
    if ( InlineIsEqualGUID(&GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v12, v12) )
    {
      *a5 = v11;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      v5 = -2147467262;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
