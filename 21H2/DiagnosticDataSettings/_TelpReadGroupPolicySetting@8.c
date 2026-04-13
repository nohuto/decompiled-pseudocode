/*
 * XREFs of _TelpReadGroupPolicySetting@8 @ 0x10002A07
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x10002EA6 (TelpEvaluateWithoutLicenseCheck.c)
 * Callees:
 *     TelpReadRegistryDword @ 0x10002211 (TelpReadRegistryDword.c)
 *     _TelpReadUsersPolicySetting@12 @ 0x10002C36 (_TelpReadUsersPolicySetting@12.c)
 */

LSTATUS __fastcall TelpReadGroupPolicySetting(_DWORD *a1, int *a2)
{
  char v4; // bl
  LSTATUS result; // eax
  int v6; // eax
  int pvData; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF
  char v9; // [esp+17h] [ebp-1h] BYREF

  pvData = 3;
  *a1 = 1;
  v4 = 1;
  result = TelpReadRegistryDword(
             &pvData,
             HKEY_LOCAL_MACHINE,
             L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
             L"AllowTelemetry");
  if ( result == -2147024894 )
  {
    v4 = 0;
  }
  else if ( result < 0 )
  {
    return result;
  }
  v9 = 1;
  v8 = 3;
  result = TelpReadUsersPolicySetting(&v9, &v8, L"AllowTelemetry");
  if ( result >= 0 || !v9 )
  {
    if ( v4 || v9 )
    {
      v6 = pvData;
      if ( pvData >= v8 )
        v6 = v8;
      *a2 = v6;
    }
    else
    {
      *a1 = 0;
    }
    return 0;
  }
  return result;
}
