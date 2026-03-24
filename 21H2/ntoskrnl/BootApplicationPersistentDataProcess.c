/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140A4117C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140A41BB4 (ExInitSystemPhase2.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1403AF538 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403AF654 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140A40E2C (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140A40EBC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140A40F4C (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140A41040 (BapdpProcessBootMetadata.c)
 *     BapdpProcessHSTIResults @ 0x140A410EC (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140A4126C (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140A4133C (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4140C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x140A41620 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x140A41AAC (BapdpRecordIumStatus.c)
 */

void __fastcall BootApplicationPersistentDataProcess(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_140CF29F0 != &qword_140CF29F0 )
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
      v3 = (PVOID *)qword_140CF29F8;
      v4 = (PVOID *)*((_QWORD *)qword_140CF29F8 + 1);
      if ( *(__int64 **)qword_140CF29F8 == &qword_140CF29F0 )
      {
        while ( *v4 == v3 )
        {
          qword_140CF29F8 = v4;
          *v4 = &qword_140CF29F0;
          if ( v3 == (PVOID *)&qword_140CF29F0 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140CF29F8;
          if ( *(__int64 **)qword_140CF29F8 != &qword_140CF29F0 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140CF29F8 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( (_DWORD)a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
