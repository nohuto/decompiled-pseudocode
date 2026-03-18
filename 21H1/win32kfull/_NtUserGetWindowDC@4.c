/*
 * XREFs of _NtUserGetWindowDC@4 @ 0x979C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserGetWindowDC(int a1)
{
  int DCEx; // esi
  int v2; // eax

  DCEx = 0;
  EnterSharedCrit(0, 1);
  if ( !a1 )
  {
    v2 = 0;
    goto LABEL_3;
  }
  v2 = ValidateHwnd(a1);
  if ( v2 )
LABEL_3:
    DCEx = _GetDCEx(v2, 0, 65537);
  UserSessionSwitchLeaveCrit();
  return DCEx;
}
