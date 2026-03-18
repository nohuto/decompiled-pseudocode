/*
 * XREFs of ConPrintf @ 0x1C0065BD0
 * Callers:
 *     ProcessEvalObj @ 0x1C0001CF0 (ProcessEvalObj.c)
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     InsertReadyQueue @ 0x1C00043E0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00054D0 (AsyncEvalObject.c)
 *     ParseCall @ 0x1C00067A0 (ParseCall.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseScope @ 0x1C00084D0 (ParseScope.c)
 *     ParseSuperName @ 0x1C0008F90 (ParseSuperName.c)
 *     AccFieldUnit @ 0x1C0009CF0 (AccFieldUnit.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AB70 (AMLIGetNameSpaceObjectNoLock.c)
 *     ReadObject @ 0x1C000B100 (ReadObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000ECDC (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0012120 (AMLIEvalPackageElement.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     ACPIDockIsDockDevice @ 0x1C00209E0 (ACPIDockIsDockDevice.c)
 *     ParseName @ 0x1C0021264 (ParseName.c)
 *     ParseFieldList @ 0x1C00219D8 (ParseFieldList.c)
 *     ParseField @ 0x1C0021AD0 (ParseField.c)
 *     ParsePackage @ 0x1C0021EA0 (ParsePackage.c)
 *     ParseOpcode @ 0x1C00222D0 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C00224C4 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C0022584 (ParseArgObj.c)
 *     ParseLocalObj @ 0x1C002306C (ParseLocalObj.c)
 *     ParseInteger @ 0x1C002C7E0 (ParseInteger.c)
 *     AMLIDebugger @ 0x1C0065AF0 (AMLIDebugger.c)
 *     CatError @ 0x1C0065B40 (CatError.c)
 *     DebugInPort @ 0x1C0065EB0 (DebugInPort.c)
 *     DebugNotify @ 0x1C0065FB0 (DebugNotify.c)
 *     DebugQuit @ 0x1C0066240 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C00662B0 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C00666E4 (PrintBuffData.c)
 *     PrintIndent @ 0x1C0066760 (PrintIndent.c)
 *     PrintObject @ 0x1C00667A4 (PrintObject.c)
 *     RunMethodCallBack @ 0x1C00668C0 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C00675A8 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C006826C (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C00687D0 (BreakPoint.c)
 *     ToDecStr @ 0x1C006A6C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C006AA90 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C006B680 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C00BE218 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0062FA4 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C00834F0, 0x400uLL, pszFormat, va);
  if ( qword_1C00828E8 )
    return qword_1C00828E8(byte_1C00834F0, qword_1C00828F0);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C00834F0);
}
