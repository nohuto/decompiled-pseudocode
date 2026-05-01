/*
 * XREFs of sub_18008509C @ 0x18008509C
 * Callers:
 *     sub_180076F40 @ 0x180076F40 (sub_180076F40.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

LONG __fastcall sub_18008509C(PCWSTR packageFullName, __int64 a2)
{
  LONG result; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  WCHAR v11; // ax
  UINT32 packageFamilyNameLength[4]; // [rsp+20h] [rbp-B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+30h] [rbp-A8h] BYREF

  memset(packageFamilyName, 0, 0x82uLL);
  packageFamilyNameLength[0] = 65;
  result = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0xC0070000;
  }
  else
  {
    v5 = *(_OWORD *)&packageFamilyName[8];
    *(_OWORD *)a2 = *(_OWORD *)packageFamilyName;
    v6 = *(_OWORD *)&packageFamilyName[16];
    *(_OWORD *)(a2 + 16) = v5;
    v7 = *(_OWORD *)&packageFamilyName[24];
    *(_OWORD *)(a2 + 32) = v6;
    v8 = *(_OWORD *)&packageFamilyName[32];
    *(_OWORD *)(a2 + 48) = v7;
    v9 = *(_OWORD *)&packageFamilyName[40];
    *(_OWORD *)(a2 + 64) = v8;
    v10 = *(_OWORD *)&packageFamilyName[48];
    *(_OWORD *)(a2 + 80) = v9;
    *(_OWORD *)(a2 + 96) = v10;
    v11 = packageFamilyName[64];
    *(_OWORD *)(a2 + 112) = *(_OWORD *)&packageFamilyName[56];
    *(_WORD *)(a2 + 128) = v11;
    return 0;
  }
  return result;
}
