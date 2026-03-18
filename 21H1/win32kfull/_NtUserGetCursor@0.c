/*
 * XREFs of _NtUserGetCursor@0 @ 0x162861
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserGetCursor()
{
  int v0; // esi
  int *v1; // eax

  v0 = 0;
  EnterCrit(0, 1);
  v1 = *(int **)(*(_DWORD *)(_gptiCurrent + 236) + 276);
  if ( v1 )
    v0 = *v1;
  UserSessionSwitchLeaveCrit();
  return v0;
}
