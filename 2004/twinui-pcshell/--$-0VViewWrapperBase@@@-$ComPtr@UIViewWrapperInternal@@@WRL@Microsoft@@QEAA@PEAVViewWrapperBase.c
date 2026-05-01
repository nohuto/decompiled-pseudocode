/*
 * XREFs of ??$?0VViewWrapperBase@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAA@PEAVViewWrapperBase@@@Z @ 0x1802CB654
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802D30C4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IViewWrapperInternal>::ComPtr<IViewWrapperInternal>(__int64 *a1, __int64 a2)
{
  *a1 = (a2 + 8) & -(__int64)(a2 != 0);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
