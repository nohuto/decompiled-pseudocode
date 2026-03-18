/*
 * XREFs of DpiIsXboxOne @ 0x1C019779C
 * Callers:
 *     DpiInitializeGlobalState @ 0x1C03051B0 (DpiInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

bool DpiIsXboxOne()
{
  _QWORD v1[2]; // [rsp+30h] [rbp-10h] BYREF
  int v2; // [rsp+50h] [rbp+10h] BYREF
  int v3; // [rsp+58h] [rbp+18h] BYREF
  int v4; // [rsp+60h] [rbp+20h] BYREF

  v2 = 0;
  v4 = 0;
  v3 = 0;
  v1[1] = L"Kernel-OneCore-DeviceFamilyID";
  v1[0] = 3932218LL;
  return (int)ZwQueryLicenseValue(v1, &v4, &v2, 4LL, &v3) >= 0 && v2 == 5;
}
