/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@@Z @ 0x1802F9C74
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1802F94E8 (--$_Emplace_reallocate@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorF.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@@Z @ 0x1802F935C (--$_Destroy_range@V-$allocator@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<MonitorFrame> *,Microsoft::WRL::ComPtr<MonitorFrame> *,std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(a3, a3);
  return a3;
}
