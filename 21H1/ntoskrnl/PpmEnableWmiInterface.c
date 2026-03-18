/*
 * XREFs of PpmEnableWmiInterface @ 0x1407B1A4C
 * Callers:
 *     PopNewProcessorCallback @ 0x1408DC530 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x14033B2A0 (KeQueryGroupAffinity.c)
 *     IoWMIRegistrationControl @ 0x14073D970 (IoWMIRegistrationControl.c)
 */

int PpmEnableWmiInterface()
{
  unsigned int i; // ebx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v2; // rcx

  for ( i = 0; i < 0x40; ++i )
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, i) )
    {
      GroupAffinity = KeGetPrcb(i);
      v2 = GroupAffinity;
      if ( GroupAffinity )
      {
        LODWORD(GroupAffinity) = _InterlockedCompareExchange((volatile signed __int32 *)(GroupAffinity + 33000), 1, 0);
        if ( !(_DWORD)GroupAffinity )
          LODWORD(GroupAffinity) = IoWMIRegistrationControl((PDEVICE_OBJECT)(v2 + 32992), 0x80000001);
      }
    }
  }
  return GroupAffinity;
}
