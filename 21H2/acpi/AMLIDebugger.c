/*
 * XREFs of AMLIDebugger @ 0x1C0065C80
 * Callers:
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     InsertReadyQueue @ 0x1C00047A0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AF30 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000F09C (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 *     ParseOpcode @ 0x1C0022530 (ParseOpcode.c)
 *     Load @ 0x1C0024DC0 (Load.c)
 *     CatError @ 0x1C0065CD0 (CatError.c)
 *     BreakPoint @ 0x1C0068960 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C006A1F0 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00BE388 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 *     Debugger @ 0x1C0066C38 (Debugger.c)
 */

__int64 AMLIDebugger()
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLIInit;
  if ( (gdwfAMLIInit & 0x40) != 0 )
  {
    if ( (gDebugger & 4) != 0 )
    {
      return ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
    }
    else
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
      _InterlockedOr(&gDebugger, 1u);
      result = Debugger();
      _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
    }
  }
  return result;
}
