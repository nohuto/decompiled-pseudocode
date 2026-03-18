/*
 * XREFs of HalpStartPccCommand @ 0x14090AF30
 * Callers:
 *     HalpSendPccCommand @ 0x14090AEC4 (HalpSendPccCommand.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpUpdateCoolingPacket @ 0x14052A6F0 (HalpUpdateCoolingPacket.c)
 *     HalpAcquirePccInterface @ 0x14090AB48 (HalpAcquirePccInterface.c)
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
  if ( qword_140C4A0C0 )
    return (*((__int64 (__fastcall **)(_QWORD))&xmmword_140C4A090 + 1))(*((_QWORD *)&xmmword_140C4A070 + 1));
  return 3221225488LL;
}
