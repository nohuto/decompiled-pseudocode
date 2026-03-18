/*
 * XREFs of _NtUserWindowFromPoint@8 @ 0x11F8E
 * Callers:
 *     <none>
 * Callees:
 *     _xxxWindowFromPoint@8 @ 0x9ADAE (_xxxWindowFromPoint@8.c)
 */

int __stdcall NtUserWindowFromPoint(int a1, int a2)
{
  int v2; // esi
  int *v3; // eax

  v2 = 0;
  EnterCrit(0, 1);
  v3 = (int *)xxxWindowFromPoint(a1, a2);
  if ( v3 )
    v2 = *v3;
  UserSessionSwitchLeaveCrit();
  return v2;
}
