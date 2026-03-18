/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C0062800
 * Callers:
 *     <none>
 * Callees:
 *     _EnableIAMThreadAccess @ 0x1C0062904 (_EnableIAMThreadAccess.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  EnterCrit(0LL, 1LL);
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v4 = *a1;
  v5 = *(_QWORD **)(gptiCurrent + 448LL);
  v6 = v5[1];
  v7 = *(_QWORD *)(v6 + 176);
  v8 = 0;
  if ( *(_QWORD *)(gptiCurrent + 416LL) == v7 && v7 && *(_QWORD *)(v6 + 168) && v5[36] && v4 == v5[35] )
  {
    v8 = EnableIAMThreadAccess(gptiCurrent, a2);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v4,
        2,
        24,
        (__int64)&WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
    }
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v8;
}
