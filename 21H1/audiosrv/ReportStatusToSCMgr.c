/*
 * XREFs of ReportStatusToSCMgr @ 0x180062564
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180038940 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180062120 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180062400 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x180062490 (ServiceStart.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180115D00 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x180115EC0 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_18019F66C = a1;
  dword_18019F674 = a2;
  dword_18019F680 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_18019F670 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_18019F67C = 0;
  else
    dword_18019F67C = dword_18019E880++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
