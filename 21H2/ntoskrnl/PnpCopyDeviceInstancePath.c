/*
 * XREFs of PnpCopyDeviceInstancePath @ 0x1407A53E4
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 */

void __fastcall PnpCopyDeviceInstancePath(__int64 a1, const UNICODE_STRING *a2)
{
  RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 40), a2);
}
