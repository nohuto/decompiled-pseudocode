/*
 * XREFs of _NtUserEnableIAMAccess@8 @ 0xF2AAE
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CanEnableIAMAccess@12 @ 0x9280A (_CanEnableIAMAccess@12.c)
 *     __EnableIAMThreadAccess@8 @ 0xA5062 (__EnableIAMThreadAccess@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _SetLastNtError@4 @ 0x1B6D51 (_SetLastNtError@4.c)
 */

int __stdcall NtUserEnableIAMAccess(unsigned int a1, int a2)
{
  int v2; // esi
  int *v3; // ecx

  v2 = 0;
  EnterCrit(0, 1);
  v3 = (int *)a1;
  if ( a1 + 8 < a1 || a1 + 8 > _MmUserProbeAddress )
    v3 = (int *)_MmUserProbeAddress;
  if ( CanEnableIAMAccess(_gptiCurrent, *v3, v3[1]) )
  {
    v2 = _EnableIAMThreadAccess(_gptiCurrent, a2);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 24, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
    UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
