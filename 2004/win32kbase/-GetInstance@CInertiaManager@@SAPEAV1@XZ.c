/*
 * XREFs of ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0003D70
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C019C468 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A26DC (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A2B7C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01A2BF0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01A3020 (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A3F04 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01BCE08 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 * Callees:
 *     <none>
 */

struct CInertiaManager *CInertiaManager::GetInstance(void)
{
  if ( (dword_1C024D038 & 1) == 0 )
  {
    qword_1C0250820 = 0LL;
    dword_1C024D038 |= 1u;
  }
  return (struct CInertiaManager *)&qword_1C0250820;
}
