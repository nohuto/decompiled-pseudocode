/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1406311E0
 * Callers:
 *     NtPrivilegeCheck @ 0x1406306E0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x1406308D0 (NtAdjustPrivilegesToken.c)
 *     NtFilterToken @ 0x1406A83E0 (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x1406A87B0 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x1406A8DE0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
