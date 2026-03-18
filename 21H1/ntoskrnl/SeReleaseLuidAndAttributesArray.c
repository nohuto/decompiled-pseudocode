/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1406706E0
 * Callers:
 *     NtPrivilegeCheck @ 0x14066FBE0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x14066FDD0 (NtAdjustPrivilegesToken.c)
 *     NtCreateTokenEx @ 0x140672E90 (NtCreateTokenEx.c)
 *     NtAdjustGroupsToken @ 0x1406759E0 (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     NtFilterToken @ 0x1407016F0 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
