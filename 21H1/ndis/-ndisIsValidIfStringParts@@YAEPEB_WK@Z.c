/*
 * XREFs of ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0039C04
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C002581C (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ndisIfCreateNetworkBlock @ 0x1C0034A50 (ndisIfCreateNetworkBlock.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0039BEC (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00B4238 (ndisNsiChangeNetworkInfo.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C0126E08 (ndisIfUpdateStringIfNeeded.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014573C (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsValidIfStringParts(const wchar_t *a1, unsigned int a2)
{
  unsigned __int8 result; // al

  if ( a2 > 0x200 )
    return 0;
  result = 1;
  if ( (a2 & 1) != 0 )
    return 0;
  return result;
}
