/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00305BC
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0008750 (NtUserCheckProcessForClipboardAccess.c)
 *     CheckCursorClipAccess @ 0x1C0030640 (CheckCursorClipAccess.c)
 *     NtUserGetClipboardData @ 0x1C0057340 (NtUserGetClipboardData.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C0030344 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011CA9C (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

_BOOL8 __fastcall InForegroundQueue(__int64 **a1, int a2)
{
  return (unsigned int)IsDebuggerAttached(a1[52])
      || gpqForeground
      && (a1[53] == (__int64 *)gpqForeground
       || (*((_DWORD *)a1[52] + 3) & 0x4080000) == 0x4080000
       || (unsigned int)ForegroundInputOwnerMatch((const struct tagTHREADINFO *)a1, a2));
}
