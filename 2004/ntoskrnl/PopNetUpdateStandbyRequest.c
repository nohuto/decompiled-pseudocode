/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x1408EEC1C
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402FE9E0 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 PopNetUpdateStandbyRequest()
{
  int v0; // ebx

  if ( PopNetBIServiceSid )
  {
    v0 = RtlCheckTokenMembership(0LL, (void *)PopNetBIServiceSid);
    if ( v0 >= 0 )
      return (unsigned int)-1073741790;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v0;
}
