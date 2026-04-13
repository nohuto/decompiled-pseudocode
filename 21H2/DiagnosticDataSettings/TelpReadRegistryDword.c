/*
 * XREFs of TelpReadRegistryDword @ 0x10002211
 * Callers:
 *     _TelpReadLocalSetting@8 @ 0x100029D4 (_TelpReadLocalSetting@8.c)
 *     _TelpReadGroupPolicySetting@8 @ 0x10002A07 (_TelpReadGroupPolicySetting@8.c)
 *     _TelpReadUsersPolicySetting@12 @ 0x10002C36 (_TelpReadUsersPolicySetting@12.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall TelpReadRegistryDword(PVOID pvData, HKEY hkey, LPCWSTR lpSubKey, LPCWSTR lpValue)
{
  LSTATUS result; // eax
  DWORD pcbData; // [esp+0h] [ebp-4h] BYREF

  pcbData = 4;
  result = RegGetValueW(hkey, lpSubKey, lpValue, 0x10010u, 0, pvData, &pcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
