/*
 * XREFs of RtlGetAppContainerSidType @ 0x1406FB810
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14068E2B0 (SepValidateReferencedCachedHandles.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406FCB64 (RtlIsParentOfChildAppContainer.c)
 *     RtlGetAppContainerParent @ 0x140916010 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140916DB8 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140340E40 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
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
