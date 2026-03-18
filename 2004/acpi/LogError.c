/*
 * XREFs of LogError @ 0x1C002A08C
 * Callers:
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     LogOp2_32 @ 0x1C0002198 (LogOp2_32.c)
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     ParseRelease @ 0x1C00033A0 (ParseRelease.c)
 *     SyncEvalObject @ 0x1C00040D0 (SyncEvalObject.c)
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00054D0 (AsyncEvalObject.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     ParseCall @ 0x1C00067A0 (ParseCall.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseScope @ 0x1C00084D0 (ParseScope.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008DA0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0008F90 (ParseSuperName.c)
 *     IfElse @ 0x1C00098B0 (IfElse.c)
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     AccFieldUnit @ 0x1C0009CF0 (AccFieldUnit.c)
 *     DupObjData @ 0x1C000A040 (DupObjData.c)
 *     Return @ 0x1C000A1D0 (Return.c)
 *     ParseAcquire @ 0x1C000A300 (ParseAcquire.c)
 *     NewObjData @ 0x1C000A628 (NewObjData.c)
 *     Store @ 0x1C000A6F0 (Store.c)
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     While @ 0x1C000AA40 (While.c)
 *     Index @ 0x1C000AD40 (Index.c)
 *     ValidateTarget @ 0x1C000AEA4 (ValidateTarget.c)
 *     Buffer @ 0x1C000AF80 (Buffer.c)
 *     AMLIEvalPkgDataElement @ 0x1C000ECDC (AMLIEvalPkgDataElement.c)
 *     PerformMutexDriverCallbacks @ 0x1C00100C8 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C00101B0 (InitMutex.c)
 *     AMLIEvalPackageElement @ 0x1C0012120 (AMLIEvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020D00 (ExprOp2_64.c)
 *     Package @ 0x1C00210C0 (Package.c)
 *     ParseName @ 0x1C0021264 (ParseName.c)
 *     ParseNameTail @ 0x1C0021340 (ParseNameTail.c)
 *     SleepStall @ 0x1C00214E0 (SleepStall.c)
 *     ParseAndGetNameSpaceObject @ 0x1C002155C (ParseAndGetNameSpaceObject.c)
 *     PushCall @ 0x1C002176C (PushCall.c)
 *     Field @ 0x1C00218B0 (Field.c)
 *     ParseFieldList @ 0x1C00219D8 (ParseFieldList.c)
 *     ParseField @ 0x1C0021AD0 (ParseField.c)
 *     ParseObjName @ 0x1C0021D54 (ParseObjName.c)
 *     ParseArg @ 0x1C0021E34 (ParseArg.c)
 *     ParsePackage @ 0x1C0021EA0 (ParsePackage.c)
 *     ParseOpcode @ 0x1C00222D0 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C00224C4 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C0022584 (ParseArgObj.c)
 *     PushScope @ 0x1C00227D8 (PushScope.c)
 *     WriteField @ 0x1C00228D0 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0022A08 (CopyObjBuffer.c)
 *     Acquire @ 0x1C0022A90 (Acquire.c)
 *     PushFrame @ 0x1C0022B78 (PushFrame.c)
 *     Release @ 0x1C0022C00 (Release.c)
 *     Processor @ 0x1C00230D0 (Processor.c)
 *     NewObjOwner @ 0x1C00233C8 (NewObjOwner.c)
 *     LoadDDB @ 0x1C00234CC (LoadDDB.c)
 *     IndexField @ 0x1C0023590 (IndexField.c)
 *     PowerRes @ 0x1C0023950 (PowerRes.c)
 *     NewGlobalHeap @ 0x1C0024010 (NewGlobalHeap.c)
 *     ReadField @ 0x1C00241C0 (ReadField.c)
 *     ReadBuffField @ 0x1C0024288 (ReadBuffField.c)
 *     GetFieldUnitRegionObj @ 0x1C0024698 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C0024734 (WriteBuffField.c)
 *     PushAccFieldObj @ 0x1C00249B0 (PushAccFieldObj.c)
 *     LoadMemDDB @ 0x1C0024B00 (LoadMemDDB.c)
 *     Load @ 0x1C0024B60 (Load.c)
 *     Notify @ 0x1C0024E70 (Notify.c)
 *     WriteFieldLoop @ 0x1C0026FF0 (WriteFieldLoop.c)
 *     Method @ 0x1C00287C0 (Method.c)
 *     PushTerm @ 0x1C0028CB4 (PushTerm.c)
 *     CreateXField @ 0x1C0028F48 (CreateXField.c)
 *     IncDec @ 0x1C0029570 (IncDec.c)
 *     WriteCookAccess @ 0x1C00296A0 (WriteCookAccess.c)
 *     OpRegion @ 0x1C0029C40 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C0029D90 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C0029EAC (AmlpValidateFirmwareMemoryAddress.c)
 *     ProcessIncDec @ 0x1C002A220 (ProcessIncDec.c)
 *     AMLIRegEventHandler @ 0x1C002BF3C (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C002C130 (RegEventHandler.c)
 *     RegRSAccess @ 0x1C002C158 (RegRSAccess.c)
 *     AcquireGL @ 0x1C0064F04 (AcquireGL.c)
 *     RegOpcodeHandler @ 0x1C00659F0 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C0066C0C (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0066E40 (BankField.c)
 *     CreateField @ 0x1C0067060 (CreateField.c)
 *     InitEvent @ 0x1C00671E0 (InitEvent.c)
 *     RawFieldAccess @ 0x1C0067BC8 (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C006826C (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0068870 (ResetSignal.c)
 *     Concat @ 0x1C0068A70 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0068D80 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0068F80 (CopyObject.c)
 *     LoadTable @ 0x1C0069430 (LoadTable.c)
 *     MidString @ 0x1C0069BD0 (MidString.c)
 *     ObjTypeSizeOf @ 0x1C0069E30 (ObjTypeSizeOf.c)
 *     ProcessLoadTable @ 0x1C006A060 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C006A6C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C006AA90 (ToHexStr.c)
 *     ToString @ 0x1C006ADB0 (ToString.c)
 *     Wait @ 0x1C006AF90 (Wait.c)
 *     ParseFieldConnection @ 0x1C006B8A4 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BDB60 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00BE308 (SyncLoadDDB.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C588 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C002A144 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall LogError(int a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  dword_1C0082908 = a1;
  if ( off_1C00809F8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C00809F0 + v4) )
    {
      ++v3;
      ++v1;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C00809F0 + 2 * v3 + 1) )
        return;
    }
    v5 = 2LL * v1;
    RtlStringCchPrintfA(&pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", a1, *((const char **)&unk_1C00809F0 + 2 * v1 + 1));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v9, a1, *((_QWORD *)&unk_1C00809F0 + v5 + 1));
  }
}
