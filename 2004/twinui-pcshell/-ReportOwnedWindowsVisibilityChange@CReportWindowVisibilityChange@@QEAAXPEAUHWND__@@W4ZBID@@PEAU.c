/*
 * XREFs of ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18000B8C8
 * Callers:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x1800204C4 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x180186A00 (-SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z.c)
 * Callees:
 *     ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x18000B94C (-_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000B9E8 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     WPP_SF_qll @ 0x18015B71C (WPP_SF_qll.c)
 */

unsigned __int8 __fastcall CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
        CReportWindowVisibilityChange *a1,
        __int64 a2,
        unsigned int a3,
        struct IImmersiveMonitor *a4,
        struct IImmersiveApplicationInternal *a5,
        __int64 a6)
{
  unsigned __int8 result; // al
  __int64 v10; // r8
  int v11; // ebx
  int v12; // esi

  result = CReportWindowVisibilityChange::IsReportingEnabled(a1, a4, a5);
  v11 = 0;
  v12 = result;
  if ( a3 == 13 || result )
    result = CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange(a1, a2, a3, a6);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LOBYTE(v11) = a3 == 13;
    return WPP_SF_qll(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, v10, a2, v11, v12);
  }
  return result;
}
