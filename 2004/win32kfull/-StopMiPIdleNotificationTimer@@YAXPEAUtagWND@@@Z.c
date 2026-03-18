/*
 * XREFs of ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E1838
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E0A4C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E25F0 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

void __fastcall StopMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // r8

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1272LL);
  if ( *(_QWORD *)a1 == *(_QWORD *)(v1 + 8) )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    FindTimer((__int64)a1, 65523LL, 2u, 1, 0LL);
  }
}
