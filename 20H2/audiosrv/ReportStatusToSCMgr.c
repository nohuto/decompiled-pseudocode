/*
 * XREFs of ReportStatusToSCMgr @ 0x180061EC4
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180038140 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180061A80 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180061D60 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x180061DF0 (ServiceStart.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180115130 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x1801152F0 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_18019E61C = a1;
  dword_18019E624 = a2;
  dword_18019E630 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_18019E620 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_18019E62C = 0;
  else
    dword_18019E62C = dword_18019D840++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
