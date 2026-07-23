/*
 * XREFs of _RtlGetAppContainerSidType@8 @ 0x4B3463A0
 * Callers:
 *     _RtlDefaultNpAcl@4 @ 0x4B335F90 (_RtlDefaultNpAcl@4.c)
 *     _RtlGetAppContainerParent@8 @ 0x4B3462F0 (_RtlGetAppContainerParent@8.c)
 *     _RtlIsParentOfChildAppContainer@8 @ 0x4B346550 (_RtlIsParentOfChildAppContainer@8.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 * Callees:
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

NTSTATUS __cdecl RtlGetAppContainerSidType(PSID AppContainerSid, PAPPCONTAINER_SID_TYPE AppContainerSidType)
{
  char v2; // al
  SIZE_T v4; // [esp-4h] [ebp-8h]

  if ( *((_BYTE *)AppContainerSid + 1) >= 2u
    && *(_BYTE *)AppContainerSid == 1
    && (LODWORD(v4) = 6, (unsigned int)RtlCompareMemory((char *)AppContainerSid + 2, &RtlpAppPackageAuthority, v4) == 6)
    && *((_DWORD *)AppContainerSid + 2) == 2 )
  {
    v2 = *((_BYTE *)AppContainerSid + 1);
    if ( v2 == 8 )
    {
      *AppContainerSidType = ParentAppContainerSidType;
      return 0;
    }
    if ( v2 == 12 )
    {
      *AppContainerSidType = ChildAppContainerSidType;
      return 0;
    }
    *AppContainerSidType = InvalidAppContainerSidType;
  }
  else
  {
    *AppContainerSidType = NotAppContainerSidType;
  }
  return -1073700352;
}
