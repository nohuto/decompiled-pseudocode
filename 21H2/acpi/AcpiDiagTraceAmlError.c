/*
 * XREFs of AcpiDiagTraceAmlError @ 0x1C002B810
 * Callers:
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     LogOp2_32 @ 0x1C0002198 (LogOp2_32.c)
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     ParseRelease @ 0x1C0003760 (ParseRelease.c)
 *     SyncEvalObject @ 0x1C0004490 (SyncEvalObject.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     CreateNameSpaceObject @ 0x1C0006720 (CreateNameSpaceObject.c)
 *     ParseCall @ 0x1C0006B60 (ParseCall.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0009160 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0009350 (ParseSuperName.c)
 *     IfElse @ 0x1C0009C70 (IfElse.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     AccFieldUnit @ 0x1C000A0B0 (AccFieldUnit.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     Return @ 0x1C000A590 (Return.c)
 *     ParseAcquire @ 0x1C000A6C0 (ParseAcquire.c)
 *     NewObjData @ 0x1C000A9E8 (NewObjData.c)
 *     Store @ 0x1C000AAB0 (Store.c)
 *     WriteObject @ 0x1C000AC60 (WriteObject.c)
 *     While @ 0x1C000AE00 (While.c)
 *     Index @ 0x1C000B100 (Index.c)
 *     ValidateTarget @ 0x1C000B264 (ValidateTarget.c)
 *     Buffer @ 0x1C000B340 (Buffer.c)
 *     AMLIEvalPkgDataElement @ 0x1C000F09C (AMLIEvalPkgDataElement.c)
 *     PerformMutexDriverCallbacks @ 0x1C0010328 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C0010410 (InitMutex.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     Package @ 0x1C0021320 (Package.c)
 *     ParseName @ 0x1C00214C4 (ParseName.c)
 *     ParseNameTail @ 0x1C00215A0 (ParseNameTail.c)
 *     SleepStall @ 0x1C0021740 (SleepStall.c)
 *     ParseAndGetNameSpaceObject @ 0x1C00217BC (ParseAndGetNameSpaceObject.c)
 *     PushCall @ 0x1C00219CC (PushCall.c)
 *     Field @ 0x1C0021B10 (Field.c)
 *     ParseFieldList @ 0x1C0021C38 (ParseFieldList.c)
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 *     ParseObjName @ 0x1C0021FB4 (ParseObjName.c)
 *     ParseArg @ 0x1C0022094 (ParseArg.c)
 *     ParsePackage @ 0x1C0022100 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0022530 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C0022724 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C00227E4 (ParseArgObj.c)
 *     PushScope @ 0x1C0022A38 (PushScope.c)
 *     WriteField @ 0x1C0022B30 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0022C68 (CopyObjBuffer.c)
 *     Acquire @ 0x1C0022CF0 (Acquire.c)
 *     PushFrame @ 0x1C0022DD8 (PushFrame.c)
 *     Release @ 0x1C0022E60 (Release.c)
 *     Processor @ 0x1C0023330 (Processor.c)
 *     NewObjOwner @ 0x1C0023628 (NewObjOwner.c)
 *     LoadDDB @ 0x1C002372C (LoadDDB.c)
 *     IndexField @ 0x1C00237F0 (IndexField.c)
 *     PowerRes @ 0x1C0023BB0 (PowerRes.c)
 *     NewGlobalHeap @ 0x1C0024270 (NewGlobalHeap.c)
 *     ReadField @ 0x1C0024420 (ReadField.c)
 *     ReadBuffField @ 0x1C00244E8 (ReadBuffField.c)
 *     GetFieldUnitRegionObj @ 0x1C00248F8 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C0024994 (WriteBuffField.c)
 *     PushAccFieldObj @ 0x1C0024C10 (PushAccFieldObj.c)
 *     LoadMemDDB @ 0x1C0024D60 (LoadMemDDB.c)
 *     Load @ 0x1C0024DC0 (Load.c)
 *     Notify @ 0x1C00250D0 (Notify.c)
 *     WriteFieldLoop @ 0x1C0027250 (WriteFieldLoop.c)
 *     Method @ 0x1C0028A20 (Method.c)
 *     PushTerm @ 0x1C0028F14 (PushTerm.c)
 *     CreateXField @ 0x1C00291A8 (CreateXField.c)
 *     IncDec @ 0x1C00297D0 (IncDec.c)
 *     WriteCookAccess @ 0x1C0029900 (WriteCookAccess.c)
 *     OpRegion @ 0x1C0029EA0 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C0029FF0 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C002A10C (AmlpValidateFirmwareMemoryAddress.c)
 *     ProcessIncDec @ 0x1C002A480 (ProcessIncDec.c)
 *     AMLIRegEventHandler @ 0x1C002C19C (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C002C390 (RegEventHandler.c)
 *     RegRSAccess @ 0x1C002C3B8 (RegRSAccess.c)
 *     AcquireGL @ 0x1C0065094 (AcquireGL.c)
 *     RegOpcodeHandler @ 0x1C0065B80 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C0066D9C (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0066FD0 (BankField.c)
 *     CreateField @ 0x1C00671F0 (CreateField.c)
 *     InitEvent @ 0x1C0067370 (InitEvent.c)
 *     RawFieldAccess @ 0x1C0067D58 (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0068A00 (ResetSignal.c)
 *     Concat @ 0x1C0068C00 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0068F10 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0069110 (CopyObject.c)
 *     LoadTable @ 0x1C00695C0 (LoadTable.c)
 *     MidString @ 0x1C0069D60 (MidString.c)
 *     ObjTypeSizeOf @ 0x1C0069FC0 (ObjTypeSizeOf.c)
 *     ProcessLoadTable @ 0x1C006A1F0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C006A850 (ToDecStr.c)
 *     ToHexStr @ 0x1C006AC20 (ToHexStr.c)
 *     ToString @ 0x1C006AF40 (ToString.c)
 *     Wait @ 0x1C006B120 (Wait.c)
 *     ParseFieldConnection @ 0x1C006BA34 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BDA5C (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00BE478 (SyncLoadDDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
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
