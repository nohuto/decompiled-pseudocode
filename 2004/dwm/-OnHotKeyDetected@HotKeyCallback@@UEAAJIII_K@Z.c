/*
 * XREFs of ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K@Z @ 0x1400081E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x1400095D8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 */

__int64 __fastcall HotKeyCallback::OnHotKeyDetected(HotKeyCallback *this, int a2, int a3, int a4)
{
  if ( !a2 && a3 == 14 && a4 == 66 )
    BlackScreenDiagnostics::RunDiagnosticsFromHotkey(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
  return 0LL;
}
