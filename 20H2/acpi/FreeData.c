/*
 * XREFs of FreeData @ 0x1C0003328
 * Callers:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     FreeData @ 0x1C0003328 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     ParseCall @ 0x1C00067A0 (ParseCall.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseScope @ 0x1C00084D0 (ParseScope.c)
 *     Store @ 0x1C000A6F0 (Store.c)
 *     ValidateTarget @ 0x1C000AEA4 (ValidateTarget.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000B704 (ACPIIoctlEvalControlMethod.c)
 *     ACPIGetWorkerForString @ 0x1C000C130 (ACPIGetWorkerForString.c)
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001C0D0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     AMLIFreeDataBuffs @ 0x1C001D6E0 (AMLIFreeDataBuffs.c)
 *     ExprOp2_64 @ 0x1C0020D00 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026A90 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     FreeData @ 0x1C0003328 (FreeData.c)
 */

__int64 __fastcall FreeData(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData();
  }
  else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_WORD *)(a1 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(_DWORD **)(a1 + 32));
    FreeObjData(a1);
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
