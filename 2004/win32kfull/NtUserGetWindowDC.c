/*
 * XREFs of NtUserGetWindowDC @ 0x1C00FB2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetWindowDC(__int64 a1)
{
  __int64 DCEx; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  EnterSharedCrit(0LL, 1LL);
  DCEx = 0LL;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_3;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    DCEx = _GetDCEx(v3, 0LL, 65537LL);
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return DCEx;
}
