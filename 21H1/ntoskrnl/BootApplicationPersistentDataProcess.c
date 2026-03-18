/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140A3D71C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     ExInitSystemPhase2 @ 0x140A3E154 (ExInitSystemPhase2.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     BapdpProcessEtwEvents @ 0x1403AAEF0 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403AB00C (BapdpMarshallBootDataToRegistry.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140A3D3CC (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140A3D45C (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140A3D4EC (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140A3D5E0 (BapdpProcessBootMetadata.c)
 *     BapdpProcessHSTIResults @ 0x140A3D68C (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140A3D80C (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140A3D8DC (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A3D9AC (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x140A3DBC0 (BapdpRegisterWbclData.c)
 *     BapdpRecordIumStatus @ 0x140A3E04C (BapdpRecordIumStatus.c)
 */

void __fastcall BootApplicationPersistentDataProcess(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (__int64 *)qword_140CF2770 != &qword_140CF2770 )
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
      v3 = (PVOID *)qword_140CF2778;
      v4 = (PVOID *)*((_QWORD *)qword_140CF2778 + 1);
      if ( *(__int64 **)qword_140CF2778 == &qword_140CF2770 )
      {
        while ( *v4 == v3 )
        {
          qword_140CF2778 = v4;
          *v4 = &qword_140CF2770;
          if ( v3 == (PVOID *)&qword_140CF2770 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140CF2778;
          if ( *(__int64 **)qword_140CF2778 != &qword_140CF2770 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140CF2778 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( (_DWORD)a1 == 2 )
    BapdpProcessVsmKeyBlobs(1LL);
}
