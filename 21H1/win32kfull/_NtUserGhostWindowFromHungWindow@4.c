/*
 * XREFs of _NtUserGhostWindowFromHungWindow@4 @ 0x72B8C
 * Callers:
 *     <none>
 * Callees:
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 */

int __stdcall NtUserGhostWindowFromHungWindow(int a1)
{
  int v1; // esi
  int v2; // eax
  int *v3; // eax

  v1 = 0;
  EnterSharedCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    v3 = (int *)_GhostWindowFromHungWindow(v2);
    if ( v3 )
      v1 = *v3;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
