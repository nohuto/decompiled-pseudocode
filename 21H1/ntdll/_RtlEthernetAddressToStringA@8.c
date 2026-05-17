/*
 * XREFs of _RtlEthernetAddressToStringA@8 @ 0x4B3619C0
 * Callers:
 *     <none>
 * Callees:
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 */

PSTR __stdcall RtlEthernetAddressToStringA(const DL_EUI48 *Addr, PSTR S)
{
  return &S[sprintf_s(
              S,
              0x12u,
              "%02X-%02X-%02X-%02X-%02X-%02X",
              Addr->Byte[0],
              Addr->Byte[1],
              Addr->Byte[2],
              Addr->Byte[3],
              Addr->Byte[4],
              Addr->Byte[5])];
}
