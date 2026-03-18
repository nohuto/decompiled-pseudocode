/*
 * XREFs of _NtUserInteractiveControlQueryUsage@20 @ 0x165A0F
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z @ 0x1ADF4C (-GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z.c)
 */

int __stdcall NtUserInteractiveControlQueryUsage(
        unsigned int a1,
        USHORT LinkCollection,
        USAGE UsagePage,
        USAGE Usage,
        int *a5)
{
  int v5; // esi
  int *v6; // ecx
  InteractiveControlManager *v7; // eax
  int v9; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v9 = 0;
  v5 = 1;
  EnterSharedCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v6 = a5;
  if ( (unsigned int)a5 >= _MmUserProbeAddress )
    v6 = (int *)_MmUserProbeAddress;
  *v6 = *v6;
  ms_exc.registration.TryLevel = -2;
  v7 = InteractiveControlManager::Instance();
  if ( InteractiveControlManager::GetReportExtendedUsage(
         v7,
         (unsigned __int16)a1,
         HIWORD(a1),
         UsagePage,
         LinkCollection,
         Usage,
         &v9) < 0 )
  {
    v5 = 0;
  }
  else
  {
    *a5 = v9;
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
