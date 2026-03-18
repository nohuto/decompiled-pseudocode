/*
 * XREFs of ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001BB8
 * Callers:
 *     WinMain @ 0x1400018F0 (WinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x1400018A4 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXXZH@Z @ 0x140001CD8 (-Start@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@QEAAXP6AXXZH@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001D50 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001EC4 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 */

__int64 __fastcall CDwmAppHost::Run(CDwmAppHost *this)
{
  int started; // eax
  CDwmAppHost *v2; // rcx
  int v3; // ebx
  int v4; // eax
  void (*v5)(void); // rdx
  int v6; // r8d
  CDwmAppHost *v7; // rcx
  int v8; // eax
  MSG Msg; // [rsp+30h] [rbp-38h] BYREF
  CDwmAppHost *v11; // [rsp+70h] [rbp+8h] BYREF

  v11 = this;
  memset(&Msg, 0, sizeof(Msg));
  started = CDwmAppHost::StartComposition(this);
  v3 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x9Eu);
  }
  else
  {
    v4 = CDwmAppHost::LpcSyncFlush(v2);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xA6u);
    }
    else
    {
      LODWORD(v11) = 0;
      RtlGetDeviceFamilyInfoEnum(0LL, &v11, 0LL);
      if ( (_DWORD)v11 != 10 )
        BlackScreenDiagnostics::CLongPowerButtonHoldListener::Start(
          (BlackScreenDiagnostics::CLongPowerButtonHoldListener *)&byte_140015B90,
          v5,
          v6);
      while ( GetMessageW(&Msg, 0LL, 0, 0) )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
      if ( (_DWORD)v11 != 10 )
      {
        if ( byte_140015B90 )
        {
          v7 = (CDwmAppHost *)qword_140015B98;
          byte_140015B90 = 0;
          if ( qword_140015B98 )
          {
            v8 = RtlUnsubscribeWnfStateChangeNotification();
            v7 = (CDwmAppHost *)qword_140015B98;
            if ( v8 >= 0 )
              v7 = 0LL;
            qword_140015B98 = (__int64)v7;
          }
        }
      }
      if ( hwnd )
        CDwmAppHost::OnClose(v7);
    }
  }
  if ( v3 >= 0 )
    return uExitCode;
  return (unsigned int)v3;
}
