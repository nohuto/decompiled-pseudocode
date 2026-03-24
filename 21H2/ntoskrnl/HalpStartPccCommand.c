/*
 * XREFs of HalpStartPccCommand @ 0x140866C28
 * Callers:
 *     HalpSendPccCommand @ 0x140866BBC (HalpSendPccCommand.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     HalpUpdateCoolingPacket @ 0x1404DCA00 (HalpUpdateCoolingPacket.c)
 *     HalpAcquirePccInterface @ 0x140866824 (HalpAcquirePccInterface.c)
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
  if ( qword_140C48CC0 )
    return (*((__int64 (__fastcall **)(_QWORD))&xmmword_140C48C90 + 1))(*((_QWORD *)&xmmword_140C48C70 + 1));
  return 3221225488LL;
}
