/*
 * XREFs of _SetUserPTPEnabledPreference@12 @ 0x183CE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall SetUserPTPEnabledPreference(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // [esp+0h] [ebp-8h] BYREF
  int v5; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  v5 = 1;
  if ( _grpWinStaList && AccessPTPEnabledStatus(0, 1, &v5) )
    _gPTPEnabled = v5;
  result = RIMFindConfigDeviceForInput(a3, a2, a1, &v4);
  if ( result )
  {
    if ( v5 )
      return RIMUnRevokeConfigurationChange(v4, 87);
    else
      return RIMRevokeConfigurationChange(v4, 87);
  }
  return result;
}
