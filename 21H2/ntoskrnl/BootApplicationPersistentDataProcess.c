/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140B1C0FC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 *     ExInitSystemPhase2 @ 0x140B1BBE4 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessSpacesBootInformation @ 0x1403CCC40 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessEtwEvents @ 0x1403CCD08 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403CCE24 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140B1BD88 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140B1BE18 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140B1BEA8 (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140B1BF9C (BapdpProcessBootMetadata.c)
 *     BapdpProcessHSTIResults @ 0x140B1C06C (BapdpProcessHSTIResults.c)
 *     BapdpRegisterWbclData @ 0x140B1C22C (BapdpRegisterWbclData.c)
 *     BapdpProcessResumeInformation @ 0x140B1C2F4 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140B1C3C8 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B1C49C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessBCDCache @ 0x140B1C78C (BapdpProcessBCDCache.c)
 *     BapdpRecordIumStatus @ 0x140B1CB28 (BapdpRecordIumStatus.c)
 *     ExpInitializeMemoryMirroring @ 0x140B1CC30 (ExpInitializeMemoryMirroring.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  PVOID *v4; // rbx
  PVOID *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *PoolWithTag; // rax

  if ( (__int64 *)qword_140D00130 == &qword_140D00130 )
  {
LABEL_11:
    if ( a1 == 2 )
    {
      BapdpProcessBCDCache(1LL);
      BapdpProcessVsmKeyBlobs(1LL);
    }
    return;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExpInitializeMemoryMirroring();
      BapdpProcessBootMetadata();
      BapdpProcessSpacesBootInformation(v1);
      BapdpRecordIumStatus();
      BapdpProcessEtwEvents(v2);
      BapdpProcessHSTIResults(v3);
      BapdpMarshallBootDataToRegistry();
      v4 = (PVOID *)qword_140D00138;
      v5 = (PVOID *)*((_QWORD *)qword_140D00138 + 1);
      if ( *(__int64 **)qword_140D00138 == &qword_140D00130 )
      {
        while ( *v5 == v4 )
        {
          qword_140D00138 = v5;
          *v5 = &qword_140D00130;
          if ( v4 == (PVOID *)&qword_140D00130 )
            return;
          ExFreePoolWithTag(v4[2], 0);
          ExFreePoolWithTag(v4, 0);
          v4 = (PVOID *)qword_140D00138;
          if ( *(__int64 **)qword_140D00138 != &qword_140D00130 )
            break;
          v5 = (PVOID *)*((_QWORD *)qword_140D00138 + 1);
        }
      }
      __fastfail(3u);
    }
    goto LABEL_11;
  }
  BapdpProcessWmdResults();
  BapdpProcessResumeInformation();
  BapdpProcessBitlockerStatus();
  BapdpRegisterWbclData(0LL);
  BapdpRegisterWbclData(1LL);
  BapdpProcessBCDCache(0LL);
  BapdpProcessVsmKeyBlobs(0LL);
  BapdpProcessEDrvHintInfo(v6);
  BapdpProcessFwUpdateResults(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3696LL);
  if ( v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64506142u);
    ExpFwRamdiskInfo = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *(_OWORD *)PoolWithTag = *(_OWORD *)v8;
      PoolWithTag[2] = *(_QWORD *)(v8 + 16);
    }
  }
}
