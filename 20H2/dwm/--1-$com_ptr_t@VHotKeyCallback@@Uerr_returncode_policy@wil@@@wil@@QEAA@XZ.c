/*
 * XREFs of ??1?$com_ptr_t@VHotKeyCallback@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002E18
 * Callers:
 *     _dynamic_atexit_destructor_for__g_spHotkeyCallback__ @ 0x140004C50 (_dynamic_atexit_destructor_for__g_spHotkeyCallback__.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwner@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140006F20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwn.c)
 */

__int64 wil::com_ptr_t<HotKeyCallback,wil::err_returncode_policy>::~com_ptr_t<HotKeyCallback,wil::err_returncode_policy>()
{
  __int64 result; // rax

  if ( g_spHotkeyCallback )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHotKeyClientOwner>::Release();
  return result;
}
