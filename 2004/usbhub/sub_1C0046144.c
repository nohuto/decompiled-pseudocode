/*
 * XREFs of sub_1C0046144 @ 0x1C0046144
 * Callers:
 *     sub_1C003272C @ 0x1C003272C (sub_1C003272C.c)
 *     sub_1C00461A0 @ 0x1C00461A0 (sub_1C00461A0.c)
 * Callees:
 *     <none>
 */

NTSTATUS sub_1C0046144()
{
  NTSTATUS result; // eax

  result = RtlCheckRegistryKey(2u, (PWSTR)L"usbflags");
  if ( (result & 0xC0000000) == 0xC0000000 )
    return RtlCreateRegistryKey(2u, (PWSTR)L"usbflags");
  return result;
}
