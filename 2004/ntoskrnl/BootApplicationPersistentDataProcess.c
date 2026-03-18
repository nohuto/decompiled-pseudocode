/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140A42FD0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140A42B1C (ExInitSystemPhase2.c)
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1403B0B7C (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403B0C98 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140A42C80 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140A42D10 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140A42DA0 (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140A42E94 (BapdpProcessBootMetadata.c)
 *     BapdpProcessHSTIResults @ 0x140A42F40 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140A430C0 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140A43190 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A43260 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x140A43474 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x140A43900 (BapdpRecordIumStatus.c)
 */

void __fastcall BootApplicationPersistentDataProcess(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_140CF2630 != &qword_140CF2630 )
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
      v3 = (PVOID *)qword_140CF2638;
      v4 = (PVOID *)*((_QWORD *)qword_140CF2638 + 1);
      if ( *(__int64 **)qword_140CF2638 == &qword_140CF2630 )
      {
        while ( *v4 == v3 )
        {
          qword_140CF2638 = v4;
          *v4 = &qword_140CF2630;
          if ( v3 == (PVOID *)&qword_140CF2630 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140CF2638;
          if ( *(__int64 **)qword_140CF2638 != &qword_140CF2630 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140CF2638 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( (_DWORD)a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
