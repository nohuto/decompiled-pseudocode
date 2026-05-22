/*
 * XREFs of ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x180076A64
 * Callers:
 *     _lambda_d0c09d0932768c03c0e90aa394de0ab2_::operator() @ 0x18003FDAC (_lambda_d0c09d0932768c03c0e90aa394de0ab2_--operator().c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180077ACC (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x1800783D4 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  char v3; // bl

  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 72LL))(a2) )
    return (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 264LL))(a2) != 0;
  return v3;
}
