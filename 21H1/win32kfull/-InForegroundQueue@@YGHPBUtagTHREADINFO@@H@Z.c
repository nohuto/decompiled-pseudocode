/*
 * XREFs of ?InForegroundQueue@@YGHPBUtagTHREADINFO@@H@Z @ 0x1112C
 * Callers:
 *     _NtUserCheckProcessForClipboardAccess@8 @ 0x11072 (_NtUserCheckProcessForClipboardAccess@8.c)
 *     _NtUserGetClipboardData@8 @ 0x161F6A (_NtUserGetClipboardData@8.c)
 * Callees:
 *     ?ForegroundInputOwnerMatch@@YGHPBUtagTHREADINFO@@H@Z @ 0x11182 (-ForegroundInputOwnerMatch@@YGHPBUtagTHREADINFO@@H@Z.c)
 *     _IsDebuggerAttached@4 @ 0x197BE (_IsDebuggerAttached@4.c)
 */

BOOL __thiscall InForegroundQueue(_DWORD *this)
{
  const struct tagTHREADINFO *v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  return IsDebuggerAttached(this[58])
      || _gpqForeground
      && (this[59] == _gpqForeground
       || (*(_DWORD *)(this[58] + 8) & 0x4080000) == 0x4080000
       || ForegroundInputOwnerMatch(v3, v4));
}
