/*
 * XREFs of ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x1400095D8
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400014E4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K@Z @ 0x1400081E0 (-OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K@Z.c)
 * Callees:
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x14000945C (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1400098A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

void __fastcall BlackScreenDiagnostics::RunDiagnosticsFromHotkey(BlackScreenDiagnostics *this)
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  Beep(0x1EEu, 0xC8u);
  if ( *(_QWORD *)std::chrono::steady_clock::now(&v1) - qword_140015B00 < 30000000000LL )
  {
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(0, 4u);
  }
  else
  {
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(0, 7u);
    qword_140015B00 = *(_QWORD *)std::chrono::steady_clock::now(&v1);
  }
}
