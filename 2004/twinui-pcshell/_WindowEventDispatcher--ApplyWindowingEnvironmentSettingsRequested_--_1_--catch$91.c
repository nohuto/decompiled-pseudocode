/*
 * XREFs of _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$91 @ 0x1802B4CB9
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18019F81C (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch_91(
        wil *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _QWORD); // rbx
  unsigned int v4; // eax

  v2 = *(_QWORD *)(a2 + 248);
  v3 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 80LL);
  v4 = wil::ResultFromCaughtException(a1);
  v3(v2, v4);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, 0LL);
  return 0LL;
}
