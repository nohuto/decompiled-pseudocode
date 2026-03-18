/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x1408ED92C
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14035C110 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
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
