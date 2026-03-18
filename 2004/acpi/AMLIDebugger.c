/*
 * XREFs of AMLIDebugger @ 0x1C0065AF0
 * Callers:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     InsertReadyQueue @ 0x1C00043E0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseScope @ 0x1C00084D0 (ParseScope.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AB70 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000ECDC (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0012120 (AMLIEvalPackageElement.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     ACPIDockIsDockDevice @ 0x1C00209E0 (ACPIDockIsDockDevice.c)
 *     ParseOpcode @ 0x1C00222D0 (ParseOpcode.c)
 *     Load @ 0x1C0024B60 (Load.c)
 *     CatError @ 0x1C0065B40 (CatError.c)
 *     BreakPoint @ 0x1C00687D0 (BreakPoint.c)
 *     ProcessLoadTable @ 0x1C006A060 (ProcessLoadTable.c)
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00BE218 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 *     Debugger @ 0x1C0066AA8 (Debugger.c)
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
