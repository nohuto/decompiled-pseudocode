/*
 * XREFs of __GetLicensingType@0 @ 0x159AB1
 * Callers:
 *     _ValidateDeviceSignature@36 @ 0x15991D (_ValidateDeviceSignature@36.c)
 * Callees:
 *     <none>
 */

int __stdcall _GetLicensingType()
{
  int v0; // esi
  int v2; // [esp+8h] [ebp-Ch] BYREF
  int v3; // [esp+Ch] [ebp-8h] BYREF
  int v4; // [esp+10h] [ebp-4h] BYREF

  v2 = 4;
  v0 = 0;
  v4 = 0;
  v3 = 0;
  if ( (int)ZwQueryLicenseValue(&szTHQAPolicyName, &v4, &v3, 4, &v2) >= 0 && v4 == 4 )
    return v3;
  return v0;
}
