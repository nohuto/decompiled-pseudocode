/*
 * XREFs of PpmEnableWmiInterface @ 0x1407C33EC
 * Callers:
 *     PopNewProcessorCallback @ 0x1408E36E0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140219160 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x1402FE150 (KeQueryGroupAffinity.c)
 *     IoWMIRegistrationControl @ 0x14074E0D0 (IoWMIRegistrationControl.c)
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
