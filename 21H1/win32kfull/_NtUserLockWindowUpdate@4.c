/*
 * XREFs of _NtUserLockWindowUpdate@4 @ 0x165D64
 * Callers:
 *     <none>
 * Callees:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 */

int __stdcall NtUserLockWindowUpdate(int a1)
{
  int v1; // esi
  int v2; // eax

  v1 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v2 = ValidateHwnd(a1);
    if ( !v2 )
      goto LABEL_6;
  }
  else
  {
    v2 = 0;
  }
  v1 = zzzLockWindowUpdate2(v2, 0);
LABEL_6:
  UserSessionSwitchLeaveCrit();
  return v1;
}
