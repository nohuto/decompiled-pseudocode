/*
 * XREFs of ReportStatusToSCMgr @ 0x180062664
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180038930 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180062220 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180062500 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x180062590 (ServiceStart.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180115DC0 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x180115F80 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_18019F65C = a1;
  dword_18019F664 = a2;
  dword_18019F670 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_18019F660 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_18019F66C = 0;
  else
    dword_18019F66C = dword_18019E870++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
