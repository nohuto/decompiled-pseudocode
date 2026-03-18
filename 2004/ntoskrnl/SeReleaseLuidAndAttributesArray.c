/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x140618FC0
 * Callers:
 *     NtPrivilegeCheck @ 0x1406184C0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x1406186B0 (NtAdjustPrivilegesToken.c)
 *     NtCreateTokenEx @ 0x14062F9A0 (NtCreateTokenEx.c)
 *     NtAdjustGroupsToken @ 0x140631220 (NtAdjustGroupsToken.c)
 *     NtFilterToken @ 0x1406322B0 (NtFilterToken.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
