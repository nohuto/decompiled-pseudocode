/*
 * XREFs of sub_180011518 @ 0x180011518
 * Callers:
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180011518(__int64 a1, _BYTE *a2)
{
  int ApplicationNameFromKey; // ebx
  int v6[4]; // [rsp+30h] [rbp-B8h] BYREF
  WCHAR String1[72]; // [rsp+40h] [rbp-A8h] BYREF

  memset(String1, 0, 0x82uLL);
  v6[0] = 130;
  *a2 = 0;
  ApplicationNameFromKey = PsmGetApplicationNameFromKey(a1, String1, v6);
  if ( ApplicationNameFromKey >= 0
    && CompareStringOrdinal(String1, -1, L"ppleae38af2e007f4358a809ac99a64a67c1", -1, 1) == 2 )
  {
    *a2 = 1;
  }
  return (unsigned int)ApplicationNameFromKey;
}
