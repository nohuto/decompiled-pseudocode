/*
 * XREFs of _NtUserCanBrokerForceForeground@4 @ 0x118DA
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z @ 0x19546 (-CheckCanonicalForegroundAccess@@YG_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserCanBrokerForceForeground(ULONG a1)
{
  int v1; // esi
  int v2; // edx
  _DWORD *v3; // ecx
  int v5; // [esp+14h] [ebp-20h]

  v1 = 0;
  v5 = EnterSharedCrit(0, 1);
  if ( IsImmersiveBroker(*(_DWORD *)(v5 + 232)) )
  {
    v2 = (unsigned __int8)CheckCanonicalForegroundAccess(0);
    v3 = (_DWORD *)a1;
    if ( a1 >= _MmUserProbeAddress )
      v3 = (_DWORD *)_MmUserProbeAddress;
    *v3 = v2;
    v1 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
