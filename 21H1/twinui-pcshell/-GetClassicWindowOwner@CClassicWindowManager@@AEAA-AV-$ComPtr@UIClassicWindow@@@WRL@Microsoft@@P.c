/*
 * XREFs of ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004ABAC
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004AFD0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x18004B5E0 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___ @ 0x18004BF80 (CClassicWindowManager--ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x18004C694 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x18013F43C (-RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004B540 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CClassicWindowManager::GetClassicWindowOwner(CClassicWindowManager *this, __int64 *a2, HWND a3)
{
  HWND i; // rcx
  HWND Window; // rax
  HWND v8; // rbx
  struct IClassicWindow *v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  *a2 = 0LL;
  for ( i = a3; ; i = v8 )
  {
    Window = GetWindow(i, 4u);
    v8 = Window;
    if ( !Window || Window == a3 || *a2 )
      break;
    if ( IsWindowVisible(Window) )
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      if ( (int)CClassicWindowManager::_FindClassicWindow(this, v8, &v10, &v11) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 128LL))(v10) )
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, (__int64 *)&v10);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
  }
  return a2;
}
