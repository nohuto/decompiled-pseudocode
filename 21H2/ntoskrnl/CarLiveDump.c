/*
 * XREFs of CarLiveDump @ 0x1406053C0
 * Callers:
 *     CarDoLiveDump @ 0x1406052FC (CarDoLiveDump.c)
 * Callees:
 *     CarEtwWriteLiveDumpEvent @ 0x140602AEC (CarEtwWriteLiveDumpEvent.c)
 *     CarDeleteTelemetryData @ 0x140603744 (CarDeleteTelemetryData.c)
 *     DifiDbgPrint @ 0x140605160 (DifiDbgPrint.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CarLiveDump(PVOID P)
{
  int v2; // eax
  int v3; // edx
  int v4; // r8d

  v2 = DbgkWerCaptureLiveKernelDump(
         L"VerifierExt",
         qword_140C18ED8,
         qword_140C18EE0,
         CarLiveDumpData,
         (__int64)CarLiveDumpCallBack,
         0);
  if ( v2 >= 0 )
  {
    if ( CarLiveDumpData )
      CarEtwWriteLiveDumpEvent((int *)CarLiveDumpData, v3, v4);
    CarPreviousDumpTime = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    DifiDbgPrint("Livedump failed with Status code: 0x%X \n", v2);
  }
  if ( qword_140C18EE8 )
  {
    ExFreePoolWithTag(qword_140C18EE8, 0x4E726143u);
    qword_140C18EE8 = 0LL;
  }
  CarDeleteTelemetryData((void **)&CarLiveDumpData);
  if ( P )
    ExFreePoolWithTag(P, 0x4E726143u);
  _InterlockedExchange(&CarLkdInProgress, 0);
}
