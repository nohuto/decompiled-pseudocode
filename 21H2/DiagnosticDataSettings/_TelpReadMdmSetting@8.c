/*
 * XREFs of _TelpReadMdmSetting@8 @ 0x10002A92
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x10002EA6 (TelpEvaluateWithoutLicenseCheck.c)
 * Callees:
 *     _TelGetNumericPolicy@12 @ 0x10002610 (_TelGetNumericPolicy@12.c)
 *     _TelpReadUsersPolicySetting@12 @ 0x10002C36 (_TelpReadUsersPolicySetting@12.c)
 */

int __fastcall TelpReadMdmSetting(_DWORD *a1, int *a2)
{
  int v2; // esi
  char v4; // bl
  int result; // eax
  int pvData; // [esp+10h] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-8h] BYREF
  char v9; // [esp+1Bh] [ebp-1h] BYREF

  pvData = 0;
  v8 = 0;
  v2 = 3;
  v4 = 1;
  *a1 = 1;
  result = TelGetNumericPolicy((int)L"AllowTelemetry", &v8, &pvData);
  if ( result >= 0 )
  {
    if ( v8 )
      v2 = pvData;
    else
      v4 = 0;
    v9 = 1;
    v8 = 3;
    result = TelpReadUsersPolicySetting(&v9, &v8, L"AllowTelemetry_PolicyManager");
    if ( result >= 0 || !v9 )
    {
      if ( v4 || v9 )
      {
        if ( v2 >= v8 )
          v2 = v8;
        *a2 = v2;
      }
      else
      {
        *a1 = 0;
      }
      return 0;
    }
  }
  return result;
}
