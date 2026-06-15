/*
 * XREFs of ??$?4VCStreamConnectionManager@@@?$weak_ptr@VCStreamConnectionManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VCStreamConnectionManager@@@1@@Z @ 0x180065454
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800639E0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800692C0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 *std::weak_ptr<CStreamConnectionManager>::operator=<CStreamConnectionManager>()
{
  std::_Ref_count_base *v0; // rdx
  std::_Ref_count_base *v1; // rcx

  v0 = qword_18019EEA0;
  if ( qword_18019EEA0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)qword_18019EEA0 + 3);
    v0 = qword_18019EEA0;
  }
  v1 = qword_18019EEB0;
  g_weakStreamMonitorManager = g_streamMonitorManager;
  qword_18019EEB0 = v0;
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
  return &g_weakStreamMonitorManager;
}
