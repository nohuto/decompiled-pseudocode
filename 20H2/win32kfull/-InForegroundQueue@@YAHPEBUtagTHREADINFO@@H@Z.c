/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002CAAC
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0008740 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserGetClipboardData @ 0x1C0016EF0 (NtUserGetClipboardData.c)
 *     CheckCursorClipAccess @ 0x1C002C990 (CheckCursorClipAccess.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C002CEAC (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002D1A8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

_BOOL8 __fastcall InForegroundQueue(const struct tagTHREADINFO *a1, int a2)
{
  return (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 53))
      || gpqForeground
      && (*((_QWORD *)a1 + 54) == gpqForeground
       || (*(_DWORD *)(*((_QWORD *)a1 + 53) + 12LL) & 0x4080000) == 0x4080000
       || (unsigned int)ForegroundInputOwnerMatch(a1, a2));
}
