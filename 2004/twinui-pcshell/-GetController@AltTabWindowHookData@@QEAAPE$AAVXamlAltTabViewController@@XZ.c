/*
 * XREFs of ?GetController@AltTabWindowHookData@@QEAAPE$AAVXamlAltTabViewController@@XZ @ 0x180320208
 * Callers:
 *     ?AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z @ 0x1803200B0 (-AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AltTabWindowHookData::GetController(PSRWLOCK SRWLock)
{
  __int64 v2; // rdi
  __int64 v3; // rsi

  AcquireSRWLockShared(SRWLock);
  if ( SRWLock[1].Ptr )
  {
    v2 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAltTabViewController__, &SRWLock[1]);
    v3 = __abi_winrt_ptr_ctor(v2);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  else
  {
    v3 = 0LL;
  }
  ReleaseSRWLockShared(SRWLock);
  return v3;
}
