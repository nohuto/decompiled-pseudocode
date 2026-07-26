/*
 * XREFs of ndisIfReleaseSiteId @ 0x1C00B46C4
 * Callers:
 *     ndisNsiChangeNetworkInfo @ 0x1C00B46F8 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B4D50 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B5210 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfReleaseSiteId(unsigned int a1)
{
  int v1; // ecx
  __int64 result; // rax

  if ( byte_1C00E6211 )
  {
    if ( a1 > 0x7FFFFFF )
    {
      v1 = (dword_1C00E3798 ^ (a1 - 1)) & 0xFFFFFFF;
      result = v1 ^ (unsigned int)dword_1C00E3798;
      dword_1C00E3798 ^= v1;
    }
  }
  return result;
}
