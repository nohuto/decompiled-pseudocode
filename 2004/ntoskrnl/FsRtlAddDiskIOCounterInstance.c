/*
 * XREFs of FsRtlAddDiskIOCounterInstance @ 0x14088901C
 * Callers:
 *     FsRtlDiskIOCounterSetCallback @ 0x1408890F0 (FsRtlDiskIOCounterSetCallback.c)
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x1406D9F50 (PcwAddInstance.c)
 */

NTSTATUS __fastcall FsRtlAddDiskIOCounterInstance(PPCW_BUFFER Buffer)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // edi
  __int64 Prcb; // rax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h]

  DestinationString = 0LL;
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v8 = 0LL;
  v9 = 0LL;
  if ( ActiveProcessorCount )
  {
    do
    {
      Prcb = KeGetPrcb(v2++);
      v8 += *(_QWORD *)(Prcb + 34176);
      v9 += *(_QWORD *)(Prcb + 34184);
    }
    while ( v2 < ActiveProcessorCount );
  }
  RtlInitUnicodeString(&DestinationString, L"default");
  Data.Size = 16;
  Data.Data = &v8;
  return PcwAddInstance(Buffer, &DestinationString, 0, 1u, &Data);
}
