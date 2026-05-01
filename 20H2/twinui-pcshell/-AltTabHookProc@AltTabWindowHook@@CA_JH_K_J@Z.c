/*
 * XREFs of ?AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z @ 0x18031F7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetController@AltTabWindowHookData@@QEAAPE$AAVXamlAltTabViewController@@XZ @ 0x18031F918 (-GetController@AltTabWindowHookData@@QEAAPE$AAVXamlAltTabViewController@@XZ.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x18031FFC8 (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
LRESULT __fastcall AltTabWindowHook::AltTabHookProc(int code, WPARAM wParam, int *lParam)
{
  int v6; // r9d
  PSRWLOCK *i; // rbx
  PSRWLOCK *v8; // rbp
  __int64 Controller; // r14
  __int64 v10; // rdi

  v6 = *lParam;
  if ( (((_DWORD)wParam - 257) & 0xFFFFFFFB) == 0
    && (v6 == 18 || (unsigned int)(v6 - 164) <= 1)
    && (lParam[2] & 0x20) == 0 )
  {
    AcquireSRWLockShared(&AltTabWindowHook::s_altTabHookLock);
    v8 = (PSRWLOCK *)*((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1);
    for ( i = (PSRWLOCK *)AltTabWindowHook::s_altTabHooks; i != v8; i += 2 )
    {
      Controller = AltTabWindowHookData::GetController(*i);
      v10 = __abi_winrt_ptr_ctor(Controller);
      if ( Controller )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Controller + 16LL))(Controller);
      if ( v10 )
      {
        XamlAltTabViewController::OnAltKeyUp(v10);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    ReleaseSRWLockShared(&AltTabWindowHook::s_altTabHookLock);
  }
  return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
}
