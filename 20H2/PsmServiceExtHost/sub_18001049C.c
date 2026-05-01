/*
 * XREFs of sub_18001049C @ 0x18001049C
 * Callers:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_180007F50 @ 0x180007F50 (sub_180007F50.c)
 *     sub_18000D7E8 @ 0x18000D7E8 (sub_18000D7E8.c)
 *     sub_18000D980 @ 0x18000D980 (sub_18000D980.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

bool __fastcall sub_18001049C(__int64 a1)
{
  char v1; // bl
  int v4[4]; // [rsp+30h] [rbp-B8h] BYREF
  WCHAR String1[72]; // [rsp+40h] [rbp-A8h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 624) == 2 )
  {
    v1 = 0;
    memset(String1, 0, 0x82uLL);
    v4[0] = 130;
    if ( (int)PsmGetApplicationNameFromKey(a1 + 88, String1, v4) >= 0 )
      return CompareStringOrdinal(String1, -1, L"ppleae38af2e007f4358a809ac99a64a67c1", -1, 1) == 2;
  }
  return v1;
}
