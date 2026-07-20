/*
 * XREFs of SmpAsyncMemoryConfiguration @ 0x140006C80
 * Callers:
 *     <none>
 * Callees:
 *     SmpPagefileInitialize @ 0x1400067F8 (SmpPagefileInitialize.c)
 *     SmpCheckMemoryCoolingCompatibility @ 0x140006BBC (SmpCheckMemoryCoolingCompatibility.c)
 *     SmpCreatePagingFiles @ 0x14000768C (SmpCreatePagingFiles.c)
 *     SmpNtSerializeBoot @ 0x140009490 (SmpNtSerializeBoot.c)
 *     SmpIsRamdiskBoot @ 0x14001202C (SmpIsRamdiskBoot.c)
 */

char SmpAsyncMemoryConfiguration()
{
  char v0; // bl
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD SystemInformation[6]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+58h] [rbp+20h] BYREF

  SystemInformation[0] = 0;
  v0 = 1;
  v1 = SmpPagefileInitialize();
  if ( v1 >= 0 )
  {
    SmpNtSerializeBoot(v2);
    LOBYTE(v1) = SmpHostSmss;
    if ( !SmpHostSmss )
      goto LABEL_6;
    if ( !SmpUseDedicatedDumpFile )
    {
      NtSetSystemInformation(SystemCrashDumpStateInformation, SystemInformation, 4u);
      LOBYTE(v1) = SmpHostSmss;
    }
    if ( !(_BYTE)v1 )
    {
LABEL_6:
      v0 = 0;
      SmpPagefileOnOsVolume = 0;
    }
    if ( SmpMiniNTBoot == 1 )
    {
      v6 = 0;
      LOBYTE(v1) = SmpIsRamdiskBoot(&v6);
      if ( v6 == 1 )
        v0 = 0;
      else
        SmpPagefileOnOsVolume = 1;
    }
    if ( !SmpMiniNTBoot )
      LOBYTE(v1) = SmpCheckMemoryCoolingCompatibility();
    if ( v0 == 1 )
    {
      SmpCreatePagingFiles(v3);
      LOBYTE(v1) = NtInitializeRegistry(2u);
    }
    if ( SmpCrashDumpKey )
      LOBYTE(v1) = NtClose(SmpCrashDumpKey);
  }
  return v1;
}
