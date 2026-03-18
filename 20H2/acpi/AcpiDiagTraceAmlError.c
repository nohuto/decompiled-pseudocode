/*
 * XREFs of AcpiDiagTraceAmlError @ 0x1C002B5B0
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
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagTraceAmlError(__int64 a1, int a2)
{
  int v2; // r10d
  int v3; // r9d
  __int64 v4; // rax
  char *v5; // rdx
  __int64 *v6; // r8
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 v9; // rax
  char *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int16 v13; // ax
  int v15; // [rsp+30h] [rbp-19h] BYREF
  char v16; // [rsp+34h] [rbp-15h]
  int v17; // [rsp+38h] [rbp-11h] BYREF
  char v18; // [rsp+3Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v20; // [rsp+50h] [rbp+7h]
  int v21; // [rsp+58h] [rbp+Fh]
  int v22; // [rsp+5Ch] [rbp+13h]
  int *v23; // [rsp+60h] [rbp+17h]
  __int64 v24; // [rsp+68h] [rbp+1Fh]
  __int64 v25; // [rsp+70h] [rbp+27h] BYREF
  __int16 v26; // [rsp+78h] [rbp+2Fh]
  __int64 v27; // [rsp+80h] [rbp+37h] BYREF
  __int16 v28; // [rsp+88h] [rbp+3Fh]
  int v29; // [rsp+B8h] [rbp+6Fh] BYREF

  v29 = a2;
  v28 = 0;
  v27 = 0x41002F004ELL;
  v25 = 0x41002F004ELL;
  v26 = 0;
  v2 = 3;
  v18 = 0;
  v3 = 3;
  v16 = 0;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v5 = (char *)&v15;
      v15 = *(_DWORD *)(v4 + 40);
      v6 = &v25;
      v7 = 4LL;
      do
      {
        v8 = *v5++;
        *(_WORD *)v6 = v8;
        v6 = (__int64 *)((char *)v6 + 2);
        --v7;
      }
      while ( v7 );
      v26 = 0;
      v3 = 5;
    }
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
    {
      v10 = (char *)&v17;
      v17 = *(_DWORD *)(v9 + 40);
      v11 = &v27;
      v12 = 4LL;
      do
      {
        v13 = *v10++;
        *(_WORD *)v11 = v13;
        v11 = (__int64 *)((char *)v11 + 2);
        --v12;
      }
      while ( v12 );
      v28 = 0;
      v2 = 5;
    }
  }
  UserData.Ptr = (unsigned __int64)&v25;
  UserData.Reserved = 0;
  UserData.Size = 2 * v3;
  v22 = 0;
  v20 = &v27;
  v24 = 4LL;
  v21 = 2 * v2;
  v23 = &v29;
  return EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
}
