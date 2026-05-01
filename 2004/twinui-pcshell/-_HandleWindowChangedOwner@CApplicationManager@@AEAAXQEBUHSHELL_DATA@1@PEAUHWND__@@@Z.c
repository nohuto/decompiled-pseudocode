/*
 * XREFs of ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1800827CC
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800379B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180040280 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x180082CFC (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180156160 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18015675C (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleWindowChangedOwner(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2,
        HWND a3)
{
  __int64 v5; // rbp
  int v6; // eax
  char v7; // si
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *(_QWORD *)a2;
  v6 = *((_DWORD *)a2 + 4);
  if ( v6 == 1 )
  {
    v7 = 1;
    v8 = *((_QWORD *)a2 + 1);
    v9 = 16;
    v10[0] = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 *, HWND))(**((_QWORD **)this + 67) + 80LL))(*((_QWORD *)this + 67), &v8, a3);
    if ( v5 != 27 && IsWindowVisible(*((HWND *)a2 + 1)) )
      CApplicationManager::_TryPresentDesktopExperience(this, *((_QWORD *)a2 + 1), 3LL, v10[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  }
  else
  {
    v7 = 0;
    if ( (unsigned int)(v6 - 2) <= 1 )
      CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a2, a3);
  }
  if ( v5 == 27 )
  {
    if ( v7 )
      CApplicationManager::_HandleActivation2((__int64)this, (__int64)a2, 3);
    else
      CApplicationManager::_HandleActivation(this, a2);
  }
}
