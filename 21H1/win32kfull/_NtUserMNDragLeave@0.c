/*
 * XREFs of _NtUserMNDragLeave@0 @ 0x1662D8
 * Callers:
 *     <none>
 * Callees:
 *     _xxxMNDragLeave@0 @ 0x1A7618 (_xxxMNDragLeave@0.c)
 */

int __stdcall NtUserMNDragLeave()
{
  int v0; // esi

  EnterCrit(0, 1);
  v0 = xxxMNDragLeave();
  UserSessionSwitchLeaveCrit();
  return v0;
}
