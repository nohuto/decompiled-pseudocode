/*
 * XREFs of TelpEvaluateWithoutLicenseCheck @ 0x10002EA6
 * Callers:
 *     _TelEvaluateActiveSettingAuthority@8 @ 0x10002F70 (_TelEvaluateActiveSettingAuthority@8.c)
 * Callees:
 *     _TelpReadLocalSetting@8 @ 0x100029D4 (_TelpReadLocalSetting@8.c)
 *     _TelpReadGroupPolicySetting@8 @ 0x10002A07 (_TelpReadGroupPolicySetting@8.c)
 *     _TelpReadMdmSetting@8 @ 0x10002A92 (_TelpReadMdmSetting@8.c)
 *     _TelpReadEnterpriseGovSetting@8 @ 0x10002B1F (_TelpReadEnterpriseGovSetting@8.c)
 */

signed int __fastcall TelpEvaluateWithoutLicenseCheck(unsigned int *a1, _DWORD *a2)
{
  signed int v4; // ebx
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h] BYREF
  char v8; // [esp+17h] [ebp-1h] BYREF

  v8 = 1;
  v4 = TelpReadEnterpriseGovSetting(&v8, a1);
  if ( v8 )
  {
    if ( a2 )
      *a2 = 3;
  }
  else
  {
    v7 = 1;
    v4 = TelpReadGroupPolicySetting(&v7, (int *)a1);
    if ( v7 )
    {
      if ( a2 )
        *a2 = 0;
    }
    else
    {
      v4 = TelpReadMdmSetting(&v7, (int *)a1);
      if ( v7 )
      {
        if ( a2 )
          *a2 = 1;
      }
      else
      {
        if ( a2 )
          *a2 = 2;
        v4 = TelpReadLocalSetting(&v8, a1);
        if ( !v8 )
        {
          v7 = 1;
          v6 = 4;
          NtQueryLicenseValue(&unk_10005010, 0, &v7, 4, &v6);
          *a1 = v7;
        }
      }
    }
  }
  return v4;
}
