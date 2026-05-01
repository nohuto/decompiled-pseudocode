/*
 * XREFs of sub_1800297B0 @ 0x1800297B0
 * Callers:
 *     sub_180029064 @ 0x180029064 (sub_180029064.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 *     sub_180037A20 @ 0x180037A20 (sub_180037A20.c)
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800297B0(__int64 a1, UINT32 *a2, WCHAR *a3)
{
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+24h] [rbp-DCh] BYREF
  int v9; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR packageFullName[128]; // [rsp+150h] [rbp+50h] BYREF

  v7 = 256;
  packageFamilyNameLength = 65;
  v9 = 130;
  result = PsmGetPackageFullNameFromKey(a1, packageFullName, &v7);
  if ( (int)result >= 0 )
  {
    if ( PackageFamilyNameFromFullName(packageFullName, &packageFamilyNameLength, packageFamilyName) )
    {
      return 3221225485LL;
    }
    else
    {
      result = PsmGetApplicationNameFromKey(a1, packageRelativeApplicationId, &v9);
      if ( (int)result >= 0 )
        return FormatApplicationUserModelId(packageFamilyName, packageRelativeApplicationId, a2, a3) != 0
             ? 0xC0000023
             : 0;
    }
  }
  return result;
}
