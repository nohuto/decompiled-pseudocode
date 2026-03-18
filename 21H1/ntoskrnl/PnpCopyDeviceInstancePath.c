/*
 * XREFs of PnpCopyDeviceInstancePath @ 0x14078C6B4
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 */

void __fastcall PnpCopyDeviceInstancePath(__int64 a1, const UNICODE_STRING *a2)
{
  RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 40), a2);
}
