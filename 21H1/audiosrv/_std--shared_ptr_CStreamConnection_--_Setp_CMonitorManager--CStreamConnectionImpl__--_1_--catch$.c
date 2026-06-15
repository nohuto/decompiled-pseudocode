/*
 * XREFs of _std::shared_ptr_CStreamConnection_::_Setp_CMonitorManager::CStreamConnectionImpl__::_1_::catch$1 @ 0x1800FA179
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180074B37 (_CxxThrowException_0.c)
 *     ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x1800FAA54 (--_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::shared_ptr_CStreamConnection_::_Setp_CMonitorManager::CStreamConnectionImpl__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  CMonitorManager::CStreamConnectionImpl *v2; // rcx

  v2 = *(CMonitorManager::CStreamConnectionImpl **)(a2 + 56);
  if ( v2 )
    CMonitorManager::CStreamConnectionImpl::`scalar deleting destructor'(v2, a2);
  throw;
}
