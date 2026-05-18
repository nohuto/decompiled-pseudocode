/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000A950
 * Callers:
 *     ?WaitForLsa@@YAJXZ @ 0x1800088B0 (-WaitForLsa@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180008DD4 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800093D8 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180009840 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180009C00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x18000A0E0 (DwmpCreateSessionProcess.c)
 *     DwmpNotifyUserLogon @ 0x18000A270 (DwmpNotifyUserLogon.c)
 *     DwmpNotifyUserLogoff @ 0x18000A4F0 (DwmpNotifyUserLogoff.c)
 *     DwmpSignalSessionShutdown @ 0x18000AC30 (DwmpSignalSessionShutdown.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  PVOID retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
