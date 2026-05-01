/*
 * XREFs of ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180042044
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180041F7C (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800420E4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
