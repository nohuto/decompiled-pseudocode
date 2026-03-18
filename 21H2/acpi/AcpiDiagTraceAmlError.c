/*
 * XREFs of AcpiDiagTraceAmlError @ 0x1C0047CA8
 * Callers:
 *     ParseArgObj @ 0x1C00083D4 (ParseArgObj.c)
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     ParseArg @ 0x1C000B10C (ParseArg.c)
 *     ParseOpcode @ 0x1C000B180 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     SyncEvalObject @ 0x1C000B990 (SyncEvalObject.c)
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     ParseName @ 0x1C000BE54 (ParseName.c)
 *     ParseNameTail @ 0x1C000D580 (ParseNameTail.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     Package @ 0x1C00122B0 (Package.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0015500 (ParseSuperName.c)
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     ParseFieldList @ 0x1C0015C40 (ParseFieldList.c)
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     IfElse @ 0x1C0015FE0 (IfElse.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     AccFieldUnit @ 0x1C0016690 (AccFieldUnit.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     PushCall @ 0x1C0016ABC (PushCall.c)
 *     PushTerm @ 0x1C0016BE8 (PushTerm.c)
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     Store @ 0x1C0016F00 (Store.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     Method @ 0x1C0017300 (Method.c)
 *     Return @ 0x1C00174B0 (Return.c)
 *     WriteFieldLoop @ 0x1C0017A60 (WriteFieldLoop.c)
 *     WriteField @ 0x1C0017D20 (WriteField.c)
 *     ParseAcquire @ 0x1C0017EA0 (ParseAcquire.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     CreateXField @ 0x1C0018484 (CreateXField.c)
 *     PushScope @ 0x1C0018570 (PushScope.c)
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     Buffer @ 0x1C0018F50 (Buffer.c)
 *     Index @ 0x1C0019050 (Index.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     CopyObjBuffer @ 0x1C0019958 (CopyObjBuffer.c)
 *     Field @ 0x1C0019CE0 (Field.c)
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 *     AccessBaseField @ 0x1C001AE70 (AccessBaseField.c)
 *     WriteBuffField @ 0x1C001B368 (WriteBuffField.c)
 *     CreateField @ 0x1C001B760 (CreateField.c)
 *     Release @ 0x1C001C1A0 (Release.c)
 *     Acquire @ 0x1C001C290 (Acquire.c)
 *     ReadBuffField @ 0x1C001CA14 (ReadBuffField.c)
 *     NewGlobalHeap @ 0x1C0022190 (NewGlobalHeap.c)
 *     Load @ 0x1C0022220 (Load.c)
 *     LoadMemDDB @ 0x1C0022558 (LoadMemDDB.c)
 *     LoadDDB @ 0x1C00225B8 (LoadDDB.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     ParseRelease @ 0x1C0024F10 (ParseRelease.c)
 *     OpRegion @ 0x1C0025430 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C0025584 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C00256B8 (AmlpValidateFirmwareMemoryAddress.c)
 *     ResetSignal @ 0x1C0026970 (ResetSignal.c)
 *     WriteCookAccess @ 0x1C0026A60 (WriteCookAccess.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     LogOp2_32 @ 0x1C00276D0 (LogOp2_32.c)
 *     ConcatenateResTemplate @ 0x1C00277F0 (ConcatenateResTemplate.c)
 *     NewObjOwner @ 0x1C00285B8 (NewObjOwner.c)
 *     ParseObjName @ 0x1C0028CA8 (ParseObjName.c)
 *     MidString @ 0x1C0028D90 (MidString.c)
 *     ToHexStr @ 0x1C0028EF0 (ToHexStr.c)
 *     AMLIRegEventHandler @ 0x1C00292D8 (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C00294BC (RegEventHandler.c)
 *     RegRSAccess @ 0x1C00294E4 (RegRSAccess.c)
 *     Wait @ 0x1C002A600 (Wait.c)
 *     ProcessIncDec @ 0x1C002AD60 (ProcessIncDec.c)
 *     PerformMutexDriverCallbacks @ 0x1C002AEB8 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C002AFB0 (InitMutex.c)
 *     PowerRes @ 0x1C002B420 (PowerRes.c)
 *     Processor @ 0x1C002B9F0 (Processor.c)
 *     ObjTypeSizeOf @ 0x1C002BEA0 (ObjTypeSizeOf.c)
 *     InitEvent @ 0x1C002DF60 (InitEvent.c)
 *     IndexField @ 0x1C002E000 (IndexField.c)
 *     Notify @ 0x1C00319E0 (Notify.c)
 *     AcquireGL @ 0x1C0066318 (AcquireGL.c)
 *     GetFieldUnitRegionObj @ 0x1C00666B8 (GetFieldUnitRegionObj.c)
 *     RegOpcodeHandler @ 0x1C0066F34 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C00683E8 (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0068620 (BankField.c)
 *     RawFieldAccess @ 0x1C0069244 (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 *     SleepStall @ 0x1C0069CD0 (SleepStall.c)
 *     CopyObject @ 0x1C0069E40 (CopyObject.c)
 *     LoadTable @ 0x1C006A0B0 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C006AF60 (ToDecStr.c)
 *     ToString @ 0x1C006B340 (ToString.c)
 *     ParseFieldConnection @ 0x1C006BCC4 (ParseFieldConnection.c)
 *     SyncLoadDDB @ 0x1C00BC4EC (SyncLoadDDB.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BF108 (InitIllegalIOAddressListFromHAL.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
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
