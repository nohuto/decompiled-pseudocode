/*
 * XREFs of _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$8 @ 0x180286F06
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18017B8EC (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch_8(wil *a1, __int64 a2)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _QWORD); // rbx
  unsigned int v4; // eax

  v2 = *(_QWORD *)(a2 + 208);
  v3 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL);
  v4 = wil::ResultFromCaughtException(a1);
  v3(v2, v4);
  return 0LL;
}
