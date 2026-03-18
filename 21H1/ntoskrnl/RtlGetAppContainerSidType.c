/*
 * XREFs of RtlGetAppContainerSidType @ 0x14070D180
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x140678680 (SepValidateReferencedCachedHandles.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x14070D9A8 (RtlIsParentOfChildAppContainer.c)
 *     RtlGetAppContainerParent @ 0x14090F130 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14090FED8 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14035C470 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(char *Sid, _DWORD *a2)
{
  UCHAR v4; // cl

  if ( (unsigned __int8)Sid[1] >= 2u
    && *Sid == 1
    && RtlCompareMemory(Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)Sid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(Sid);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
