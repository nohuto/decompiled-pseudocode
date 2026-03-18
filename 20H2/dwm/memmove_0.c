/*
 * XREFs of memmove_0 @ 0x140004AE3
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140008590 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x1400088AC (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     GetImageTuple @ 0x140009FB8 (GetImageTuple.c)
 *     ??$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@QEAAPEAUHotkeyRegistration@HotKeyClient@@QEAU23@AEBU23@@Z @ 0x14000A574 (--$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@-$vector@UHotkeyRegistration@HotKey.c)
 *     ?UnregisterHotKey@HotKeyClient@@UEAAJII@Z @ 0x14000BC90 (-UnregisterHotKey@HotKeyClient@@UEAAJII@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
