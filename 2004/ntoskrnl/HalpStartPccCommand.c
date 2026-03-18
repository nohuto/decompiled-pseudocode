/*
 * XREFs of HalpStartPccCommand @ 0x1408635F8
 * Callers:
 *     HalpSendPccCommand @ 0x14086358C (HalpSendPccCommand.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HalpUpdateCoolingPacket @ 0x1404D7A60 (HalpUpdateCoolingPacket.c)
 *     HalpAcquirePccInterface @ 0x1408631F4 (HalpAcquirePccInterface.c)
 */

__int64 HalpStartPccCommand()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v2[136]; // [rsp+30h] [rbp-88h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x80uLL);
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  if ( !HalpUpdateCoolingPacket(0LL) )
  {
    if ( (int)HalpAcquirePccInterface(*(_BYTE *)(HalpAcpiMpst + 36), &DestinationString, v2) < 0 )
      return 3221225488LL;
    HalpUpdateCoolingPacket((__int64)v2);
  }
  if ( qword_140C48AE0 )
    return (*((__int64 (__fastcall **)(_QWORD))&xmmword_140C48AB0 + 1))(*((_QWORD *)&xmmword_140C48A90 + 1));
  return 3221225488LL;
}
