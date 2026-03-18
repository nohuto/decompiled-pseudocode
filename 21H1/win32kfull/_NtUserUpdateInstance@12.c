/*
 * XREFs of _NtUserUpdateInstance@12 @ 0x16AE32
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxChangeMonitorFlags@8 @ 0xE3CE8 (_xxxChangeMonitorFlags@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserUpdateInstance(int a1, unsigned int *a2, int a3)
{
  int v3; // esi
  unsigned int *v4; // ecx
  int v5; // eax
  unsigned int v6; // eax

  v3 = 0;
  EnterCrit(0, 1);
  v4 = a2;
  if ( (unsigned int)a2 >= _MmUserProbeAddress )
    v4 = (unsigned int *)_MmUserProbeAddress;
  *v4 = *v4;
  v5 = HMValidateHandleNoRip(a1, 9);
  if ( v5 )
  {
    xxxChangeMonitorFlags(v5, a3);
    v6 = MonitorFlags;
  }
  else
  {
    v3 = 16390;
    v6 = 0;
  }
  *a2 = v6;
  UserSessionSwitchLeaveCrit();
  return v3;
}
