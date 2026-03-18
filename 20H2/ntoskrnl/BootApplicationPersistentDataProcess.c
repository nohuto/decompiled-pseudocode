/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140A49270
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140A48DBC (ExInitSystemPhase2.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1403B34EC (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403B3608 (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140A48F20 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140A48FB0 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140A49040 (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140A49134 (BapdpProcessBootMetadata.c)
 *     BapdpProcessHSTIResults @ 0x140A491E0 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140A49360 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140A49430 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A49500 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x140A49714 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x140A49BA0 (BapdpRecordIumStatus.c)
 */

void __fastcall BootApplicationPersistentDataProcess(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_140CF26F0 != &qword_140CF26F0 )
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
      v3 = (PVOID *)qword_140CF26F8;
      v4 = (PVOID *)*((_QWORD *)qword_140CF26F8 + 1);
      if ( *(__int64 **)qword_140CF26F8 == &qword_140CF26F0 )
      {
        while ( *v4 == v3 )
        {
          qword_140CF26F8 = v4;
          *v4 = &qword_140CF26F0;
          if ( v3 == (PVOID *)&qword_140CF26F0 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140CF26F8;
          if ( *(__int64 **)qword_140CF26F8 != &qword_140CF26F0 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140CF26F8 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( (_DWORD)a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
