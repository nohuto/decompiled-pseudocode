/*
 * XREFs of ?_Destroy@?$_Ref_count@VCStreamConnectionImpl@CMonitorManager@@@std@@EEAAXXZ @ 0x1800FFB70
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x1800F9E84 (--_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z.c)
 */

CMonitorManager::CStreamConnectionImpl *__fastcall std::_Ref_count<CMonitorManager::CStreamConnectionImpl>::_Destroy(
        __int64 a1)
{
  CMonitorManager::CStreamConnectionImpl *v1; // rcx
  CMonitorManager::CStreamConnectionImpl *result; // rax

  v1 = *(CMonitorManager::CStreamConnectionImpl **)(a1 + 16);
  if ( v1 )
    return CMonitorManager::CStreamConnectionImpl::`scalar deleting destructor'(v1);
  return result;
}
