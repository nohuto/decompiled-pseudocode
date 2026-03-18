/*
 * XREFs of _NtUserWindowFromDC@4 @ 0x9A730
 * Callers:
 *     <none>
 * Callees:
 *     __WindowFromDC@4 @ 0x9A764 (__WindowFromDC@4.c)
 */

int __stdcall NtUserWindowFromDC(int a1)
{
  int v1; // esi

  v1 = 0;
  EnterCrit(0, 1);
  if ( _WindowFromDC(a1) )
    v1 = *(_DWORD *)_WindowFromDC(a1);
  UserSessionSwitchLeaveCrit();
  return v1;
}
