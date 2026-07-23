/*
 * XREFs of _RtlIsParentOfChildAppContainer@8 @ 0x4B346550
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetAppContainerSidType@8 @ 0x4B3463A0 (_RtlGetAppContainerSidType@8.c)
 */

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  _DWORD *v2; // edx
  unsigned int v3; // edi
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [esp+Ch] [ebp-4h] BYREF

  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ParentAppContainerSidType
    && RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ChildAppContainerSidType )
  {
    v2 = (char *)ChildAppContainerSid + 12;
    v3 = 1;
    while ( *(_DWORD *)((char *)v2 + (_BYTE *)ParentAppContainerSid - (_BYTE *)ChildAppContainerSid) == *v2 )
    {
      ++v3;
      ++v2;
      if ( v3 >= 8 )
        return 1;
    }
  }
  return 0;
}
