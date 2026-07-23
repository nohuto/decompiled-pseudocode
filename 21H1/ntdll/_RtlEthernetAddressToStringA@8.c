/*
 * XREFs of _RtlEthernetAddressToStringA@8 @ 0x4B3619C0
 * Callers:
 *     <none>
 * Callees:
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 */

PSTR __stdcall RtlEthernetAddressToStringA(const DL_EUI48 *Addr, PSTR S)
{
  size_t v3; // [esp-20h] [ebp-20h]

  HIDWORD(v3) = "%02X-%02X-%02X-%02X-%02X-%02X";
  LODWORD(v3) = 18;
  return &S[sprintf_s(
              S,
              v3,
              (const char *const)Addr->Byte[0],
              Addr->Byte[1],
              Addr->Byte[2],
              Addr->Byte[3],
              Addr->Byte[4],
              Addr->Byte[5])];
}
