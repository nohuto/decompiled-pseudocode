/*
 * XREFs of DpiQueryAdapterRegistryInfo @ 0x1C015C760
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DpiQueryAdapterRegistryInfo(__int64 a1, char *a2)
{
  char v4; // bl
  __int64 result; // rax

  v4 = 0;
  memset(a2, 0, 0x820uLL);
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.AdapterString", a2, 518LL, 2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  else
  {
    v4 = 1;
  }
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.BiosString", a2 + 520, 518LL, 2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  else
  {
    v4 = 1;
  }
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.DacType", a2 + 1040, 518LL, 2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  else
  {
    v4 = 1;
  }
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.ChipType", a2 + 1560, 518LL, 2);
  if ( (_DWORD)result == -1073741772 )
  {
    if ( v4 )
      return 0LL;
  }
  return result;
}
