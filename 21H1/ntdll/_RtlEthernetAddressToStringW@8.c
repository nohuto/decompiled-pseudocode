/*
 * XREFs of _RtlEthernetAddressToStringW@8 @ 0x4B361BA0
 * Callers:
 *     <none>
 * Callees:
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 */

PWSTR __stdcall RtlEthernetAddressToStringW(const DL_EUI48 *Addr, PWSTR S)
{
  size_t v3; // [esp-20h] [ebp-24h]

  HIDWORD(v3) = L"%02X-%02X-%02X-%02X-%02X-%02X";
  LODWORD(v3) = 18;
  return &S[swprintf_s(
              (wchar_t *const)S,
              v3,
              (const wchar_t *const)Addr->Byte[0],
              Addr->Byte[1],
              Addr->Byte[2],
              Addr->Byte[3],
              Addr->Byte[4],
              Addr->Byte[5])];
}
