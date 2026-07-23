/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140A4217C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140A42BB4 (ExInitSystemPhase2.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1403AF6A8 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403AF7C4 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140A41E2C (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140A41EBC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140A41F4C (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140A42040 (BapdpProcessBootMetadata.c)
 *     BapdpProcessHSTIResults @ 0x140A420EC (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140A4226C (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140A4233C (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4240C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x140A42620 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x140A42AAC (BapdpRecordIumStatus.c)
 */

void __fastcall BootApplicationPersistentDataProcess(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_140CF2A30 != &qword_140CF2A30 )
  {
    if ( !(_DWORD)a1 )
    {
      BapdpProcessWmdResults();
      BapdpProcessResumeInformation();
      BapdpProcessBitlockerStatus();
      BapdpRegisterWbclData(0LL);
      BapdpRegisterWbclData(1LL);
      BapdpProcessVsmKeyBlobs(0LL);
      BapdpProcessEDrvHintInfo(v5);
      BapdpProcessFwUpdateResults(v6);
      return;
    }
    if ( (_DWORD)a1 == 1 )
    {
      BapdpProcessBootMetadata(a1);
      BapdpRecordIumStatus();
      BapdpProcessEtwEvents(v1);
      BapdpProcessHSTIResults(v2);
      BapdpMarshallBootDataToRegistry();
      v3 = (PVOID *)qword_140CF2A38;
      v4 = (PVOID *)*((_QWORD *)qword_140CF2A38 + 1);
      if ( *(__int64 **)qword_140CF2A38 == &qword_140CF2A30 )
      {
        while ( *v4 == v3 )
        {
          qword_140CF2A38 = v4;
          *v4 = &qword_140CF2A30;
          if ( v3 == (PVOID *)&qword_140CF2A30 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140CF2A38;
          if ( *(__int64 **)qword_140CF2A38 != &qword_140CF2A30 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140CF2A38 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( (_DWORD)a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
