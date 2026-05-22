/*
 * XREFs of ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800764B4
 * Callers:
 *     _lambda_ca1dd57b0795afeb4485e1a66ba69688_::operator() @ 0x1800752EC (_lambda_ca1dd57b0795afeb4485e1a66ba69688_--operator().c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18007751C (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180077E34 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
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
