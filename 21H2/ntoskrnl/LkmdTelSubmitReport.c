/*
 * XREFs of LkmdTelSubmitReport @ 0x1409831F0
 * Callers:
 *     WheapReportLiveDump @ 0x14095E474 (WheapReportLiveDump.c)
 * Callees:
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     LkmdTelpWriteDumpFile @ 0x1409832B8 (LkmdTelpWriteDumpFile.c)
 */

__int64 __fastcall LkmdTelSubmitReport(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = LkmdTelpWriteDumpFile();
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
    v3 = v4;
    if ( v4 < 0 )
      DbgPrintEx(
        5u,
        0,
        "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelSubmitReport failed, status 0x%X\n",
        (unsigned int)v4);
  }
  else
  {
    DbgPrintEx(5u, 0, "LKMDTEL: LkmdTelSubmitReport: LkmdTelpWriteDumpFile failed, status 0x%X\n", (unsigned int)v2);
  }
  if ( *(_QWORD *)(a1 + 96) )
  {
    if ( v3 < 0 )
    {
      v5 = WerLiveKernelCancelReport();
      if ( v5 < 0 )
        DbgPrintEx(5u, 1u, "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelCancelReport failed, status 0x%X\n", v5);
    }
    v6 = WerLiveKernelCloseHandle(*(_QWORD *)(a1 + 96));
    if ( v6 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelCloseHandle failed, status 0x%X\n", v6);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return (unsigned int)v3;
}
