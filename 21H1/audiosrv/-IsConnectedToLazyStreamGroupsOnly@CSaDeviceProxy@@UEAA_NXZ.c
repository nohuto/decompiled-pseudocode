/*
 * XREFs of ?IsConnectedToLazyStreamGroupsOnly@CSaDeviceProxy@@UEAA_NXZ @ 0x1800E6150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSaDeviceProxy::IsConnectedToLazyStreamGroupsOnly(CSaDeviceProxy *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 23);
  result = 0;
  if ( v1 )
    return v1 == *((_DWORD *)this + 20);
  return result;
}
